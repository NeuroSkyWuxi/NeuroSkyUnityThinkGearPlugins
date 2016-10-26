//
//  UnityThinkGearController.m
//  Unity-iPhone
//
//  Created by NeuroSky on 3/27/13.
//
//

#import "UnityThinkGearController.h"
#import "MWMDevice.h"

static UnityThinkGear *unityThinkGearObj;

@implementation UnityThinkGearController

@end

extern "C" {
    
    void TGAM_Init(bool rawEnabled) {
        
        NSLog(@"TGAM_Init");
     
        
        unityThinkGearObj = [[UnityThinkGear alloc] initWithRawEnable:rawEnabled];
        
    }
    
    void  TGAM_ScanDevice(){
        [[MWMDevice sharedInstance] disconnectDevice];
        NSLog(@"call SDK disconnectDevice---------");
        
        [[MWMDevice sharedInstance] setDelegate:unityThinkGearObj];
        [[MWMDevice sharedInstance] scanDevice];
        NSLog(@"call SDK scanDevice---------");
        
    }
    
    
    void  TGAM_ConnectDevice(const char* deviceId){
        
        [[MWMDevice sharedInstance] connectDevice:[NSString stringWithUTF8String: deviceId]];
        [[MWMDevice sharedInstance] enableConsoleLog:true];
        NSLog(@"call SDK ConnectDevice---------");
        
    }

    
    void TGAM_Close() {
        // perform TGAccessoryManager teardown
        //        [[TGAccessoryManager sharedTGAccessoryManager] teardownManager];
        [[MWMDevice sharedInstance] disconnectDevice];
        NSLog(@"call SDK disconnectDevice---------");
    }

    
    void TGAM_StartStream() {
        
        NSLog(@"TGAM_StartStream");

//        if([[TGAccessoryManager sharedTGAccessoryManager] accessory] != nil)
//            [[TGAccessoryManager sharedTGAccessoryManager] startStream];
        
    }
    
    void TGAM_StopStream() {
//        if([[TGAccessoryManager sharedTGAccessoryManager] connected])
//            [[TGAccessoryManager sharedTGAccessoryManager] stopStream];
        
    }

    bool TGAM_GetSendRawEnable(){
        NSLog(@"RawTT");
        return [unityThinkGearObj getSendRawEnable];
    }
    
    bool TGAM_GetSendEEGEnable(){
        NSLog(@"EEGTT");
        return [unityThinkGearObj getSendEEGEnable];
    }
    
    bool TGAM_GetSendESenseEnable(){
        NSLog(@"ESenseTT");
        return [unityThinkGearObj getSendESenseEnable];
    }
    
    bool TGAM_GetSendBlinkEnable(){
        NSLog(@"BlinkTT");
        return [unityThinkGearObj getSendBlinkEnable];
    }
    
    void TGAM_SetSendRawEnable(bool enabled){
        enabled?NSLog(@"SetRawT:True"):NSLog(@"SetRawT:False");
        [unityThinkGearObj setSendRawEnable:enabled];
    }
    
    void TGAM_SetSendEEGEnable(bool enabled){
        enabled?NSLog(@"SetEEGT:True"):NSLog(@"SetEEGT:False");
        [unityThinkGearObj setSendEEGEnable:enabled];
    }
    
    void TGAM_SetSendESenseEnable(bool enabled){
        enabled?NSLog(@"SetESenseT:True"):NSLog(@"SetSEnseT:False");
        [unityThinkGearObj setSendESenseEnable:enabled];
    }
    
    void TGAM_SetSendBlinkEnable(bool enabled){
        enabled?NSLog(@"SetBlinkT:True"):NSLog(@"SetBlinkT:False");
        [unityThinkGearObj setSendBlinkEnable:enabled];
    }

}






