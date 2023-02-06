struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 96 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//18. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//22. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//23. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//24. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//29. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//30. ConstantForce
	void RegisterClass_ConstantForce();
	RegisterClass_ConstantForce();

	//31. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//32. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//33. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//34. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//35. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//38. EdgeCollider2D
	void RegisterClass_EdgeCollider2D();
	RegisterClass_EdgeCollider2D();

	//39. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//40. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//41. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//42. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//45. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//46. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//47. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//48. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//49. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//50. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//51. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//52. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//53. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//54. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//55. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//56. AudioDistortionFilter
	void RegisterClass_AudioDistortionFilter();
	RegisterClass_AudioDistortionFilter();

	//57. AudioFilter
	void RegisterClass_AudioFilter();
	RegisterClass_AudioFilter();

	//58. AudioEchoFilter
	void RegisterClass_AudioEchoFilter();
	RegisterClass_AudioEchoFilter();

	//59. AudioHighPassFilter
	void RegisterClass_AudioHighPassFilter();
	RegisterClass_AudioHighPassFilter();

	//60. AudioLowPassFilter
	void RegisterClass_AudioLowPassFilter();
	RegisterClass_AudioLowPassFilter();

	//61. AudioReverbFilter
	void RegisterClass_AudioReverbFilter();
	RegisterClass_AudioReverbFilter();

	//62. AudioChorusFilter
	void RegisterClass_AudioChorusFilter();
	RegisterClass_AudioChorusFilter();

	//63. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//64. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//65. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//66. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//67. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//68. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//69. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//70. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//71. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//72. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//73. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//74. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//75. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//76. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//77. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//78. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//79. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//80. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//81. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//82. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//83. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//84. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//85. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//86. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//87. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//88. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//89. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//90. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//91. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//92. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//93. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//94. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//95. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
