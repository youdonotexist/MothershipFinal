using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;

public class SwitchQuality : ScriptableObject
{
	[MenuItem("Edit/Mothership/Game/BuildMenuPaths")]
	static public void BuildPaths() {
		DottedLine p = GameObject.FindObjectOfType(typeof(DottedLine)) as DottedLine;
		List<Vector3[]> tempList = new List<Vector3[]>();

		string[] files = System.IO.Directory.GetFiles(".");
		foreach (string file in files) {
			if (file.Contains("Path_")) {
				System.IO.Stream str = System.IO.File.OpenRead(file);
				System.Runtime.Serialization.Formatters.Binary.BinaryFormatter formatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();

				float[,] line = formatter.Deserialize(str) as float[,];
				str.Close();

				Vector3[] vecLine = new Vector3[line.GetLength(0)];

				for (int i = 0; i < vecLine.Length; i++) {
					vecLine[i].x = line[i, 0];
					vecLine[i].y = line[i, 1];
					vecLine[i].z = line[i, 2];
				}
				tempList.Add(vecLine);
			}
		}

		p.path1 = tempList[0];
		p.path2 = tempList[1];
		p.path3 = tempList[2];
		p.path4 = tempList[3];
		p.path5 = tempList[4];
		EditorUtility.SetDirty(p);
	}

	[MenuItem("Edit/Mothership/Game/Rebuild Debris")]
	static public void RebuildDebris() {
		if (ResourceManager.Instance == null) return; //Fuck this shit
		ResourceManager.Instance.LoadAtlases();

		exAtlasInfo[] infos = new exAtlasInfo[]
		{
			(exAtlasInfo) Resources.Load("Atlases/_NES/NESAtlas - EditorInfo", typeof(exAtlasInfo)), 
			(exAtlasInfo) Resources.Load("Atlases/_MS/MSAtlas - EditorInfo", typeof(exAtlasInfo)),
			(exAtlasInfo) Resources.Load("Atlases/_SNES/ModernAtlas - EditorInfo", typeof(exAtlasInfo))
		};

		SpriteSwitcher[] sws = FindObjectsOfType(typeof(SpriteSwitcher)) as SpriteSwitcher[];
		foreach (SpriteSwitcher d in sws) {
			ExtractColors(d, infos);
		}

		Object[] selectedAsset = Selection.GetFiltered (typeof(Object), SelectionMode.DeepAssets);
		try {
			foreach(Object obj in selectedAsset)
			{
				if (obj is GameObject) {
					SpriteSwitcher[] sw = ((GameObject)obj).GetComponentsInChildren<SpriteSwitcher>(true);
					if (sw != null && sw.Length > 0) {
						ExtractColors(sw[0], infos); 	
					}
				}
				
			}
		}
		catch (UnityException e) {
			Debug.Log (e.ToString());
		}
		finally {
			ResourceManager.Instance.UnloadAtlases();
			ResourceManager.Instance.ForceDestroy();
		}
	}

	private static void ExtractColors(SpriteSwitcher d, exAtlasInfo[] infos) {
		string[] types = new string[]{"nes", "ms", "snes"};
		for (int i = 0; i < types.Length; i++) {
			exAtlasInfo currAtlasInfo = infos[i];
			int index = d.GetSpriteIndexForQuality(types[i]);

			if (index < 0 || index >= currAtlasInfo.elements.Count) {
				Debug.Log ("Sprite index out of range: " + d.nesSpriteName);
				continue;
			}

			Dictionary<string, Color32> colors = new Dictionary<string, Color32>();
			Texture2D tex = currAtlasInfo.elements[index].texture;
			Color[] cs = tex.GetPixels();
			foreach (Color c in cs) {
				if (c.a < 1.0f) continue;
				string key = c.r.ToString() + "_" + c.g.ToString() + "_" + c.b.ToString();
				if (!colors.ContainsKey(key)) {
					colors[key] = (Color32) c;
				}
			}

			d.SetColorsForType(types[i], new List<Color32>(colors.Values).ToArray());
		}
	}



	[MenuItem("Edit/Mothership/Game/KillHero _4")]
	static public void KillHero () {
		HeroVehicle veh = FindObjectOfType(typeof(HeroVehicle)) as HeroVehicle;
		if (veh != null) {
			Damagable dam = veh.GetComponent<Damagable>();
			dam.OnDamage(dam.maxHealth, LayerMask.NameToLayer("Minion"));
			dam.OnDamage(dam.maxHealth, LayerMask.NameToLayer("Minion"));
		}
		else {
			Debug.Log ("No Hero Found");
		}
	}

	[MenuItem("Edit/Mothership/Quality/NES _1")]
	static public void NESQuality () {
		Switch ("nes");
		EditorApplication.SaveScene();
	}

	[MenuItem("Edit/Mothership/Quality/MS _2")]
	static public void MSQuality () {
		Switch ("ms");
	}
	
	[MenuItem("Edit/Mothership/Quality/SNES _3")]
	static public void SNESQuality () {
		Switch ("snes");
	}


	static public void Switch(string type) {
		if (ResourceManager.Instance == null) return; //Fuck this shit
		ResourceManager.Instance.LoadAtlases();
		SpriteSwitcher[] sws = FindObjectsOfType(typeof(SpriteSwitcher)) as SpriteSwitcher[];
		foreach (SpriteSwitcher sw in sws) {
			sw.SetUp();
			sw.OnSpriteQualityChange(type);
		}
		
		UISwitcher[] uws = FindObjectsOfType(typeof(UISwitcher)) as UISwitcher[];
		foreach (UISwitcher uw in uws) {
			uw.SetUp(type);
		}

		TextureSwitcher tss = FindObjectOfType(typeof(TextureSwitcher)) as TextureSwitcher;
		tss.OnTextureQualityChange(type);

		ResourceManager.Instance.ForceDestroy();
	}
}

