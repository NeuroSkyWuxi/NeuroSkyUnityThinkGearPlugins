/**
 *  This Class is used for Seagull device
 *
 *  Copyright (c) 2015 neurosky. All rights reserved.
 */

#import <CoreBluetooth/CoreBluetooth.h>

#import "MWMDelegate.h"
#import "MWMEnum.h"

//-
@interface MWMDevice : NSObject  <MWMDelegate>
{
}

@property (nonatomic, assign) id<MWMDelegate> delegate;

+ (MWMDevice *)sharedInstance;

-(NSString *) getVersion;

//scan
-(void)scanDevice;
//connect
-(void)connectDevice:(NSString *)deviceID;
//disconnect
-(void)disconnectDevice;

//config
-(void)writeConfig:(TGMWMConfigCMD)cmd;
-(void)readConfig;

-(void)enableConsoleLog:(BOOL)enabled;
// logging
-(NSString *)enableLoggingWithOptions:(unsigned)option;
-(void)stopLogging;

@end
