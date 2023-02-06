using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using MiniJSON;
using System.IO.Compression;
using System.IO;
using System.Net;
using Ionic.Zip;

public class BundleManager : Singleton<BundleManager> {
	PortraitManager manager = new PortraitManager();

	Hashtable _cachedData = new Hashtable();

	public UIAtlas PortraitAtlas() {
		return manager.GetAtlas();
	}

	public void DoBundleStuffs() {
		int storedVersion = PlayerPrefs.HasKey("latestBundle") ? PlayerPrefs.GetInt("latestBundle") : 0;
		bool bundleExists = File.Exists(Application.persistentDataPath + "/" + (storedVersion + 1).ToString());
		if (bundleExists) {
			//Show the available update dialog
			Debug.Log ("hmm..");
		}
		else { //Check to see if there's an update
			CI.Request bundleReq = new CI.Request();
			bundleReq.Send(MissionManager.BaseUrl + "/latestBundle", "get", false, (request) => {
				string responseString = bundleReq.requestState.responseData.ToString();
				if (responseString == null || responseString.Length == 0) {
					return;
				}

				IDictionary bundle = (IDictionary) Json.Deserialize(responseString.ToString());  
				if (bundle != null && bundle.Contains("value")) {
					int newBundleVersion = int.Parse( (string) bundle["value"]);
					if (newBundleVersion > storedVersion || storedVersion == 0 || !bundleExists) { //We had an old bundle at some point
						string rootPath = Application.persistentDataPath + "/" + newBundleVersion.ToString() + "/";
						UnityThreadHelper.CreateThread(() => {
							string url = "http://s3.amazonaws.com/CommonwealthIndustries_Mothership/Bundles/" + newBundleVersion.ToString() + ".zip";

							WebClient client = new WebClient();    
							MemoryStream ms = null;
							try 
							{
								ms = new MemoryStream(client.DownloadData(url));

								ZipFile zip1 = ZipFile.Read(ms);
								// here, we extract every entry, but we could extract conditionally
								// based on entry name, size, date, checkbox status, etc.  
								foreach (ZipEntry e in zip1)
								{
									e.Extract(rootPath, ExtractExistingFileAction.OverwriteSilently);
								}
							} 
							finally 
							{
								client.Dispose();

								UnityThreadHelper.Dispatcher.Dispatch(() => UnzipFinished(rootPath, newBundleVersion));
							}
						});
					}
					else {
						//int b = PlayerPrefs.GetInt("latestBundle");
						//int latestBundle =  b > 0 ? b : 1; 
						//string rootPath = Application.persistentDataPath + "/" + latestBundle.ToString() + "/";
						//StartCoroutine(manager.BuildPortraitAtlas(rootPath + "portraits/"));
					}
				}
				else {
					//int b = PlayerPrefs.GetInt("latestBundle");
					//int latestBundle =  b > 0 ? b : 1; 
					//string rootPath = Application.persistentDataPath + "/" + latestBundle.ToString() + "/";
					//StartCoroutine(manager.BuildPortraitAtlas(rootPath + "portraits/"));
				}
			});
		}
	}

	void UnzipFinished(string rootPath, int bundleVersion) {
		PlayerPrefs.SetInt("latestBundle", bundleVersion);
	}

	public IList GetBattles(bool story) {
		string latestBundle = PlayerPrefs.GetInt("latestBundle").ToString();
		string key = latestBundle + "_" + (story ? "story.json" : "arcade.json");
		IList returnValue = (IList) _cachedData[key];

		if (returnValue != null) return returnValue;

		string path = Application.persistentDataPath + "/" + latestBundle + "/" + (story ? "story.json" : "arcade.json");
		string fileText = File.ReadAllText(path);
		returnValue = (IList) Json.Deserialize(fileText);

		if (story) {
			returnValue.Insert(0, new Dictionary<string, object> {
				{"_id", "tutorial"},
				{"name", "The Prologue"},
				{"index", 1001},
				{"hero_type_id", "MIXED"},
				{"backstory", "The end marks the beginning."},
				{"storyLine", "{H=portrait-01}Happy Birthday, Stryker! May you live to see another year.|" +
					"{M=portrait-02}No, but it will sure make me feel a lot better!"},
				{"heroes", new List<IDictionary>()}
			}); 
		}

		_cachedData[key] = returnValue;

		return returnValue;
	}

	public IList GetUpgrades(bool minion) {
		string latestBundle = PlayerPrefs.GetInt("latestBundle").ToString();
		string key = latestBundle + "_" + (minion ? "minion_upgrades.json" : "mothership_upgrades.json");
		IList returnValue = (IList) _cachedData[key];

		if (returnValue != null) return returnValue;

		string path = Application.persistentDataPath + "/" + latestBundle + "/" + (minion ? "minion_upgrades.json" : "mothership_upgrades.json");
		string fileText = File.ReadAllText(path);

		returnValue = (IList) Json.Deserialize(fileText);
		
		_cachedData[key] = returnValue;

		return returnValue;
	}
}
