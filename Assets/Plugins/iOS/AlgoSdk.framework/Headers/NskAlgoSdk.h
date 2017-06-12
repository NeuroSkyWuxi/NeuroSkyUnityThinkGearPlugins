/**
 ******************************************************************************
 * @file    NskAlgoSdk.h
 * @author  Algo SDK Team
 * @version V0.1
 * @date    12-May-2015
 * @brief   Algo SDK Objective-C wrapper layer
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) NeuroSky Inc. All rights reserved.</center></h2>
 *
 *
 ******************************************************************************
 */

#import <Foundation/Foundation.h>

/* EEG data signal quality definitions */
typedef NS_ENUM(NSInteger, NskAlgoSignalQuality) {
    NskAlgoSignalQualityGood,           /* Signal quality is in good level */
    NskAlgoSignalQualityMedium,         /* Signal quality is in medium level */
    NskAlgoSignalQualityPoor,           /* Signal quality is in poor level */
    NskAlgoSignalQualityNotDetected     /* Sensor signal is not detected */
};

/* SDK state definitions */
typedef NS_ENUM(NSInteger, NskAlgoState) {
    NskAlgoStateInited = 1,             /* Algo SDK initialized */
    NskAlgoStateRunning,                /* Algo SDK is performing analysis (i.e. startProcess() invoked) */
    NskAlgoStateCollectingBaselineData, /* Algo SDK is collecting baseline data */
    NskAlgoStateStop,                   /* Algo SDK stops data analysis/baseline collection */
    NskAlgoStatePause,                  /* Algo SDK pauses data analysis */
    NskAlgoStateUninited,               /* Algo SDK is uninitialized */
    NskAlgoStateAnalysingBulkData       /* Algo SDK is analysing a bulk of EEG data */
};

/* SDK state change reason definitions */
typedef NS_ENUM(NSInteger, NskAlgoReason) {
    NskAlgoReasonConfigChanged = 1,      /* RESERVED: SDK configuration changed */
    NskAlgoReasonUserProfileChanged,     /* RESERVED: Active user profile has been changed */
    NskAlgoReasonUserTrigger,            /* User triggers */
    NskAlgoReasonBaselineExpired,        /* RESERVED: Baseline expired */
    NskAlgoReasonNoBaseline,             /* No baseline data collected yet */
    NskAlgoReasonSignalQuality           /* Due to signal quality */
};

/* EEG algorithm type definitions */
typedef NS_ENUM(NSInteger, NskAlgoEegType) {
    NskAlgoEegTypeAtt   = 0x008,            /* Attention */
    NskAlgoEegTypeMed   = 0x010,            /* Meditation */
    NskAlgoEegTypeBlink = 0x080,            /* Eye Blink Detection */
    NskAlgoEegTypeBP    = 0x800             /* EEG Bandpower */
};

/* EEG data type definitions (data from COMM SDK) */
typedef NS_ENUM(NSInteger, NskAlgoDataType) {
    NskAlgoDataTypeEEG,      /* Raw EEG data */
    NskAlgoDataTypeAtt,      /* Attention data */
    NskAlgoDataTypeMed,      /* Meditation data */
    NskAlgoDataTypePQ,       /* Poor signal quality data */
    NskAlgoDataTypeBulkEEG,  /* Bulk EEG data (must be multiple of 512, i.e. Ns of continuous GOOD EEG data */
};

@protocol NskAlgoSdkDelegate <NSObject>

@required
/* notification on SDK state change */
- (void) stateChanged: (NskAlgoState)state reason:(NskAlgoReason)reason;

@optional
/* notification on EEG algorithm index */
- (void) attAlgoIndex: (NSNumber*)att_index;

- (void) medAlgoIndex: (NSNumber*)med_index;

- (void) eyeBlinkDetect: (NSNumber*)strength;

- (void) bpAlgoIndex: (NSNumber*)delta theta:(NSNumber*)theta alpha:(NSNumber*)alpha beta:(NSNumber*)beta gamma:(NSNumber*)gamma;

/* notification on signal quality */
- (void) signalQuality: (NskAlgoSignalQuality)signalQuality;

@end

@interface NskAlgoSdk : NSObject {
    id <NskAlgoSdkDelegate> delegate;
}

@property (retain) id delegate;

+ (id) sharedInstance;

/* set algorithm type(s)
 Return: 0 - Algo SDK is initialized successfully; Otherwise, something wrong on SDK initialization
 */
- (NSInteger) setAlgorithmTypes: (NskAlgoEegType)algoTypes;

/* get algorithm version */
- (NSString*) getAlgoVersion: (NskAlgoEegType)algoType;

/* get SDK version */
- (NSString*) getSdkVersion;

/* start data analysis */
- (BOOL) startProcess;

/* pause data analysis */
- (BOOL) pauseProcess;

/* stop data analysis */
- (BOOL) stopProcess;

/* EEG raw data stream (from COMM SDK) */
- (BOOL) dataStream: (NskAlgoDataType)type data:(int16_t*)data length:(int32_t)length;

@end
