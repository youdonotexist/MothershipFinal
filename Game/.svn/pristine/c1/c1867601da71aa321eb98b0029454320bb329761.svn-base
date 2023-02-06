using UnityEngine;
using System.Collections;

public class InGameMenu : MonoBehaviour
{
	bool paused = false;
	float pausedTimeScale = 1.0f;
	CurtainHelper _curtainHelper;

	public GameObject musicVolumeGO;
	public GameObject soundVolumeGO;

	//UIPanel 	_menuPanel;
	UISprite 	_mainMenuBackground;
	UILabel 	_deathScreen;
	UIButton 	_deathButton;
	UIButton 	_mainMenuButton;
	
	void Awake() {
		float musicVolume = PlayerPrefs.GetFloat ("music_volume");
		float sfxVolume = PlayerPrefs.GetFloat ("sfx_volume");
		
		musicVolumeGO.GetComponent<UISlider> ().value = musicVolume;
		soundVolumeGO.GetComponent<UISlider> ().value = sfxVolume;
		
		MasterAudio.PlaylistMasterVolume = musicVolume;
		MasterAudio.MasterVolumeLevel = sfxVolume;


		//_menuPanel 			= GetComponent<UIPanel>();
		_curtainHelper 		= GameObject.Find("UI Root").GetComponentInChildren<CurtainHelper>();
		_deathScreen 		= GameObject.Find("OutcomeLabel").GetComponent<UILabel>();
		_deathButton 		= GameObject.Find("RetryButton").GetComponent<UIButton>();
		_mainMenuBackground = GameObject.Find("MenuBackground").GetComponent<UISprite>();
		_mainMenuButton 	= GameObject.Find("Menu").GetComponent<UIButton>();

		EnablePanel(false);
	}

	public void OnClick() {
		GameObject current = UICamera.currentTouch.current;
		
		if (current.name == "Menu") {
			_curtainHelper.AnimateCurtain(false, Color.clear, Color.black, 0.5f, LoadMainMenu);
		}
		else if (current.name == "RetryButton") {
			_curtainHelper.AnimateCurtain(false, Color.clear, Color.black, 0.5f, Retry);
		}
		else if (current.name == "MenuButton") {
			if (!GameState.Instance.DidWin() && !GameState.Instance.DidLose()) {
				if (!paused) {
					PauseMenu(true);
					paused = true;
				}
				else {
					PauseMenu(false);
					paused = false;
				}
			}
		}
	}

	public void OnValueChange() {
		UIProgressBar current = UISlider.current;

		if (current.name == "MusicVolume") {
			MasterAudio.PlaylistMasterVolume = current.value;
			PlayerPrefs.SetFloat("music_volume", current.value);
		} 
		else if (current.name == "SfxVolume") {
			MasterAudio.MasterVolumeLevel = current.value;
			PlayerPrefs.SetFloat("sfx_volume", current.value);
		}
	}

	public void PauseMenu(bool open) {

		GameState.Instance.SetPaused(open);
		EnablePanel(open);

		if (open) {
			pausedTimeScale = Time.timeScale;
			Time.timeScale = 0.0f;
			
			_deathScreen.text = "Paused";
			_deathButton.GetComponentInChildren<UILabel>().text = "Restart";
			StartCoroutine("FadeInMenuBackground", 0.2f);
		}
		else {
			Time.timeScale = pausedTimeScale;
			StopCoroutine("FadeInMenuBackground");			
		}
	}
	public void OnWin() {
		musicVolumeGO.SetActive(false);
		soundVolumeGO.SetActive(false);

		EnablePanel(true);

		_deathScreen.gameObject.SetActive(true);
		_deathButton.gameObject.SetActive(true);
		_mainMenuButton.gameObject.SetActive(true);
		_deathScreen.text = "You Win";// (and it's time to enjoy interbreeding between species!) ";
		_deathButton.GetComponent<UILabel>().text = "Play Again";
	}

	public void OnLose() {
		musicVolumeGO.SetActive(false);
		soundVolumeGO.SetActive(false);

		EnablePanel(true);

		_deathScreen.gameObject.SetActive(true);
		_deathButton.gameObject.SetActive(true);
		_mainMenuButton.gameObject.SetActive(true);
		_deathScreen.text = "You Lose";// (and your race is pretty much doomed)";
	}

	void EnablePanel(bool enable) {
		NGUITools.SetActiveChildren(gameObject, enable);
		/*_menuPanel.enabled = enable;
		Collider[] cs = gameObject.GetComponentsInChildren<Collider>();

		Debug.Log((enable ? "Enabling: " : "Disabling: " ) + cs.Length.ToString() + " panels");

		for (int i = 0; i < cs.Length; i++) {
			cs[i].enabled = enabled;
		}*/
	}
	
	void LoadMainMenu() {
		Time.timeScale = 1.0f;
		Application.LoadLevel(LevelManager.Instance.MainMenuLevelName());
	}
	
	void Retry() {
		Messenger.Broadcast("OnBattleRetry");
	}

	void OnEnable() {
		Messenger.AddListener("OnWin", new Callback(OnWin));
		Messenger.AddListener("OnLose", new Callback(OnLose));
	}

	void OnDisable() {
		Messenger.RemoveListener("OnWin", new Callback(OnWin));
		Messenger.RemoveListener("OnLose", new Callback(OnLose));
	}

	IEnumerator FadeInMenuBackground(float duration) {
		float elapsed = 0.0f;
		Color currentColor = _mainMenuBackground.color;
		currentColor.a = 0.0f;
		_mainMenuBackground.color = currentColor;
		
		while (elapsed < duration) {
			Color c = _mainMenuBackground.color;
			c.a = Mathf.Lerp(0.0f, 0.7f, elapsed/duration);
			_mainMenuBackground.color = c;
			
			elapsed += TimeKeeper.Instance().AnimationTime();
			yield return null;
		}
	}
}	

