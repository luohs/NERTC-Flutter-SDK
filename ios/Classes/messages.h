// Autogenerated from Pigeon (v0.1.17), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class NEFLTIntValue;
@class NEFLTSetVideoRendererMirrorRequest;
@class NEFLTSetupRemoteVideoRendererRequest;
@class NEFLTSetupRemoteSubStreamVideoRendererRequest;
@class NEFLTStartAudioMixingRequest;
@class NEFLTPlayEffectRequest;
@class NEFLTSetEffectSendVolumeRequest;
@class NEFLTSetEffectPlaybackVolumeRequest;
@class NEFLTBoolValue;
@class NEFLTDoubleValue;
@class NEFLTSetCameraFocusPositionRequest;
@class NEFLTEnableEarbackRequest;
@class NEFLTCreateEngineRequest;
@class NEFLTJoinChannelRequest;
@class NEFLTSubscribeRemoteAudioRequest;
@class NEFLTSetAudioProfileRequest;
@class NEFLTSetLocalVideoConfigRequest;
@class NEFLTStartScreenCaptureRequest;
@class NEFLTSubscribeRemoteVideoRequest;
@class NEFLTSubscribeRemoteSubStreamVideoRequest;
@class NEFLTEnableAudioVolumeIndicationRequest;
@class NEFLTAddOrUpdateLiveStreamTaskRequest;
@class NEFLTDeleteLiveStreamTaskRequest;

@interface NEFLTIntValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface NEFLTSetVideoRendererMirrorRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * mirror;
@end

@interface NEFLTSetupRemoteVideoRendererRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@end

@interface NEFLTSetupRemoteSubStreamVideoRendererRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@end

@interface NEFLTStartAudioMixingRequest : NSObject
@property(nonatomic, copy, nullable) NSString * path;
@property(nonatomic, strong, nullable) NSNumber * loopCount;
@property(nonatomic, strong, nullable) NSNumber * sendEnabled;
@property(nonatomic, strong, nullable) NSNumber * sendVolume;
@property(nonatomic, strong, nullable) NSNumber * playbackEnabled;
@property(nonatomic, strong, nullable) NSNumber * playbackVolume;
@end

@interface NEFLTPlayEffectRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, copy, nullable) NSString * path;
@property(nonatomic, strong, nullable) NSNumber * loopCount;
@property(nonatomic, strong, nullable) NSNumber * sendEnabled;
@property(nonatomic, strong, nullable) NSNumber * sendVolume;
@property(nonatomic, strong, nullable) NSNumber * playbackEnabled;
@property(nonatomic, strong, nullable) NSNumber * playbackVolume;
@end

@interface NEFLTSetEffectSendVolumeRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface NEFLTSetEffectPlaybackVolumeRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * effectId;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface NEFLTBoolValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface NEFLTDoubleValue : NSObject
@property(nonatomic, strong, nullable) NSNumber * value;
@end

@interface NEFLTSetCameraFocusPositionRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * x;
@property(nonatomic, strong, nullable) NSNumber * y;
@end

@interface NEFLTEnableEarbackRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface NEFLTCreateEngineRequest : NSObject
@property(nonatomic, copy, nullable) NSString * appKey;
@property(nonatomic, copy, nullable) NSString * logDir;
@property(nonatomic, strong, nullable) NSNumber * logLevel;
@property(nonatomic, strong, nullable) NSNumber * audioAutoSubscribe;
@property(nonatomic, strong, nullable) NSNumber * audioDisableOverrideSpeakerOnReceiver;
@property(nonatomic, strong, nullable) NSNumber * audioDisableSWAECOnHeadset;
@property(nonatomic, strong, nullable) NSNumber * audioAINSEnabled;
@property(nonatomic, strong, nullable) NSNumber * serverRecordAudio;
@property(nonatomic, strong, nullable) NSNumber * serverRecordVideo;
@property(nonatomic, strong, nullable) NSNumber * serverRecordMode;
@property(nonatomic, strong, nullable) NSNumber * serverRecordSpeaker;
@property(nonatomic, strong, nullable) NSNumber * publishSelfStream;
@property(nonatomic, strong, nullable) NSNumber * videoCaptureObserverEnabled;
@property(nonatomic, strong, nullable) NSNumber * videoEncodeMode;
@property(nonatomic, strong, nullable) NSNumber * videoDecodeMode;
@property(nonatomic, strong, nullable) NSNumber * videoSendMode;
@end

