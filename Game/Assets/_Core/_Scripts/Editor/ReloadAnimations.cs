using UnityEngine;
using UnityEditor;
using System.Collections;
using System.IO;

public class ReloadAnimations : ScriptableObject {

	[MenuItem("Edit/ex2D/Refresh Animations")]
	static public void RefreshAnimations () {
		Object[] selectedAsset = Selection.GetFiltered (typeof(Object), SelectionMode.DeepAssets);
		foreach(Object obj in selectedAsset)
		{
			exSpriteAnimClip anim = obj as exSpriteAnimClip;
			if (anim != null) {
				anim.editorNeedRebuild = true;
				anim.Build();
			}

		}
		/*if (Selection.activeObject != null ){
			Object objSelected = Selection.activeObject;

			Debug.Log (objSelected);
			
			string sAssetFolderPath = AssetDatabase.GetAssetPath(objSelected);
			
			// Construct the system path of the asset folder 
			string sDataPath  = Application.dataPath;
			string sFolderPath = sDataPath.Substring(0 ,sDataPath.Length-6)+sAssetFolderPath;         
			
			// get the system file paths of all the files in the asset folder
			string[] aFilePaths = Directory.GetFiles(sFolderPath);
			
			// enumerate through the list of files loading the assets they represent and getting their type
			
			foreach (string sFilePath in aFilePaths) {
				string sAssetPath = sFilePath.Substring(sDataPath.Length-6);
				Debug.Log(sAssetPath);
				
				Object objAsset =  AssetDatabase.LoadAssetAtPath(sAssetPath,typeof(Object));
				
				Debug.Log(objAsset.GetType().Name);
			}
			
		}*/
	}
}
