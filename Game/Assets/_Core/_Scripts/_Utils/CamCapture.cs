﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System;

public class CamCapture : Singleton<CamCapture> {
	
	public Color[] selectedPalette = null;
	WebCamTexture webcamtex = null;
	Texture2D permOutTex;
	UITexture setMat = null;
	bool doneOnce = false;
	bool processingDone = false;

	Mutex mutex;
	Color[] calculatedColors;
	Color[] defaultColors = new Color[]{};

	public int _blockSize = 4;
	public bool upContrast = false;
	public float contrastUpper = 0.5f;
	public bool upBrightness = false;
	public float brightnessUpper = 0.2f;
	public bool invertColors = false;

	struct ThreadData {
		public int width;
		public int height;
		public int blockSize;
		public int totalBlocks;
		public Color[] inPixels;
	}

	public enum Palette {
		TETRIS,
		GAMEBOY,
		DEFAULT
	}

	public Palette palette;

	void Awake() {
		/*Texture2D tex = Resources.Load("_Palettes/Colors-NES") as Texture2D;
		defaultColors = tex.ExtractColors();

		WebCamDevice[] devices = WebCamTexture.devices;
		for (int i = 0; i < devices.Length; i++) {
			if (i == 0) {
				webcamtex = new WebCamTexture(devices[i].name);
				webcamtex.Play();
				break;
			}
		}*/
	}

	Color[] GetPalette() {
		if (palette == Palette.TETRIS) {
			return new Color[] {
				(Color) new Color32(50, 194, 255, 255),
				(Color) new Color32(20, 18, 167, 255),
				(Color) new Color32(66, 64, 255, 255),
				(Color) new Color32(66, 64, 255, 255),
				(Color) new Color32(21, 95, 217, 255),
				(Color) new Color32(100, 176, 255, 255),
				(Color) new Color32(192, 223, 255, 255),
				(Color) new Color32(72, 205, 222, 255),
				(Color) new Color32(228, 229, 148, 255),
				(Color) new Color32(255, 129, 112, 255),
				(Color) new Color32(0, 0, 0, 255),
				(Color) new Color32(255, 255, 255, 255)
			};
		}
		else if (palette == Palette.GAMEBOY) {
			return new Color[] {
				(Color) new Color32(15,56,15,255),
				(Color) new Color32(48,98,48,255),
				(Color) new Color32(139,172,15,255),
				(Color) new Color32(155,188,15,255)
			};
		}
		else {
			return defaultColors;
		}
	}

	void UpdateICK() {
		if (setMat == null) {
			setMat = GameObject.Find("MothershipPortrait").GetComponent<UITexture>();
		}

		selectedPalette = GetPalette();

		if (webcamtex.didUpdateThisFrame && !doneOnce) {
			doneOnce = true;
			if (!webcamtex.isPlaying) {
				webcamtex.Play();
			}
			ThreadedCapture();
		}

		if (processingDone) {
			permOutTex.SetPixels(calculatedColors);
			permOutTex.Apply();
			processingDone = false;
			doneOnce = false;	
		}

		if (Input.GetKeyDown(KeyCode.Space)) {
			doneOnce = false;
		}
	}

	void ThreadedCapture() {
		if (mutex == null)
		{
			mutex = new Mutex(false);
		}

		ThreadData data = new ThreadData();
		data.blockSize = _blockSize;
		
		var extra = webcamtex.width - webcamtex.height;
		var start = Mathf.FloorToInt(((float)extra)*0.5f);
		//var end = webcamtex.width - (start);

		var blocks = Mathf.Ceil(webcamtex.height / data.blockSize);

		data.width = webcamtex.height;
		data.height = webcamtex.height;
		data.inPixels = webcamtex.GetPixels(start, 0, webcamtex.height, webcamtex.height);
		data.totalBlocks = Mathf.FloorToInt(blocks * blocks);

		if (permOutTex == null) {
			permOutTex = new Texture2D(webcamtex.height, webcamtex.height);
			setMat.mainTexture = permOutTex;
		}

		Thread thread = new Thread(new ParameterizedThreadStart(processCanvas));
		thread.Start(data);
	}