@interface NEFLTJoinChannelRequest : NSObject
@property(nonatomic, copy, nullable) NSString * token;
@property(nonatomic, copy, nullable) NSString * channelName;
@property(nonatomic, strong, nullable) NSNumber * uid;
@end

@interface NEFLTSubscribeRemoteAudioRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * subscribe;
@end

@interface NEFLTSetAudioProfileRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * profile;
@property(nonatomic, strong, nullable) NSNumber * scenario;
@end

@interface NEFLTSetLocalVideoConfigRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * videoProfile;
@property(nonatomic, strong, nullable) NSNumber * videoCropMode;
@property(nonatomic, strong, nullable) NSNumber * frontCamera;
@property(nonatomic, strong, nullable) NSNumber * frameRate;
@property(nonatomic, strong, nullable) NSNumber * minFrameRate;
@property(nonatomic, strong, nullable) NSNumber * bitrate;
@property(nonatomic, strong, nullable) NSNumber * minBitrate;
@property(nonatomic, strong, nullable) NSNumber * degradationPrefer;
@property(nonatomic, strong, nullable) NSNumber * width;
@property(nonatomic, strong, nullable) NSNumber * height;
@property(nonatomic, strong, nullable) NSNumber * cameraType;
@end

@interface NEFLTStartScreenCaptureRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * contentPrefer;
@property(nonatomic, strong, nullable) NSNumber * videoProfile;
@property(nonatomic, strong, nullable) NSNumber * frameRate;
@property(nonatomic, strong, nullable) NSNumber * minFrameRate;
@property(nonatomic, strong, nullable) NSNumber * bitrate;
@property(nonatomic, strong, nullable) NSNumber * minBitrate;
@end

@interface NEFLTSubscribeRemoteVideoRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * streamType;
@property(nonatomic, strong, nullable) NSNumber * subscribe;
@end

@interface NEFLTSubscribeRemoteSubStreamVideoRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * uid;
@property(nonatomic, strong, nullable) NSNumber * subscribe;
@end

@interface NEFLTEnableAudioVolumeIndicationRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * enable;
@property(nonatomic, strong, nullable) NSNumber * interval;
@end

@interface NEFLTAddOrUpdateLiveStreamTaskRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * serial;
@property(nonatomic, copy, nullable) NSString * taskId;
@property(nonatomic, copy, nullable) NSString * url;
@property(nonatomic, strong, nullable) NSNumber * serverRecordEnabled;
@property(nonatomic, strong, nullable) NSNumber * liveMode;
@property(nonatomic, strong, nullable) NSNumber * layoutWidth;
@property(nonatomic, strong, nullable) NSNumber * layoutHeight;
@property(nonatomic, strong, nullable) NSNumber * layoutBackgroundColor;
@property(nonatomic, copy, nullable) NSString * layoutImageUrl;
@property(nonatomic, strong, nullable) NSNumber * layoutImageX;
@property(nonatomic, strong, nullable) NSNumber * layoutImageY;
@property(nonatomic, strong, nullable) NSNumber * layoutImageWidth;
@property(nonatomic, strong, nullable) NSNumber * layoutImageHeight;
@property(nonatomic, strong, nullable) NSArray * layoutUserTranscodingList;
@end

@interface NEFLTDeleteLiveStreamTaskRequest : NSObject
@property(nonatomic, strong, nullable) NSNumber * serial;
@property(nonatomic, copy, nullable) NSString * taskId;
@end

