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

@interface UnityThinkGear : NSObject <MWMDelegate> {
    bool sendRawEnable;
    bool sendEEGEnable;
    bool sendESenseEnable;
    bool sendBlinkEnable;
    NSString *deviceInfo;

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
