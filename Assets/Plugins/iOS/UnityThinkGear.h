//
//  UnityThinkGear.h
//  Unity-iPhone
//
//  Created by NeuroSky on 3/27/13.
//
//

#import <Foundation/Foundation.h>
#import "MWMDelegate.h"
#import "MWMDevice.h"
#import <AlgoSdk/NskAlgoSdk.h>

@interface UnityThinkGear : NSObject <MWMDelegate,NskAlgoSdkDelegate> {
    bool sendRawEnable;
    bool sendEEGEnable;
    bool sendESenseEnable;
    bool sendBlinkEnable;
    NSString *deviceInfo;
    bool bleFlag;
}

- (id)initWithRawEnable:(bool)rawEnable;

//- (void)accessoryDidConnect:(EAAccessory *)accessory;
- (void)accessoryDidDisconnect;
- (void)dataReceived:(NSDictionary *)data;

- (bool)getSendRawEnable;
- (bool)getSendEEGEnable;
- (bool)getSendESenseEnable;
- (bool)getSendBlinkEnable;

- (void)setSendRawEnable:(bool)value;
- (void)setSendEEGEnable:(bool)value;
- (void)setSendESenseEnable:(bool)value;
- (void)setSendBlinkEnable:(bool)value;

@end