@protocol NEFLTVideoRendererApi
-(nullable NEFLTIntValue *)createVideoRenderer:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setMirror:(NEFLTSetVideoRendererMirrorRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setupLocalVideoRenderer:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setupRemoteVideoRenderer:(NEFLTSetupRemoteVideoRendererRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setupLocalSubStreamVideoRenderer:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setupRemoteSubStreamVideoRenderer:(NEFLTSetupRemoteSubStreamVideoRendererRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)disposeVideoRenderer:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void NEFLTVideoRendererApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<NEFLTVideoRendererApi> _Nullable api);

@protocol NEFLTAudioMixingApi
-(nullable NEFLTIntValue *)setAudioMixingEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)clearAudioMixingEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)startAudioMixing:(NEFLTStartAudioMixingRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)pauseAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)resumeAudioMixing:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setAudioMixingSendVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getAudioMixingSendVolume:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setAudioMixingPlaybackVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getAudioMixingPlaybackVolume:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getAudioMixingDuration:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getAudioMixingCurrentPosition:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setAudioMixingPosition:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void NEFLTAudioMixingApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<NEFLTAudioMixingApi> _Nullable api);

@protocol NEFLTAudioEffectApi
-(nullable NEFLTIntValue *)setAudioEffectEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)clearAudioEffectEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)playEffect:(NEFLTPlayEffectRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopEffect:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)pauseEffect:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)resumeEffect:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)pauseAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)resumeAllEffects:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setEffectSendVolume:(NEFLTSetEffectSendVolumeRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getEffectSendVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setEffectPlaybackVolume:(NEFLTSetEffectPlaybackVolumeRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getEffectPlaybackVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void NEFLTAudioEffectApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<NEFLTAudioEffectApi> _Nullable api);

@protocol NEFLTDeviceManagerApi
-(nullable NEFLTIntValue *)setDeviceEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)clearDeviceEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTBoolValue *)isSpeakerphoneOn:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setSpeakerphoneOn:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)switchCamera:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setCameraZoomFactor:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTDoubleValue *)getCameraMaxZoom:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setCameraTorchOn:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setCameraFocusPosition:(NEFLTSetCameraFocusPositionRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setPlayoutDeviceMute:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTBoolValue *)isPlayoutDeviceMute:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setRecordDeviceMute:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTBoolValue *)isRecordDeviceMute:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)enableEarback:(NEFLTEnableEarbackRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setEarbackVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setAudioFocusMode:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void NEFLTDeviceManagerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<NEFLTDeviceManagerApi> _Nullable api);

@protocol NEFLTEngineApi
-(nullable NEFLTIntValue *)create:(NEFLTCreateEngineRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)release:(FlutterError *_Nullable *_Nonnull)error withCompletion: (void(^)(void))completion;
-(nullable NEFLTIntValue *)setStatsEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)clearStatsEventCallback:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setChannelProfile:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)joinChannel:(NEFLTJoinChannelRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)leaveChannel:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)enableLocalAudio:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)subscribeRemoteAudio:(NEFLTSubscribeRemoteAudioRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)subscribeAllRemoteAudio:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setAudioProfile:(NEFLTSetAudioProfileRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)enableDualStreamMode:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setLocalVideoConfig:(NEFLTSetLocalVideoConfigRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)startVideoPreview:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopVideoPreview:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)enableLocalVideo:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)startScreenCapture:(NEFLTStartScreenCaptureRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopScreenCapture:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)subscribeRemoteVideo:(NEFLTSubscribeRemoteVideoRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)subscribeRemoteSubStreamVideo:(NEFLTSubscribeRemoteSubStreamVideoRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)muteLocalAudioStream:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)muteLocalVideoStream:(NEFLTBoolValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)startAudioDump:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)stopAudioDump:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)enableAudioVolumeIndication:(NEFLTEnableAudioVolumeIndicationRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)adjustRecordingSignalVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)adjustPlaybackSignalVolume:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)addLiveStreamTask:(NEFLTAddOrUpdateLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)updateLiveStreamTask:(NEFLTAddOrUpdateLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)removeLiveStreamTask:(NEFLTDeleteLiveStreamTaskRequest*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)setClientRole:(NEFLTIntValue*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)getConnectionState:(FlutterError *_Nullable *_Nonnull)error;
-(nullable NEFLTIntValue *)uploadSdkInfo:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void NEFLTEngineApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<NEFLTEngineApi> _Nullable api);

NS_ASSUME_NONNULL_END