	void processCanvas(System.Object context) {

		try {
			ThreadData data = (ThreadData) context;

			calculatedColors = new Color[data.inPixels.Length];

			if (upBrightness) IncreaseBrightness(data, brightnessUpper);
			if (upContrast) IncreaseContrast(data, contrastUpper);
			if (invertColors) InvertColors(data);

			for(var x = 0; x < data.width; x += data.blockSize) {
				for(var y = 0; y < data.height; y += data.blockSize) {
					Color avgColor = processBlock(data, x, y, data.totalBlocks);

					var width = data.blockSize;
					if(x + data.blockSize >= data.width) {
						width = data.width - x;
					}
					
					var height = data.blockSize;
					if(y + data.blockSize >= data.height) {
						height = data.height - y;
					}

					SetPixels(calculatedColors, x, y, data, width, height, avgColor);
				}
			}

			processingDone = true;
		}
		catch (Exception e) {
			Debug.Log (e);
		}
	}

	void IncreaseBrightness(ThreadData data, float amount) {
		for (int i = 0; i < data.inPixels.Length; i++) {
			Color c = data.inPixels[i];
			data.inPixels[i] = new Color(c.r + amount, c.g + amount, c.b + amount, c.a);
		}
	}

	void InvertColors(ThreadData data) {
		for (int i = 0; i < data.inPixels.Length; i++) {
			Color c = data.inPixels[i];
			data.inPixels[i] = new Color(1.0f - c.r, 1.0f - c.g, 1.0f - c.b, c.a);
		}
	}

	void IncreaseContrast(ThreadData data, float percent) {
		for (int i = 0; i < data.inPixels.Length; i++) {
			Color c = data.inPixels[i];
			float percBrightness = 0.299f*c.r + 0.587f*c.g + 0.114f*c.b;
			if (percBrightness > 0.5f) {
				float up = (percent + 1.0f);
				data.inPixels[i] = new Color(c.r * up, c.g * up, c.b * up, c.a);
			}
			else {
				float down = percent;
				data.inPixels[i] = new Color(c.r * down, c.g * down, c.b * down, c.a);
			}
		}
	}


	
	Color processBlock(ThreadData context, int x, int y, int totalBlocks) {
		var width = context.blockSize;
		if(x + context.blockSize >= context.width) {
			width = context.width - x;
		}
		
		int height = context.blockSize;
		if(y + context.blockSize >= context.height) {
			height = context.height - y;
		}

		Color[] imageData =  GetPixels(context.inPixels, x, y, context, width, height);
		Color avgColor = avgPixel(imageData);
		if(selectedPalette != null) {
			avgColor = getClosestColor(avgColor, selectedPalette);
		}

		return avgColor;
	}

	Color[] GetPixels(Color[] inColors, int x, int y, ThreadData context, int width, int height) {
		//Color[] outColors = new Color[end - start];
		List<Color> outColors = new List<Color>();

		for (int i = y; i < y + height; i++) {
			for (int j = x; j < x + width; j++) {
				int index = (i * context.width) + j;
				outColors.Add (inColors[index]);
			}
		}

		return outColors.ToArray();
	}

	void SetPixels(Color[] outColors, int x, int y, ThreadData context, int width, int height, Color c) {
		for (int i = y; i < y + height; i++) {
			for (int j = x; j < x + width; j++) {
				int index = (i * context.width) + j;
				outColors[index] = c;
			}
		}
	}
	
	//TODO optimize
	Color getClosestColor(Color c, Color[] palette) {
		float minDelta = (3.0f);// * (255*3);
		Color closestColor = Color.green;
		for(int i = 0; i < palette.Length; i++) {
			Color color = palette[i];
			float delta = c.SqrDiff(color);
			if(delta < minDelta) {
				minDelta = delta;
				closestColor = color;
			}
		}
		return closestColor;
	}
	
	Color avgPixel(Color[] imageData) {
		Color c = new Color(0, 0, 0, 0);
		for(int i = 0; i < imageData.Length; i++) {
			c.r += imageData[i].r;
			c.g += imageData[i].g;
			c.b += imageData[i].b;
			c.a += imageData[i].a;
		}
		float numPixels = imageData.Length;
		c.r = c.r / ((float)numPixels);
		c.g = c.g / ((float)numPixels);
		c.b = c.b / ((float)numPixels);
		c.a = c.a / ((float)numPixels);
		return c;
	}

	//void setImageData(imageData, c) {
	//	for(int i = 0; i < imageData.Length; i+=4) {
	//		imageData.data[i] = c.r;
	//		imageData.data[i+1] = c.g;
	//		imageData.data[i+2] = c.b;
	//		imageData.data[i+3] = c.a;
	//	}
	//}
}
