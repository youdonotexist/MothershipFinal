using UnityEngine;
 
public class GameState : MonoBehaviour
{
	private static GameState instance;
 
	public static GameState Instance
	{
		get
		{
			if (instance == null)
			{
				GameObject go = GameObject.Find("GameState");
				if (go == null) {
					instance = new GameObject ("GameState").AddComponent<GameState> ();
				}
				else {
					instance = go.GetComponent<GameState>();	
				}
				
				instance.audioSource = instance.gameObject.AddComponent<AudioSource>();
			}
 
			return instance;
		}
	}
	
	public enum GAMESTATE {
		GAMEOVER,
		WIN,
		APPLICATIONQUIT,
		PAUSED,
		NORMAL
	};
	public GAMESTATE _gameState = GAMESTATE.NORMAL;
	
	//public bool GameOver = false;
	//public bool DidWin = false;
	//public bool ApplicationQuit = false;
	//public bool Paused = false;
	
	public AudioSource audioSource = null;
	
	public bool DidWin() { return _gameState == GAMESTATE.WIN; }
	public bool DidLose() { return _gameState == GAMESTATE.GAMEOVER; }
	public bool IsPaused() { return _gameState == GAMESTATE.PAUSED; }
	public bool DidQuitApplication() { return _gameState == GAMESTATE.APPLICATIONQUIT; }
 
	public void OnApplicationQuit ()
	{
		//instance = null;
		//ApplicationQuit = true;
		_gameState = GAMESTATE.APPLICATIONQUIT;
	}
	
	public void SetOnWin() {
		//DidWin = true;		
		_gameState = GAMESTATE.WIN;
	}
	
	public void SetOnLose() {
		//GameOver = true;
		_gameState = GAMESTATE.GAMEOVER;
	}
	
	public void SetPaused(bool paused) {
		if (paused) {
			_gameState = GAMESTATE.PAUSED;	
		}
		else {
			_gameState = GAMESTATE.NORMAL;	
		}
	}
	
}
