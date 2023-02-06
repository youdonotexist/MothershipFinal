using UnityEngine;
using System.Collections;

public static class GameSaver
{
	public static void InitSaveState() {
		string json = Cache.Load("gamesave");			
		if (json == null) {
			ArrayList list = new ArrayList();
			for (int i = 0; i < 4; i++) {
				Hashtable ht = new Hashtable();
				ht.Add("index", i);
				if (i < 3) ht.Add ("unlock", i+1);
				ht.Add("enabled", false);
				list.Add(ht);
			}

			Hashtable tutHt = new Hashtable();
			tutHt.Add("index", 1001);
			tutHt.Add("unlock", 0);
			tutHt.Add("enabled", true);

			list.Add (tutHt);

			//TODO: Add this in a better place
			PlayerPrefs.SetFloat("music_volume", 1.0f);
			PlayerPrefs.SetFloat("sfx_volume", 1.0f);

			Cache.Init();
			Cache.Save("gamesave", JSON.JsonEncode(list));
		}
	}
	
	public static ArrayList GetSaveState() {
		string json = Cache.Load("gamesave");
		return (ArrayList) JSON.JsonDecode(json);
	}

	public static Hashtable GetSaveStateByIndex(int index) {
		ArrayList list = GetSaveState();
		for (int i = 0; i < list.Count; i++) {
			Hashtable ht = (Hashtable) list[i];
			object obj = ht["index"];
			int idx = (int) ht["index"];
			if (idx == index) {
				return ht;
			}
		}

		return null;
	}
	
	public static void SetSaveState(int encounterIndex, bool enable) {
		string json = Cache.Load("gamesave");
		ArrayList list = (ArrayList) JSON.JsonDecode(json);
		if (encounterIndex < 4 && list != null) {
			for (int i = 0; i < list.Count; i++) {
				Hashtable ht = (Hashtable) list[i];
				if ((int) ht["index"] == encounterIndex) {
					ht["enabled"] = enable;
					Cache.Save("gamesave", JSON.JsonEncode(list));
					return;
				}
			}
		}
	}
	
}

