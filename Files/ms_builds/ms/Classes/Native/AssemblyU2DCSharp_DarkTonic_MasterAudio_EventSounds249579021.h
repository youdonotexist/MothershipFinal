#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/PlaylistCommand>
struct List_1_t3682532850;
// DarkTonic.MasterAudio.AudioEventGroup
struct AudioEventGroup_t1120649738;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEventGroup>
struct List_1_t1917608707;
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2089997540.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound3812713455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.EventSounds
struct  EventSounds_t249579021  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean DarkTonic.MasterAudio.EventSounds::showGizmo
	bool ___showGizmo_2;
	// DarkTonic.MasterAudio.MasterAudio/SoundSpawnLocationMode DarkTonic.MasterAudio.EventSounds::soundSpawnMode
	int32_t ___soundSpawnMode_3;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::disableSounds
	bool ___disableSounds_4;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::showPoolManager
	bool ___showPoolManager_5;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::showNGUI
	bool ___showNGUI_6;
	// DarkTonic.MasterAudio.EventSounds/UnityUIVersion DarkTonic.MasterAudio.EventSounds::unityUIMode
	int32_t ___unityUIMode_7;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::logMissingEvents
	bool ___logMissingEvents_8;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::startSound
	AudioEventGroup_t1120649738 * ___startSound_11;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::visibleSound
	AudioEventGroup_t1120649738 * ___visibleSound_12;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::invisibleSound
	AudioEventGroup_t1120649738 * ___invisibleSound_13;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::collisionSound
	AudioEventGroup_t1120649738 * ___collisionSound_14;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::collisionExitSound
	AudioEventGroup_t1120649738 * ___collisionExitSound_15;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::triggerSound
	AudioEventGroup_t1120649738 * ___triggerSound_16;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::triggerExitSound
	AudioEventGroup_t1120649738 * ___triggerExitSound_17;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::mouseEnterSound
	AudioEventGroup_t1120649738 * ___mouseEnterSound_18;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::mouseExitSound
	AudioEventGroup_t1120649738 * ___mouseExitSound_19;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::mouseClickSound
	AudioEventGroup_t1120649738 * ___mouseClickSound_20;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::mouseUpSound
	AudioEventGroup_t1120649738 * ___mouseUpSound_21;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::mouseDragSound
	AudioEventGroup_t1120649738 * ___mouseDragSound_22;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::spawnedSound
	AudioEventGroup_t1120649738 * ___spawnedSound_23;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::despawnedSound
	AudioEventGroup_t1120649738 * ___despawnedSound_24;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::enableSound
	AudioEventGroup_t1120649738 * ___enableSound_25;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::disableSound
	AudioEventGroup_t1120649738 * ___disableSound_26;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::collision2dSound
	AudioEventGroup_t1120649738 * ___collision2dSound_27;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::collisionExit2dSound
	AudioEventGroup_t1120649738 * ___collisionExit2dSound_28;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::triggerEnter2dSound
	AudioEventGroup_t1120649738 * ___triggerEnter2dSound_29;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::triggerExit2dSound
	AudioEventGroup_t1120649738 * ___triggerExit2dSound_30;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::particleCollisionSound
	AudioEventGroup_t1120649738 * ___particleCollisionSound_31;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::nguiOnClickSound
	AudioEventGroup_t1120649738 * ___nguiOnClickSound_32;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::nguiMouseDownSound
	AudioEventGroup_t1120649738 * ___nguiMouseDownSound_33;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::nguiMouseUpSound
	AudioEventGroup_t1120649738 * ___nguiMouseUpSound_34;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::nguiMouseEnterSound
	AudioEventGroup_t1120649738 * ___nguiMouseEnterSound_35;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::nguiMouseExitSound
	AudioEventGroup_t1120649738 * ___nguiMouseExitSound_36;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unitySliderChangedSound
	AudioEventGroup_t1120649738 * ___unitySliderChangedSound_37;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityButtonClickedSound
	AudioEventGroup_t1120649738 * ___unityButtonClickedSound_38;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityPointerDownSound
	AudioEventGroup_t1120649738 * ___unityPointerDownSound_39;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityDragSound
	AudioEventGroup_t1120649738 * ___unityDragSound_40;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityPointerUpSound
	AudioEventGroup_t1120649738 * ___unityPointerUpSound_41;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityPointerEnterSound
	AudioEventGroup_t1120649738 * ___unityPointerEnterSound_42;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityPointerExitSound
	AudioEventGroup_t1120649738 * ___unityPointerExitSound_43;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityDropSound
	AudioEventGroup_t1120649738 * ___unityDropSound_44;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityScrollSound
	AudioEventGroup_t1120649738 * ___unityScrollSound_45;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityUpdateSelectedSound
	AudioEventGroup_t1120649738 * ___unityUpdateSelectedSound_46;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unitySelectSound
	AudioEventGroup_t1120649738 * ___unitySelectSound_47;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityDeselectSound
	AudioEventGroup_t1120649738 * ___unityDeselectSound_48;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityMoveSound
	AudioEventGroup_t1120649738 * ___unityMoveSound_49;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityInitializePotentialDragSound
	AudioEventGroup_t1120649738 * ___unityInitializePotentialDragSound_50;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityBeginDragSound
	AudioEventGroup_t1120649738 * ___unityBeginDragSound_51;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityEndDragSound
	AudioEventGroup_t1120649738 * ___unityEndDragSound_52;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unitySubmitSound
	AudioEventGroup_t1120649738 * ___unitySubmitSound_53;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityCancelSound
	AudioEventGroup_t1120649738 * ___unityCancelSound_54;
	// DarkTonic.MasterAudio.AudioEventGroup DarkTonic.MasterAudio.EventSounds::unityToggleSound
	AudioEventGroup_t1120649738 * ___unityToggleSound_55;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEventGroup> DarkTonic.MasterAudio.EventSounds::userDefinedSounds
	List_1_t1917608707 * ___userDefinedSounds_56;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEventGroup> DarkTonic.MasterAudio.EventSounds::mechanimStateChangedSounds
	List_1_t1917608707 * ___mechanimStateChangedSounds_57;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useStartSound
	bool ___useStartSound_58;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useVisibleSound
	bool ___useVisibleSound_59;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useInvisibleSound
	bool ___useInvisibleSound_60;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useCollisionSound
	bool ___useCollisionSound_61;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useCollisionExitSound
	bool ___useCollisionExitSound_62;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useTriggerEnterSound
	bool ___useTriggerEnterSound_63;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useTriggerExitSound
	bool ___useTriggerExitSound_64;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useMouseEnterSound
	bool ___useMouseEnterSound_65;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useMouseExitSound
	bool ___useMouseExitSound_66;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useMouseClickSound
	bool ___useMouseClickSound_67;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useMouseUpSound
	bool ___useMouseUpSound_68;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useMouseDragSound
	bool ___useMouseDragSound_69;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useSpawnedSound
	bool ___useSpawnedSound_70;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useDespawnedSound
	bool ___useDespawnedSound_71;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useEnableSound
	bool ___useEnableSound_72;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useDisableSound
	bool ___useDisableSound_73;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useCollision2dSound
	bool ___useCollision2dSound_74;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useCollisionExit2dSound
	bool ___useCollisionExit2dSound_75;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useTriggerEnter2dSound
	bool ___useTriggerEnter2dSound_76;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useTriggerExit2dSound
	bool ___useTriggerExit2dSound_77;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useParticleCollisionSound
	bool ___useParticleCollisionSound_78;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useNguiOnClickSound
	bool ___useNguiOnClickSound_79;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useNguiMouseDownSound
	bool ___useNguiMouseDownSound_80;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useNguiMouseUpSound
	bool ___useNguiMouseUpSound_81;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useNguiMouseEnterSound
	bool ___useNguiMouseEnterSound_82;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useNguiMouseExitSound
	bool ___useNguiMouseExitSound_83;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnitySliderChangedSound
	bool ___useUnitySliderChangedSound_84;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityButtonClickedSound
	bool ___useUnityButtonClickedSound_85;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityPointerDownSound
	bool ___useUnityPointerDownSound_86;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityDragSound
	bool ___useUnityDragSound_87;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityPointerUpSound
	bool ___useUnityPointerUpSound_88;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityPointerEnterSound
	bool ___useUnityPointerEnterSound_89;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityPointerExitSound
	bool ___useUnityPointerExitSound_90;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityDropSound
	bool ___useUnityDropSound_91;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityScrollSound
	bool ___useUnityScrollSound_92;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityUpdateSelectedSound
	bool ___useUnityUpdateSelectedSound_93;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnitySelectSound
	bool ___useUnitySelectSound_94;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityDeselectSound
	bool ___useUnityDeselectSound_95;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityMoveSound
	bool ___useUnityMoveSound_96;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityInitializePotentialDragSound
	bool ___useUnityInitializePotentialDragSound_97;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityBeginDragSound
	bool ___useUnityBeginDragSound_98;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityEndDragSound
	bool ___useUnityEndDragSound_99;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnitySubmitSound
	bool ___useUnitySubmitSound_100;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityCancelSound
	bool ___useUnityCancelSound_101;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::useUnityToggleSound
	bool ___useUnityToggleSound_102;
	// UnityEngine.UI.Slider DarkTonic.MasterAudio.EventSounds::_slider
	Slider_t1468074762 * ____slider_103;
	// UnityEngine.UI.Toggle DarkTonic.MasterAudio.EventSounds::_toggle
	Toggle_t1499417981 * ____toggle_104;
	// UnityEngine.UI.Button DarkTonic.MasterAudio.EventSounds::_button
	Button_t990034267 * ____button_105;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::_isVisible
	bool ____isVisible_106;
	// System.Boolean DarkTonic.MasterAudio.EventSounds::_needsCoroutine
	bool ____needsCoroutine_107;
	// UnityEngine.Transform DarkTonic.MasterAudio.EventSounds::_trans
	Transform_t284553113 * ____trans_108;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEventGroup> DarkTonic.MasterAudio.EventSounds::_validMechanimStateChangedSounds
	List_1_t1917608707 * ____validMechanimStateChangedSounds_109;
	// UnityEngine.Animator DarkTonic.MasterAudio.EventSounds::_anim
	Animator_t792326996 * ____anim_110;

