/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager
#ifdef __cplusplus
extern "C" {
#endif
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_MAX_NUM_ERRORS
#define net_zhuoweizhang_mcpelauncher_ScriptManager_MAX_NUM_ERRORS 5L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_X
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_X 0L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Y
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Y 1L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Z
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AXIS_Z 2L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_ITEMID
#define net_zhuoweizhang_mcpelauncher_ScriptManager_ITEMID 0L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_DAMAGE
#define net_zhuoweizhang_mcpelauncher_ScriptManager_DAMAGE 1L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_AMOUNT
#define net_zhuoweizhang_mcpelauncher_ScriptManager_AMOUNT 2L
#undef net_zhuoweizhang_mcpelauncher_ScriptManager_HAVE_YOU_FIXED_BLOCKS
#define net_zhuoweizhang_mcpelauncher_ScriptManager_HAVE_YOU_FIXED_BLOCKS 0L
/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPlayerLoc
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPlayerLoc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPlayerEnt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPlayerEnt
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetLevel
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetLevel
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetPosition
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetPosition
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetVel
 * Signature: (IFI)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetVel
  (JNIEnv *, jclass, jint, jfloat, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeExplode
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeExplode
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeAddItemInventory
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeAddItemInventory
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeRideAnimal
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeRideAnimal
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetCarriedItem
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetCarriedItem
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativePreventDefault
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativePreventDefault
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetTile
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetTile
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSpawnEntity
 * Signature: (FFFILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSpawnEntity
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeClientMessage
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeClientMessage
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetNightMode
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetNightMode
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetTile
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetTile
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetPositionRelative
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetPositionRelative
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetRot
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetRot
  (JNIEnv *, jclass, jint, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetYaw
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetYaw
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPitch
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPitch
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetCarriedItem
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetCarriedItem
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeOnGraphicsReset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeOnGraphicsReset
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDefineItem
 * Signature: (ILjava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDefineItem
  (JNIEnv *, jclass, jint, jstring, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDefineFoodItem
 * Signature: (ILjava/lang/String;IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDefineFoodItem
  (JNIEnv *, jclass, jint, jstring, jint, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetFov
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetFov
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetMobSkin
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetMobSkin
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetEntityLoc
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetEntityLoc
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeRemoveEntity
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeRemoveEntity
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetEntityTypeId
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetEntityTypeId
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetAnimalAge
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetAnimalAge
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetAnimalAge
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetAnimalAge
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSelectLevel
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSelectLevel
  (JNIEnv *, jclass, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeLeaveGame
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeLeaveGame
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeJoinServer
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeJoinServer
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetGameSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetGameSpeed
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetAllEntities
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetAllEntities
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetSelectedSlotId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetSelectedSlotId
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetMobHealth
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetMobHealth
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetMobHealth
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetMobHealth
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetEntityRenderType
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetEntityRenderType
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeRequestFrameCallback
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeRequestFrameCallback
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetSignText
 * Signature: (IIII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetSignText
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetSignText
 * Signature: (IIIILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetSignText
  (JNIEnv *, jclass, jint, jint, jint, jint, jstring);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetSneaking
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetSneaking
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetPlayerName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetPlayerName
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetItemName
 * Signature: (IIZ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetItemName
  (JNIEnv *, jclass, jint, jint, jboolean);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDefineBlock
 * Signature: (ILjava/lang/String;[IIZI)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDefineBlock
  (JNIEnv *, jclass, jint, jstring, jintArray, jint, jboolean, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetDestroyTime
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetDestroyTime
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetExplosionResistance
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetExplosionResistance
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetStepSound
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetStepSound
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetLightLevel
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetLightLevel
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetColor
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetColor
  (JNIEnv *, jclass, jint, jintArray);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetShape
 * Signature: (IFFFFFF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetShape
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeBlockSetRenderLayer
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeBlockSetRenderLayer
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetData
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetData
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeHurtTo
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeHurtTo
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDestroyBlock
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDestroyBlock
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetTime
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetTime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetTime
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetGameType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetGameType
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetGameType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetGameType
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetOnFire
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetOnFire
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetSpawn
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetSpawn
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeAddItemChest
 * Signature: (IIIIIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeAddItemChest
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetItemChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetItemChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetItemDataChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetItemDataChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetItemCountChest
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetItemCountChest
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeDropItem
 * Signature: (FFFFIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeDropItem
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativePlaySound
 * Signature: (FFFLjava/lang/String;FF)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativePlaySound
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jstring, jfloat, jfloat);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeClearSlotInventory
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeClearSlotInventory
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetSlotInventory
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetSlotInventory
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeExtinguishFire
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeExtinguishFire
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeGetSlotArmor
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeGetSlotArmor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetArmorSlot
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetArmorSlot
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetupHooks
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetupHooks
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeRemoveItemBackground
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeRemoveItemBackground
  (JNIEnv *, jclass);

/*
 * Class:     net_zhuoweizhang_mcpelauncher_ScriptManager
 * Method:    nativeSetTextParseColorCodes
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_net_zhuoweizhang_mcpelauncher_ScriptManager_nativeSetTextParseColorCodes
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_JoinServerRequest */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_JoinServerRequest
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_JoinServerRequest
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_SelectLevelRequest */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_SelectLevelRequest
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_SelectLevelRequest
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeBlockApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeBlockApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeBlockApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeModPEApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeEntityApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePlayerApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativeLevelApi
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_NativePointer
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_BlockHostObject
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ScriptState
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class net_zhuoweizhang_mcpelauncher_ScriptManager_ParseThread */

#ifndef _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ParseThread
#define _Included_net_zhuoweizhang_mcpelauncher_ScriptManager_ParseThread
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