public:
	inline static int32_t get_offset_of_showGizmo_2() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___showGizmo_2)); }
	inline bool get_showGizmo_2() const { return ___showGizmo_2; }
	inline bool* get_address_of_showGizmo_2() { return &___showGizmo_2; }
	inline void set_showGizmo_2(bool value)
	{
		___showGizmo_2 = value;
	}

	inline static int32_t get_offset_of_soundSpawnMode_3() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___soundSpawnMode_3)); }
	inline int32_t get_soundSpawnMode_3() const { return ___soundSpawnMode_3; }
	inline int32_t* get_address_of_soundSpawnMode_3() { return &___soundSpawnMode_3; }
	inline void set_soundSpawnMode_3(int32_t value)
	{
		___soundSpawnMode_3 = value;
	}

	inline static int32_t get_offset_of_disableSounds_4() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___disableSounds_4)); }
	inline bool get_disableSounds_4() const { return ___disableSounds_4; }
	inline bool* get_address_of_disableSounds_4() { return &___disableSounds_4; }
	inline void set_disableSounds_4(bool value)
	{
		___disableSounds_4 = value;
	}

	inline static int32_t get_offset_of_showPoolManager_5() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___showPoolManager_5)); }
	inline bool get_showPoolManager_5() const { return ___showPoolManager_5; }
	inline bool* get_address_of_showPoolManager_5() { return &___showPoolManager_5; }
	inline void set_showPoolManager_5(bool value)
	{
		___showPoolManager_5 = value;
	}

	inline static int32_t get_offset_of_showNGUI_6() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___showNGUI_6)); }
	inline bool get_showNGUI_6() const { return ___showNGUI_6; }
	inline bool* get_address_of_showNGUI_6() { return &___showNGUI_6; }
	inline void set_showNGUI_6(bool value)
	{
		___showNGUI_6 = value;
	}

	inline static int32_t get_offset_of_unityUIMode_7() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityUIMode_7)); }
	inline int32_t get_unityUIMode_7() const { return ___unityUIMode_7; }
	inline int32_t* get_address_of_unityUIMode_7() { return &___unityUIMode_7; }
	inline void set_unityUIMode_7(int32_t value)
	{
		___unityUIMode_7 = value;
	}

	inline static int32_t get_offset_of_logMissingEvents_8() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___logMissingEvents_8)); }
	inline bool get_logMissingEvents_8() const { return ___logMissingEvents_8; }
	inline bool* get_address_of_logMissingEvents_8() { return &___logMissingEvents_8; }
	inline void set_logMissingEvents_8(bool value)
	{
		___logMissingEvents_8 = value;
	}

	inline static int32_t get_offset_of_startSound_11() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___startSound_11)); }
	inline AudioEventGroup_t1120649738 * get_startSound_11() const { return ___startSound_11; }
	inline AudioEventGroup_t1120649738 ** get_address_of_startSound_11() { return &___startSound_11; }
	inline void set_startSound_11(AudioEventGroup_t1120649738 * value)
	{
		___startSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___startSound_11, value);
	}

	inline static int32_t get_offset_of_visibleSound_12() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___visibleSound_12)); }
	inline AudioEventGroup_t1120649738 * get_visibleSound_12() const { return ___visibleSound_12; }
	inline AudioEventGroup_t1120649738 ** get_address_of_visibleSound_12() { return &___visibleSound_12; }
	inline void set_visibleSound_12(AudioEventGroup_t1120649738 * value)
	{
		___visibleSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___visibleSound_12, value);
	}

	inline static int32_t get_offset_of_invisibleSound_13() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___invisibleSound_13)); }
	inline AudioEventGroup_t1120649738 * get_invisibleSound_13() const { return ___invisibleSound_13; }
	inline AudioEventGroup_t1120649738 ** get_address_of_invisibleSound_13() { return &___invisibleSound_13; }
	inline void set_invisibleSound_13(AudioEventGroup_t1120649738 * value)
	{
		___invisibleSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___invisibleSound_13, value);
	}

	inline static int32_t get_offset_of_collisionSound_14() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___collisionSound_14)); }
	inline AudioEventGroup_t1120649738 * get_collisionSound_14() const { return ___collisionSound_14; }
	inline AudioEventGroup_t1120649738 ** get_address_of_collisionSound_14() { return &___collisionSound_14; }
	inline void set_collisionSound_14(AudioEventGroup_t1120649738 * value)
	{
		___collisionSound_14 = value;
		Il2CppCodeGenWriteBarrier(&___collisionSound_14, value);
	}

	inline static int32_t get_offset_of_collisionExitSound_15() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___collisionExitSound_15)); }
	inline AudioEventGroup_t1120649738 * get_collisionExitSound_15() const { return ___collisionExitSound_15; }
	inline AudioEventGroup_t1120649738 ** get_address_of_collisionExitSound_15() { return &___collisionExitSound_15; }
	inline void set_collisionExitSound_15(AudioEventGroup_t1120649738 * value)
	{
		___collisionExitSound_15 = value;
		Il2CppCodeGenWriteBarrier(&___collisionExitSound_15, value);
	}

	inline static int32_t get_offset_of_triggerSound_16() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___triggerSound_16)); }
	inline AudioEventGroup_t1120649738 * get_triggerSound_16() const { return ___triggerSound_16; }
	inline AudioEventGroup_t1120649738 ** get_address_of_triggerSound_16() { return &___triggerSound_16; }
	inline void set_triggerSound_16(AudioEventGroup_t1120649738 * value)
	{
		___triggerSound_16 = value;
		Il2CppCodeGenWriteBarrier(&___triggerSound_16, value);
	}

	inline static int32_t get_offset_of_triggerExitSound_17() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___triggerExitSound_17)); }
	inline AudioEventGroup_t1120649738 * get_triggerExitSound_17() const { return ___triggerExitSound_17; }
	inline AudioEventGroup_t1120649738 ** get_address_of_triggerExitSound_17() { return &___triggerExitSound_17; }
	inline void set_triggerExitSound_17(AudioEventGroup_t1120649738 * value)
	{
		___triggerExitSound_17 = value;
		Il2CppCodeGenWriteBarrier(&___triggerExitSound_17, value);
	}

	inline static int32_t get_offset_of_mouseEnterSound_18() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mouseEnterSound_18)); }
	inline AudioEventGroup_t1120649738 * get_mouseEnterSound_18() const { return ___mouseEnterSound_18; }
	inline AudioEventGroup_t1120649738 ** get_address_of_mouseEnterSound_18() { return &___mouseEnterSound_18; }
	inline void set_mouseEnterSound_18(AudioEventGroup_t1120649738 * value)
	{
		___mouseEnterSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___mouseEnterSound_18, value);
	}

	inline static int32_t get_offset_of_mouseExitSound_19() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mouseExitSound_19)); }
	inline AudioEventGroup_t1120649738 * get_mouseExitSound_19() const { return ___mouseExitSound_19; }
	inline AudioEventGroup_t1120649738 ** get_address_of_mouseExitSound_19() { return &___mouseExitSound_19; }
	inline void set_mouseExitSound_19(AudioEventGroup_t1120649738 * value)
	{
		___mouseExitSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___mouseExitSound_19, value);
	}

	inline static int32_t get_offset_of_mouseClickSound_20() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mouseClickSound_20)); }
	inline AudioEventGroup_t1120649738 * get_mouseClickSound_20() const { return ___mouseClickSound_20; }
	inline AudioEventGroup_t1120649738 ** get_address_of_mouseClickSound_20() { return &___mouseClickSound_20; }
	inline void set_mouseClickSound_20(AudioEventGroup_t1120649738 * value)
	{
		___mouseClickSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___mouseClickSound_20, value);
	}

	inline static int32_t get_offset_of_mouseUpSound_21() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mouseUpSound_21)); }
	inline AudioEventGroup_t1120649738 * get_mouseUpSound_21() const { return ___mouseUpSound_21; }
	inline AudioEventGroup_t1120649738 ** get_address_of_mouseUpSound_21() { return &___mouseUpSound_21; }
	inline void set_mouseUpSound_21(AudioEventGroup_t1120649738 * value)
	{
		___mouseUpSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUpSound_21, value);
	}

	inline static int32_t get_offset_of_mouseDragSound_22() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mouseDragSound_22)); }
	inline AudioEventGroup_t1120649738 * get_mouseDragSound_22() const { return ___mouseDragSound_22; }
	inline AudioEventGroup_t1120649738 ** get_address_of_mouseDragSound_22() { return &___mouseDragSound_22; }
	inline void set_mouseDragSound_22(AudioEventGroup_t1120649738 * value)
	{
		___mouseDragSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDragSound_22, value);
	}

	inline static int32_t get_offset_of_spawnedSound_23() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___spawnedSound_23)); }
	inline AudioEventGroup_t1120649738 * get_spawnedSound_23() const { return ___spawnedSound_23; }
	inline AudioEventGroup_t1120649738 ** get_address_of_spawnedSound_23() { return &___spawnedSound_23; }
	inline void set_spawnedSound_23(AudioEventGroup_t1120649738 * value)
	{
		___spawnedSound_23 = value;
		Il2CppCodeGenWriteBarrier(&___spawnedSound_23, value);
	}

	inline static int32_t get_offset_of_despawnedSound_24() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___despawnedSound_24)); }
	inline AudioEventGroup_t1120649738 * get_despawnedSound_24() const { return ___despawnedSound_24; }
	inline AudioEventGroup_t1120649738 ** get_address_of_despawnedSound_24() { return &___despawnedSound_24; }
	inline void set_despawnedSound_24(AudioEventGroup_t1120649738 * value)
	{
		___despawnedSound_24 = value;
		Il2CppCodeGenWriteBarrier(&___despawnedSound_24, value);
	}

	inline static int32_t get_offset_of_enableSound_25() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___enableSound_25)); }
	inline AudioEventGroup_t1120649738 * get_enableSound_25() const { return ___enableSound_25; }
	inline AudioEventGroup_t1120649738 ** get_address_of_enableSound_25() { return &___enableSound_25; }
	inline void set_enableSound_25(AudioEventGroup_t1120649738 * value)
	{
		___enableSound_25 = value;
		Il2CppCodeGenWriteBarrier(&___enableSound_25, value);
	}

	inline static int32_t get_offset_of_disableSound_26() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___disableSound_26)); }
	inline AudioEventGroup_t1120649738 * get_disableSound_26() const { return ___disableSound_26; }
	inline AudioEventGroup_t1120649738 ** get_address_of_disableSound_26() { return &___disableSound_26; }
	inline void set_disableSound_26(AudioEventGroup_t1120649738 * value)
	{
		___disableSound_26 = value;
		Il2CppCodeGenWriteBarrier(&___disableSound_26, value);
	}

	inline static int32_t get_offset_of_collision2dSound_27() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___collision2dSound_27)); }
	inline AudioEventGroup_t1120649738 * get_collision2dSound_27() const { return ___collision2dSound_27; }
	inline AudioEventGroup_t1120649738 ** get_address_of_collision2dSound_27() { return &___collision2dSound_27; }
	inline void set_collision2dSound_27(AudioEventGroup_t1120649738 * value)
	{
		___collision2dSound_27 = value;
		Il2CppCodeGenWriteBarrier(&___collision2dSound_27, value);
	}

	inline static int32_t get_offset_of_collisionExit2dSound_28() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___collisionExit2dSound_28)); }
	inline AudioEventGroup_t1120649738 * get_collisionExit2dSound_28() const { return ___collisionExit2dSound_28; }
	inline AudioEventGroup_t1120649738 ** get_address_of_collisionExit2dSound_28() { return &___collisionExit2dSound_28; }
	inline void set_collisionExit2dSound_28(AudioEventGroup_t1120649738 * value)
	{
		___collisionExit2dSound_28 = value;
		Il2CppCodeGenWriteBarrier(&___collisionExit2dSound_28, value);
	}

	inline static int32_t get_offset_of_triggerEnter2dSound_29() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___triggerEnter2dSound_29)); }
	inline AudioEventGroup_t1120649738 * get_triggerEnter2dSound_29() const { return ___triggerEnter2dSound_29; }
	inline AudioEventGroup_t1120649738 ** get_address_of_triggerEnter2dSound_29() { return &___triggerEnter2dSound_29; }
	inline void set_triggerEnter2dSound_29(AudioEventGroup_t1120649738 * value)
	{
		___triggerEnter2dSound_29 = value;
		Il2CppCodeGenWriteBarrier(&___triggerEnter2dSound_29, value);
	}

	inline static int32_t get_offset_of_triggerExit2dSound_30() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___triggerExit2dSound_30)); }
	inline AudioEventGroup_t1120649738 * get_triggerExit2dSound_30() const { return ___triggerExit2dSound_30; }
	inline AudioEventGroup_t1120649738 ** get_address_of_triggerExit2dSound_30() { return &___triggerExit2dSound_30; }
	inline void set_triggerExit2dSound_30(AudioEventGroup_t1120649738 * value)
	{
		___triggerExit2dSound_30 = value;
		Il2CppCodeGenWriteBarrier(&___triggerExit2dSound_30, value);
	}

	inline static int32_t get_offset_of_particleCollisionSound_31() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___particleCollisionSound_31)); }
	inline AudioEventGroup_t1120649738 * get_particleCollisionSound_31() const { return ___particleCollisionSound_31; }
	inline AudioEventGroup_t1120649738 ** get_address_of_particleCollisionSound_31() { return &___particleCollisionSound_31; }
	inline void set_particleCollisionSound_31(AudioEventGroup_t1120649738 * value)
	{
		___particleCollisionSound_31 = value;
		Il2CppCodeGenWriteBarrier(&___particleCollisionSound_31, value);
	}

	inline static int32_t get_offset_of_nguiOnClickSound_32() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___nguiOnClickSound_32)); }
	inline AudioEventGroup_t1120649738 * get_nguiOnClickSound_32() const { return ___nguiOnClickSound_32; }
	inline AudioEventGroup_t1120649738 ** get_address_of_nguiOnClickSound_32() { return &___nguiOnClickSound_32; }
	inline void set_nguiOnClickSound_32(AudioEventGroup_t1120649738 * value)
	{
		___nguiOnClickSound_32 = value;
		Il2CppCodeGenWriteBarrier(&___nguiOnClickSound_32, value);
	}

	inline static int32_t get_offset_of_nguiMouseDownSound_33() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___nguiMouseDownSound_33)); }
	inline AudioEventGroup_t1120649738 * get_nguiMouseDownSound_33() const { return ___nguiMouseDownSound_33; }
	inline AudioEventGroup_t1120649738 ** get_address_of_nguiMouseDownSound_33() { return &___nguiMouseDownSound_33; }
	inline void set_nguiMouseDownSound_33(AudioEventGroup_t1120649738 * value)
	{
		___nguiMouseDownSound_33 = value;
		Il2CppCodeGenWriteBarrier(&___nguiMouseDownSound_33, value);
	}

	inline static int32_t get_offset_of_nguiMouseUpSound_34() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___nguiMouseUpSound_34)); }
	inline AudioEventGroup_t1120649738 * get_nguiMouseUpSound_34() const { return ___nguiMouseUpSound_34; }
	inline AudioEventGroup_t1120649738 ** get_address_of_nguiMouseUpSound_34() { return &___nguiMouseUpSound_34; }
	inline void set_nguiMouseUpSound_34(AudioEventGroup_t1120649738 * value)
	{
		___nguiMouseUpSound_34 = value;
		Il2CppCodeGenWriteBarrier(&___nguiMouseUpSound_34, value);
	}

	inline static int32_t get_offset_of_nguiMouseEnterSound_35() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___nguiMouseEnterSound_35)); }
	inline AudioEventGroup_t1120649738 * get_nguiMouseEnterSound_35() const { return ___nguiMouseEnterSound_35; }
	inline AudioEventGroup_t1120649738 ** get_address_of_nguiMouseEnterSound_35() { return &___nguiMouseEnterSound_35; }
	inline void set_nguiMouseEnterSound_35(AudioEventGroup_t1120649738 * value)
	{
		___nguiMouseEnterSound_35 = value;
		Il2CppCodeGenWriteBarrier(&___nguiMouseEnterSound_35, value);
	}

	inline static int32_t get_offset_of_nguiMouseExitSound_36() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___nguiMouseExitSound_36)); }
	inline AudioEventGroup_t1120649738 * get_nguiMouseExitSound_36() const { return ___nguiMouseExitSound_36; }
	inline AudioEventGroup_t1120649738 ** get_address_of_nguiMouseExitSound_36() { return &___nguiMouseExitSound_36; }
	inline void set_nguiMouseExitSound_36(AudioEventGroup_t1120649738 * value)
	{
		___nguiMouseExitSound_36 = value;
		Il2CppCodeGenWriteBarrier(&___nguiMouseExitSound_36, value);
	}

	inline static int32_t get_offset_of_unitySliderChangedSound_37() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unitySliderChangedSound_37)); }
	inline AudioEventGroup_t1120649738 * get_unitySliderChangedSound_37() const { return ___unitySliderChangedSound_37; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unitySliderChangedSound_37() { return &___unitySliderChangedSound_37; }
	inline void set_unitySliderChangedSound_37(AudioEventGroup_t1120649738 * value)
	{
		___unitySliderChangedSound_37 = value;
		Il2CppCodeGenWriteBarrier(&___unitySliderChangedSound_37, value);
	}

	inline static int32_t get_offset_of_unityButtonClickedSound_38() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityButtonClickedSound_38)); }
	inline AudioEventGroup_t1120649738 * get_unityButtonClickedSound_38() const { return ___unityButtonClickedSound_38; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityButtonClickedSound_38() { return &___unityButtonClickedSound_38; }
	inline void set_unityButtonClickedSound_38(AudioEventGroup_t1120649738 * value)
	{
		___unityButtonClickedSound_38 = value;
		Il2CppCodeGenWriteBarrier(&___unityButtonClickedSound_38, value);
	}

	inline static int32_t get_offset_of_unityPointerDownSound_39() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityPointerDownSound_39)); }
	inline AudioEventGroup_t1120649738 * get_unityPointerDownSound_39() const { return ___unityPointerDownSound_39; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityPointerDownSound_39() { return &___unityPointerDownSound_39; }
	inline void set_unityPointerDownSound_39(AudioEventGroup_t1120649738 * value)
	{
		___unityPointerDownSound_39 = value;
		Il2CppCodeGenWriteBarrier(&___unityPointerDownSound_39, value);
	}

	inline static int32_t get_offset_of_unityDragSound_40() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityDragSound_40)); }
	inline AudioEventGroup_t1120649738 * get_unityDragSound_40() const { return ___unityDragSound_40; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityDragSound_40() { return &___unityDragSound_40; }
	inline void set_unityDragSound_40(AudioEventGroup_t1120649738 * value)
	{
		___unityDragSound_40 = value;
		Il2CppCodeGenWriteBarrier(&___unityDragSound_40, value);
	}

	inline static int32_t get_offset_of_unityPointerUpSound_41() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityPointerUpSound_41)); }
	inline AudioEventGroup_t1120649738 * get_unityPointerUpSound_41() const { return ___unityPointerUpSound_41; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityPointerUpSound_41() { return &___unityPointerUpSound_41; }
	inline void set_unityPointerUpSound_41(AudioEventGroup_t1120649738 * value)
	{
		___unityPointerUpSound_41 = value;
		Il2CppCodeGenWriteBarrier(&___unityPointerUpSound_41, value);
	}

	inline static int32_t get_offset_of_unityPointerEnterSound_42() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityPointerEnterSound_42)); }
	inline AudioEventGroup_t1120649738 * get_unityPointerEnterSound_42() const { return ___unityPointerEnterSound_42; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityPointerEnterSound_42() { return &___unityPointerEnterSound_42; }
	inline void set_unityPointerEnterSound_42(AudioEventGroup_t1120649738 * value)
	{
		___unityPointerEnterSound_42 = value;
		Il2CppCodeGenWriteBarrier(&___unityPointerEnterSound_42, value);
	}

	inline static int32_t get_offset_of_unityPointerExitSound_43() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityPointerExitSound_43)); }
	inline AudioEventGroup_t1120649738 * get_unityPointerExitSound_43() const { return ___unityPointerExitSound_43; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityPointerExitSound_43() { return &___unityPointerExitSound_43; }
	inline void set_unityPointerExitSound_43(AudioEventGroup_t1120649738 * value)
	{
		___unityPointerExitSound_43 = value;
		Il2CppCodeGenWriteBarrier(&___unityPointerExitSound_43, value);
	}

	inline static int32_t get_offset_of_unityDropSound_44() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityDropSound_44)); }
	inline AudioEventGroup_t1120649738 * get_unityDropSound_44() const { return ___unityDropSound_44; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityDropSound_44() { return &___unityDropSound_44; }
	inline void set_unityDropSound_44(AudioEventGroup_t1120649738 * value)
	{
		___unityDropSound_44 = value;
		Il2CppCodeGenWriteBarrier(&___unityDropSound_44, value);
	}

	inline static int32_t get_offset_of_unityScrollSound_45() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityScrollSound_45)); }
	inline AudioEventGroup_t1120649738 * get_unityScrollSound_45() const { return ___unityScrollSound_45; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityScrollSound_45() { return &___unityScrollSound_45; }
	inline void set_unityScrollSound_45(AudioEventGroup_t1120649738 * value)
	{
		___unityScrollSound_45 = value;
		Il2CppCodeGenWriteBarrier(&___unityScrollSound_45, value);
	}

	inline static int32_t get_offset_of_unityUpdateSelectedSound_46() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityUpdateSelectedSound_46)); }
	inline AudioEventGroup_t1120649738 * get_unityUpdateSelectedSound_46() const { return ___unityUpdateSelectedSound_46; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityUpdateSelectedSound_46() { return &___unityUpdateSelectedSound_46; }
	inline void set_unityUpdateSelectedSound_46(AudioEventGroup_t1120649738 * value)
	{
		___unityUpdateSelectedSound_46 = value;
		Il2CppCodeGenWriteBarrier(&___unityUpdateSelectedSound_46, value);
	}

	inline static int32_t get_offset_of_unitySelectSound_47() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unitySelectSound_47)); }
	inline AudioEventGroup_t1120649738 * get_unitySelectSound_47() const { return ___unitySelectSound_47; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unitySelectSound_47() { return &___unitySelectSound_47; }
	inline void set_unitySelectSound_47(AudioEventGroup_t1120649738 * value)
	{
		___unitySelectSound_47 = value;
		Il2CppCodeGenWriteBarrier(&___unitySelectSound_47, value);
	}

	inline static int32_t get_offset_of_unityDeselectSound_48() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityDeselectSound_48)); }
	inline AudioEventGroup_t1120649738 * get_unityDeselectSound_48() const { return ___unityDeselectSound_48; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityDeselectSound_48() { return &___unityDeselectSound_48; }
	inline void set_unityDeselectSound_48(AudioEventGroup_t1120649738 * value)
	{
		___unityDeselectSound_48 = value;
		Il2CppCodeGenWriteBarrier(&___unityDeselectSound_48, value);
	}

	inline static int32_t get_offset_of_unityMoveSound_49() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityMoveSound_49)); }
	inline AudioEventGroup_t1120649738 * get_unityMoveSound_49() const { return ___unityMoveSound_49; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityMoveSound_49() { return &___unityMoveSound_49; }
	inline void set_unityMoveSound_49(AudioEventGroup_t1120649738 * value)
	{
		___unityMoveSound_49 = value;
		Il2CppCodeGenWriteBarrier(&___unityMoveSound_49, value);
	}

	inline static int32_t get_offset_of_unityInitializePotentialDragSound_50() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityInitializePotentialDragSound_50)); }
	inline AudioEventGroup_t1120649738 * get_unityInitializePotentialDragSound_50() const { return ___unityInitializePotentialDragSound_50; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityInitializePotentialDragSound_50() { return &___unityInitializePotentialDragSound_50; }
	inline void set_unityInitializePotentialDragSound_50(AudioEventGroup_t1120649738 * value)
	{
		___unityInitializePotentialDragSound_50 = value;
		Il2CppCodeGenWriteBarrier(&___unityInitializePotentialDragSound_50, value);
	}

	inline static int32_t get_offset_of_unityBeginDragSound_51() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityBeginDragSound_51)); }
	inline AudioEventGroup_t1120649738 * get_unityBeginDragSound_51() const { return ___unityBeginDragSound_51; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityBeginDragSound_51() { return &___unityBeginDragSound_51; }
	inline void set_unityBeginDragSound_51(AudioEventGroup_t1120649738 * value)
	{
		___unityBeginDragSound_51 = value;
		Il2CppCodeGenWriteBarrier(&___unityBeginDragSound_51, value);
	}

	inline static int32_t get_offset_of_unityEndDragSound_52() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityEndDragSound_52)); }
	inline AudioEventGroup_t1120649738 * get_unityEndDragSound_52() const { return ___unityEndDragSound_52; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityEndDragSound_52() { return &___unityEndDragSound_52; }
	inline void set_unityEndDragSound_52(AudioEventGroup_t1120649738 * value)
	{
		___unityEndDragSound_52 = value;
		Il2CppCodeGenWriteBarrier(&___unityEndDragSound_52, value);
	}

	inline static int32_t get_offset_of_unitySubmitSound_53() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unitySubmitSound_53)); }
	inline AudioEventGroup_t1120649738 * get_unitySubmitSound_53() const { return ___unitySubmitSound_53; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unitySubmitSound_53() { return &___unitySubmitSound_53; }
	inline void set_unitySubmitSound_53(AudioEventGroup_t1120649738 * value)
	{
		___unitySubmitSound_53 = value;
		Il2CppCodeGenWriteBarrier(&___unitySubmitSound_53, value);
	}

	inline static int32_t get_offset_of_unityCancelSound_54() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityCancelSound_54)); }
	inline AudioEventGroup_t1120649738 * get_unityCancelSound_54() const { return ___unityCancelSound_54; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityCancelSound_54() { return &___unityCancelSound_54; }
	inline void set_unityCancelSound_54(AudioEventGroup_t1120649738 * value)
	{
		___unityCancelSound_54 = value;
		Il2CppCodeGenWriteBarrier(&___unityCancelSound_54, value);
	}

	inline static int32_t get_offset_of_unityToggleSound_55() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___unityToggleSound_55)); }
	inline AudioEventGroup_t1120649738 * get_unityToggleSound_55() const { return ___unityToggleSound_55; }
	inline AudioEventGroup_t1120649738 ** get_address_of_unityToggleSound_55() { return &___unityToggleSound_55; }
	inline void set_unityToggleSound_55(AudioEventGroup_t1120649738 * value)
	{
		___unityToggleSound_55 = value;
		Il2CppCodeGenWriteBarrier(&___unityToggleSound_55, value);
	}

	inline static int32_t get_offset_of_userDefinedSounds_56() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___userDefinedSounds_56)); }
	inline List_1_t1917608707 * get_userDefinedSounds_56() const { return ___userDefinedSounds_56; }
	inline List_1_t1917608707 ** get_address_of_userDefinedSounds_56() { return &___userDefinedSounds_56; }
	inline void set_userDefinedSounds_56(List_1_t1917608707 * value)
	{
		___userDefinedSounds_56 = value;
		Il2CppCodeGenWriteBarrier(&___userDefinedSounds_56, value);
	}

	inline static int32_t get_offset_of_mechanimStateChangedSounds_57() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___mechanimStateChangedSounds_57)); }
	inline List_1_t1917608707 * get_mechanimStateChangedSounds_57() const { return ___mechanimStateChangedSounds_57; }
	inline List_1_t1917608707 ** get_address_of_mechanimStateChangedSounds_57() { return &___mechanimStateChangedSounds_57; }
	inline void set_mechanimStateChangedSounds_57(List_1_t1917608707 * value)
	{
		___mechanimStateChangedSounds_57 = value;
		Il2CppCodeGenWriteBarrier(&___mechanimStateChangedSounds_57, value);
	}

	inline static int32_t get_offset_of_useStartSound_58() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useStartSound_58)); }
	inline bool get_useStartSound_58() const { return ___useStartSound_58; }
	inline bool* get_address_of_useStartSound_58() { return &___useStartSound_58; }
	inline void set_useStartSound_58(bool value)
	{
		___useStartSound_58 = value;
	}

	inline static int32_t get_offset_of_useVisibleSound_59() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useVisibleSound_59)); }
	inline bool get_useVisibleSound_59() const { return ___useVisibleSound_59; }
	inline bool* get_address_of_useVisibleSound_59() { return &___useVisibleSound_59; }
	inline void set_useVisibleSound_59(bool value)
	{
		___useVisibleSound_59 = value;
	}

	inline static int32_t get_offset_of_useInvisibleSound_60() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useInvisibleSound_60)); }
	inline bool get_useInvisibleSound_60() const { return ___useInvisibleSound_60; }
	inline bool* get_address_of_useInvisibleSound_60() { return &___useInvisibleSound_60; }
	inline void set_useInvisibleSound_60(bool value)
	{
		___useInvisibleSound_60 = value;
	}

	inline static int32_t get_offset_of_useCollisionSound_61() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useCollisionSound_61)); }
	inline bool get_useCollisionSound_61() const { return ___useCollisionSound_61; }
	inline bool* get_address_of_useCollisionSound_61() { return &___useCollisionSound_61; }
	inline void set_useCollisionSound_61(bool value)
	{
		___useCollisionSound_61 = value;
	}

	inline static int32_t get_offset_of_useCollisionExitSound_62() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useCollisionExitSound_62)); }
	inline bool get_useCollisionExitSound_62() const { return ___useCollisionExitSound_62; }
	inline bool* get_address_of_useCollisionExitSound_62() { return &___useCollisionExitSound_62; }
	inline void set_useCollisionExitSound_62(bool value)
	{
		___useCollisionExitSound_62 = value;
	}

	inline static int32_t get_offset_of_useTriggerEnterSound_63() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useTriggerEnterSound_63)); }
	inline bool get_useTriggerEnterSound_63() const { return ___useTriggerEnterSound_63; }
	inline bool* get_address_of_useTriggerEnterSound_63() { return &___useTriggerEnterSound_63; }
	inline void set_useTriggerEnterSound_63(bool value)
	{
		___useTriggerEnterSound_63 = value;
	}

	inline static int32_t get_offset_of_useTriggerExitSound_64() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useTriggerExitSound_64)); }
	inline bool get_useTriggerExitSound_64() const { return ___useTriggerExitSound_64; }
	inline bool* get_address_of_useTriggerExitSound_64() { return &___useTriggerExitSound_64; }
	inline void set_useTriggerExitSound_64(bool value)
	{
		___useTriggerExitSound_64 = value;
	}

	inline static int32_t get_offset_of_useMouseEnterSound_65() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useMouseEnterSound_65)); }
	inline bool get_useMouseEnterSound_65() const { return ___useMouseEnterSound_65; }
	inline bool* get_address_of_useMouseEnterSound_65() { return &___useMouseEnterSound_65; }
	inline void set_useMouseEnterSound_65(bool value)
	{
		___useMouseEnterSound_65 = value;
	}

	inline static int32_t get_offset_of_useMouseExitSound_66() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useMouseExitSound_66)); }
	inline bool get_useMouseExitSound_66() const { return ___useMouseExitSound_66; }
	inline bool* get_address_of_useMouseExitSound_66() { return &___useMouseExitSound_66; }
	inline void set_useMouseExitSound_66(bool value)
	{
		___useMouseExitSound_66 = value;
	}

	inline static int32_t get_offset_of_useMouseClickSound_67() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useMouseClickSound_67)); }
	inline bool get_useMouseClickSound_67() const { return ___useMouseClickSound_67; }
	inline bool* get_address_of_useMouseClickSound_67() { return &___useMouseClickSound_67; }
	inline void set_useMouseClickSound_67(bool value)
	{
		___useMouseClickSound_67 = value;
	}

	inline static int32_t get_offset_of_useMouseUpSound_68() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useMouseUpSound_68)); }
	inline bool get_useMouseUpSound_68() const { return ___useMouseUpSound_68; }
	inline bool* get_address_of_useMouseUpSound_68() { return &___useMouseUpSound_68; }
	inline void set_useMouseUpSound_68(bool value)
	{
		___useMouseUpSound_68 = value;
	}

	inline static int32_t get_offset_of_useMouseDragSound_69() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useMouseDragSound_69)); }
	inline bool get_useMouseDragSound_69() const { return ___useMouseDragSound_69; }
	inline bool* get_address_of_useMouseDragSound_69() { return &___useMouseDragSound_69; }
	inline void set_useMouseDragSound_69(bool value)
	{
		___useMouseDragSound_69 = value;
	}

	inline static int32_t get_offset_of_useSpawnedSound_70() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useSpawnedSound_70)); }
	inline bool get_useSpawnedSound_70() const { return ___useSpawnedSound_70; }
	inline bool* get_address_of_useSpawnedSound_70() { return &___useSpawnedSound_70; }
	inline void set_useSpawnedSound_70(bool value)
	{
		___useSpawnedSound_70 = value;
	}

	inline static int32_t get_offset_of_useDespawnedSound_71() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useDespawnedSound_71)); }
	inline bool get_useDespawnedSound_71() const { return ___useDespawnedSound_71; }
	inline bool* get_address_of_useDespawnedSound_71() { return &___useDespawnedSound_71; }
	inline void set_useDespawnedSound_71(bool value)
	{
		___useDespawnedSound_71 = value;
	}

	inline static int32_t get_offset_of_useEnableSound_72() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useEnableSound_72)); }
	inline bool get_useEnableSound_72() const { return ___useEnableSound_72; }
	inline bool* get_address_of_useEnableSound_72() { return &___useEnableSound_72; }
	inline void set_useEnableSound_72(bool value)
	{
		___useEnableSound_72 = value;
	}

	inline static int32_t get_offset_of_useDisableSound_73() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useDisableSound_73)); }
	inline bool get_useDisableSound_73() const { return ___useDisableSound_73; }
	inline bool* get_address_of_useDisableSound_73() { return &___useDisableSound_73; }
	inline void set_useDisableSound_73(bool value)
	{
		___useDisableSound_73 = value;
	}

	inline static int32_t get_offset_of_useCollision2dSound_74() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useCollision2dSound_74)); }
	inline bool get_useCollision2dSound_74() const { return ___useCollision2dSound_74; }
	inline bool* get_address_of_useCollision2dSound_74() { return &___useCollision2dSound_74; }
	inline void set_useCollision2dSound_74(bool value)
	{
		___useCollision2dSound_74 = value;
	}

	inline static int32_t get_offset_of_useCollisionExit2dSound_75() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useCollisionExit2dSound_75)); }
	inline bool get_useCollisionExit2dSound_75() const { return ___useCollisionExit2dSound_75; }
	inline bool* get_address_of_useCollisionExit2dSound_75() { return &___useCollisionExit2dSound_75; }
	inline void set_useCollisionExit2dSound_75(bool value)
	{
		___useCollisionExit2dSound_75 = value;
	}

	inline static int32_t get_offset_of_useTriggerEnter2dSound_76() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useTriggerEnter2dSound_76)); }
	inline bool get_useTriggerEnter2dSound_76() const { return ___useTriggerEnter2dSound_76; }
	inline bool* get_address_of_useTriggerEnter2dSound_76() { return &___useTriggerEnter2dSound_76; }
	inline void set_useTriggerEnter2dSound_76(bool value)
	{
		___useTriggerEnter2dSound_76 = value;
	}

	inline static int32_t get_offset_of_useTriggerExit2dSound_77() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useTriggerExit2dSound_77)); }
	inline bool get_useTriggerExit2dSound_77() const { return ___useTriggerExit2dSound_77; }
	inline bool* get_address_of_useTriggerExit2dSound_77() { return &___useTriggerExit2dSound_77; }
	inline void set_useTriggerExit2dSound_77(bool value)
	{
		___useTriggerExit2dSound_77 = value;
	}

	inline static int32_t get_offset_of_useParticleCollisionSound_78() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useParticleCollisionSound_78)); }
	inline bool get_useParticleCollisionSound_78() const { return ___useParticleCollisionSound_78; }
	inline bool* get_address_of_useParticleCollisionSound_78() { return &___useParticleCollisionSound_78; }
	inline void set_useParticleCollisionSound_78(bool value)
	{
		___useParticleCollisionSound_78 = value;
	}

	inline static int32_t get_offset_of_useNguiOnClickSound_79() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useNguiOnClickSound_79)); }
	inline bool get_useNguiOnClickSound_79() const { return ___useNguiOnClickSound_79; }
	inline bool* get_address_of_useNguiOnClickSound_79() { return &___useNguiOnClickSound_79; }
	inline void set_useNguiOnClickSound_79(bool value)
	{
		___useNguiOnClickSound_79 = value;
	}

	inline static int32_t get_offset_of_useNguiMouseDownSound_80() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useNguiMouseDownSound_80)); }
	inline bool get_useNguiMouseDownSound_80() const { return ___useNguiMouseDownSound_80; }
	inline bool* get_address_of_useNguiMouseDownSound_80() { return &___useNguiMouseDownSound_80; }
	inline void set_useNguiMouseDownSound_80(bool value)
	{
		___useNguiMouseDownSound_80 = value;
	}

	inline static int32_t get_offset_of_useNguiMouseUpSound_81() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useNguiMouseUpSound_81)); }
	inline bool get_useNguiMouseUpSound_81() const { return ___useNguiMouseUpSound_81; }
	inline bool* get_address_of_useNguiMouseUpSound_81() { return &___useNguiMouseUpSound_81; }
	inline void set_useNguiMouseUpSound_81(bool value)
	{
		___useNguiMouseUpSound_81 = value;
	}

	inline static int32_t get_offset_of_useNguiMouseEnterSound_82() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useNguiMouseEnterSound_82)); }
	inline bool get_useNguiMouseEnterSound_82() const { return ___useNguiMouseEnterSound_82; }
	inline bool* get_address_of_useNguiMouseEnterSound_82() { return &___useNguiMouseEnterSound_82; }
	inline void set_useNguiMouseEnterSound_82(bool value)
	{
		___useNguiMouseEnterSound_82 = value;
	}

	inline static int32_t get_offset_of_useNguiMouseExitSound_83() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useNguiMouseExitSound_83)); }
	inline bool get_useNguiMouseExitSound_83() const { return ___useNguiMouseExitSound_83; }
	inline bool* get_address_of_useNguiMouseExitSound_83() { return &___useNguiMouseExitSound_83; }
	inline void set_useNguiMouseExitSound_83(bool value)
	{
		___useNguiMouseExitSound_83 = value;
	}

	inline static int32_t get_offset_of_useUnitySliderChangedSound_84() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnitySliderChangedSound_84)); }
	inline bool get_useUnitySliderChangedSound_84() const { return ___useUnitySliderChangedSound_84; }
	inline bool* get_address_of_useUnitySliderChangedSound_84() { return &___useUnitySliderChangedSound_84; }
	inline void set_useUnitySliderChangedSound_84(bool value)
	{
		___useUnitySliderChangedSound_84 = value;
	}

	inline static int32_t get_offset_of_useUnityButtonClickedSound_85() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityButtonClickedSound_85)); }
	inline bool get_useUnityButtonClickedSound_85() const { return ___useUnityButtonClickedSound_85; }
	inline bool* get_address_of_useUnityButtonClickedSound_85() { return &___useUnityButtonClickedSound_85; }
	inline void set_useUnityButtonClickedSound_85(bool value)
	{
		___useUnityButtonClickedSound_85 = value;
	}

	inline static int32_t get_offset_of_useUnityPointerDownSound_86() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityPointerDownSound_86)); }
	inline bool get_useUnityPointerDownSound_86() const { return ___useUnityPointerDownSound_86; }
	inline bool* get_address_of_useUnityPointerDownSound_86() { return &___useUnityPointerDownSound_86; }
	inline void set_useUnityPointerDownSound_86(bool value)
	{
		___useUnityPointerDownSound_86 = value;
	}

	inline static int32_t get_offset_of_useUnityDragSound_87() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityDragSound_87)); }
	inline bool get_useUnityDragSound_87() const { return ___useUnityDragSound_87; }
	inline bool* get_address_of_useUnityDragSound_87() { return &___useUnityDragSound_87; }
	inline void set_useUnityDragSound_87(bool value)
	{
		___useUnityDragSound_87 = value;
	}

	inline static int32_t get_offset_of_useUnityPointerUpSound_88() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityPointerUpSound_88)); }
	inline bool get_useUnityPointerUpSound_88() const { return ___useUnityPointerUpSound_88; }
	inline bool* get_address_of_useUnityPointerUpSound_88() { return &___useUnityPointerUpSound_88; }
	inline void set_useUnityPointerUpSound_88(bool value)
	{
		___useUnityPointerUpSound_88 = value;
	}

	inline static int32_t get_offset_of_useUnityPointerEnterSound_89() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityPointerEnterSound_89)); }
	inline bool get_useUnityPointerEnterSound_89() const { return ___useUnityPointerEnterSound_89; }
	inline bool* get_address_of_useUnityPointerEnterSound_89() { return &___useUnityPointerEnterSound_89; }
	inline void set_useUnityPointerEnterSound_89(bool value)
	{
		___useUnityPointerEnterSound_89 = value;
	}

	inline static int32_t get_offset_of_useUnityPointerExitSound_90() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityPointerExitSound_90)); }
	inline bool get_useUnityPointerExitSound_90() const { return ___useUnityPointerExitSound_90; }
	inline bool* get_address_of_useUnityPointerExitSound_90() { return &___useUnityPointerExitSound_90; }
	inline void set_useUnityPointerExitSound_90(bool value)
	{
		___useUnityPointerExitSound_90 = value;
	}

	inline static int32_t get_offset_of_useUnityDropSound_91() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityDropSound_91)); }
	inline bool get_useUnityDropSound_91() const { return ___useUnityDropSound_91; }
	inline bool* get_address_of_useUnityDropSound_91() { return &___useUnityDropSound_91; }
	inline void set_useUnityDropSound_91(bool value)
	{
		___useUnityDropSound_91 = value;
	}

	inline static int32_t get_offset_of_useUnityScrollSound_92() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityScrollSound_92)); }
	inline bool get_useUnityScrollSound_92() const { return ___useUnityScrollSound_92; }
	inline bool* get_address_of_useUnityScrollSound_92() { return &___useUnityScrollSound_92; }
	inline void set_useUnityScrollSound_92(bool value)
	{
		___useUnityScrollSound_92 = value;
	}

	inline static int32_t get_offset_of_useUnityUpdateSelectedSound_93() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityUpdateSelectedSound_93)); }
	inline bool get_useUnityUpdateSelectedSound_93() const { return ___useUnityUpdateSelectedSound_93; }
	inline bool* get_address_of_useUnityUpdateSelectedSound_93() { return &___useUnityUpdateSelectedSound_93; }
	inline void set_useUnityUpdateSelectedSound_93(bool value)
	{
		___useUnityUpdateSelectedSound_93 = value;
	}

	inline static int32_t get_offset_of_useUnitySelectSound_94() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnitySelectSound_94)); }
	inline bool get_useUnitySelectSound_94() const { return ___useUnitySelectSound_94; }
	inline bool* get_address_of_useUnitySelectSound_94() { return &___useUnitySelectSound_94; }
	inline void set_useUnitySelectSound_94(bool value)
	{
		___useUnitySelectSound_94 = value;
	}

	inline static int32_t get_offset_of_useUnityDeselectSound_95() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityDeselectSound_95)); }
	inline bool get_useUnityDeselectSound_95() const { return ___useUnityDeselectSound_95; }
	inline bool* get_address_of_useUnityDeselectSound_95() { return &___useUnityDeselectSound_95; }
	inline void set_useUnityDeselectSound_95(bool value)
	{
		___useUnityDeselectSound_95 = value;
	}

	inline static int32_t get_offset_of_useUnityMoveSound_96() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityMoveSound_96)); }
	inline bool get_useUnityMoveSound_96() const { return ___useUnityMoveSound_96; }
	inline bool* get_address_of_useUnityMoveSound_96() { return &___useUnityMoveSound_96; }
	inline void set_useUnityMoveSound_96(bool value)
	{
		___useUnityMoveSound_96 = value;
	}

	inline static int32_t get_offset_of_useUnityInitializePotentialDragSound_97() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityInitializePotentialDragSound_97)); }
	inline bool get_useUnityInitializePotentialDragSound_97() const { return ___useUnityInitializePotentialDragSound_97; }
	inline bool* get_address_of_useUnityInitializePotentialDragSound_97() { return &___useUnityInitializePotentialDragSound_97; }
	inline void set_useUnityInitializePotentialDragSound_97(bool value)
	{
		___useUnityInitializePotentialDragSound_97 = value;
	}

	inline static int32_t get_offset_of_useUnityBeginDragSound_98() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityBeginDragSound_98)); }
	inline bool get_useUnityBeginDragSound_98() const { return ___useUnityBeginDragSound_98; }
	inline bool* get_address_of_useUnityBeginDragSound_98() { return &___useUnityBeginDragSound_98; }
	inline void set_useUnityBeginDragSound_98(bool value)
	{
		___useUnityBeginDragSound_98 = value;
	}

	inline static int32_t get_offset_of_useUnityEndDragSound_99() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityEndDragSound_99)); }
	inline bool get_useUnityEndDragSound_99() const { return ___useUnityEndDragSound_99; }
	inline bool* get_address_of_useUnityEndDragSound_99() { return &___useUnityEndDragSound_99; }
	inline void set_useUnityEndDragSound_99(bool value)
	{
		___useUnityEndDragSound_99 = value;
	}

	inline static int32_t get_offset_of_useUnitySubmitSound_100() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnitySubmitSound_100)); }
	inline bool get_useUnitySubmitSound_100() const { return ___useUnitySubmitSound_100; }
	inline bool* get_address_of_useUnitySubmitSound_100() { return &___useUnitySubmitSound_100; }
	inline void set_useUnitySubmitSound_100(bool value)
	{
		___useUnitySubmitSound_100 = value;
	}

	inline static int32_t get_offset_of_useUnityCancelSound_101() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityCancelSound_101)); }
	inline bool get_useUnityCancelSound_101() const { return ___useUnityCancelSound_101; }
	inline bool* get_address_of_useUnityCancelSound_101() { return &___useUnityCancelSound_101; }
	inline void set_useUnityCancelSound_101(bool value)
	{
		___useUnityCancelSound_101 = value;
	}

	inline static int32_t get_offset_of_useUnityToggleSound_102() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ___useUnityToggleSound_102)); }
	inline bool get_useUnityToggleSound_102() const { return ___useUnityToggleSound_102; }
	inline bool* get_address_of_useUnityToggleSound_102() { return &___useUnityToggleSound_102; }
	inline void set_useUnityToggleSound_102(bool value)
	{
		___useUnityToggleSound_102 = value;
	}

	inline static int32_t get_offset_of__slider_103() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____slider_103)); }
	inline Slider_t1468074762 * get__slider_103() const { return ____slider_103; }
	inline Slider_t1468074762 ** get_address_of__slider_103() { return &____slider_103; }
	inline void set__slider_103(Slider_t1468074762 * value)
	{
		____slider_103 = value;
		Il2CppCodeGenWriteBarrier(&____slider_103, value);
	}

	inline static int32_t get_offset_of__toggle_104() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____toggle_104)); }
	inline Toggle_t1499417981 * get__toggle_104() const { return ____toggle_104; }
	inline Toggle_t1499417981 ** get_address_of__toggle_104() { return &____toggle_104; }
	inline void set__toggle_104(Toggle_t1499417981 * value)
	{
		____toggle_104 = value;
		Il2CppCodeGenWriteBarrier(&____toggle_104, value);
	}

	inline static int32_t get_offset_of__button_105() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____button_105)); }
	inline Button_t990034267 * get__button_105() const { return ____button_105; }
	inline Button_t990034267 ** get_address_of__button_105() { return &____button_105; }
	inline void set__button_105(Button_t990034267 * value)
	{
		____button_105 = value;
		Il2CppCodeGenWriteBarrier(&____button_105, value);
	}

	inline static int32_t get_offset_of__isVisible_106() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____isVisible_106)); }
	inline bool get__isVisible_106() const { return ____isVisible_106; }
	inline bool* get_address_of__isVisible_106() { return &____isVisible_106; }
	inline void set__isVisible_106(bool value)
	{
		____isVisible_106 = value;
	}

	inline static int32_t get_offset_of__needsCoroutine_107() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____needsCoroutine_107)); }
	inline bool get__needsCoroutine_107() const { return ____needsCoroutine_107; }
	inline bool* get_address_of__needsCoroutine_107() { return &____needsCoroutine_107; }
	inline void set__needsCoroutine_107(bool value)
	{
		____needsCoroutine_107 = value;
	}

	inline static int32_t get_offset_of__trans_108() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____trans_108)); }
	inline Transform_t284553113 * get__trans_108() const { return ____trans_108; }
	inline Transform_t284553113 ** get_address_of__trans_108() { return &____trans_108; }
	inline void set__trans_108(Transform_t284553113 * value)
	{
		____trans_108 = value;
		Il2CppCodeGenWriteBarrier(&____trans_108, value);
	}

	inline static int32_t get_offset_of__validMechanimStateChangedSounds_109() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____validMechanimStateChangedSounds_109)); }
	inline List_1_t1917608707 * get__validMechanimStateChangedSounds_109() const { return ____validMechanimStateChangedSounds_109; }
	inline List_1_t1917608707 ** get_address_of__validMechanimStateChangedSounds_109() { return &____validMechanimStateChangedSounds_109; }
	inline void set__validMechanimStateChangedSounds_109(List_1_t1917608707 * value)
	{
		____validMechanimStateChangedSounds_109 = value;
		Il2CppCodeGenWriteBarrier(&____validMechanimStateChangedSounds_109, value);
	}

	inline static int32_t get_offset_of__anim_110() { return static_cast<int32_t>(offsetof(EventSounds_t249579021, ____anim_110)); }
	inline Animator_t792326996 * get__anim_110() const { return ____anim_110; }
	inline Animator_t792326996 ** get_address_of__anim_110() { return &____anim_110; }
	inline void set__anim_110(Animator_t792326996 * value)
	{
		____anim_110 = value;
		Il2CppCodeGenWriteBarrier(&____anim_110, value);
	}
};

struct EventSounds_t249579021_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> DarkTonic.MasterAudio.EventSounds::LayerTagFilterEvents
	List_1_t1765447871 * ___LayerTagFilterEvents_9;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.MasterAudio/PlaylistCommand> DarkTonic.MasterAudio.EventSounds::PlaylistCommandsWithAll
	List_1_t3682532850 * ___PlaylistCommandsWithAll_10;

public:
	inline static int32_t get_offset_of_LayerTagFilterEvents_9() { return static_cast<int32_t>(offsetof(EventSounds_t249579021_StaticFields, ___LayerTagFilterEvents_9)); }
	inline List_1_t1765447871 * get_LayerTagFilterEvents_9() const { return ___LayerTagFilterEvents_9; }
	inline List_1_t1765447871 ** get_address_of_LayerTagFilterEvents_9() { return &___LayerTagFilterEvents_9; }
	inline void set_LayerTagFilterEvents_9(List_1_t1765447871 * value)
	{
		___LayerTagFilterEvents_9 = value;
		Il2CppCodeGenWriteBarrier(&___LayerTagFilterEvents_9, value);
	}

	inline static int32_t get_offset_of_PlaylistCommandsWithAll_10() { return static_cast<int32_t>(offsetof(EventSounds_t249579021_StaticFields, ___PlaylistCommandsWithAll_10)); }
	inline List_1_t3682532850 * get_PlaylistCommandsWithAll_10() const { return ___PlaylistCommandsWithAll_10; }
	inline List_1_t3682532850 ** get_address_of_PlaylistCommandsWithAll_10() { return &___PlaylistCommandsWithAll_10; }
	inline void set_PlaylistCommandsWithAll_10(List_1_t3682532850 * value)
	{
		___PlaylistCommandsWithAll_10 = value;
		Il2CppCodeGenWriteBarrier(&___PlaylistCommandsWithAll_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
