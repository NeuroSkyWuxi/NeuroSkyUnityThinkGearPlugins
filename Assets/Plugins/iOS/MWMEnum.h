//
//  MWMEnum.h
//
//  Created by test on 09/06/16.
//  Copyright (c) 2016 neurosky. All rights reserved.
//

#pragma mark -- TGBleConfig --
typedef NS_ENUM(NSUInteger, TGMWMConfigCMD){
    TGMWMConfigCMD_ChangeNotchTo_50,
    TGMWMConfigCMD_ChangeNotchTo_60
};

#pragma mark -- LoggingOptions --
typedef NS_ENUM(NSUInteger, LoggingOptions){
    LoggingOptions_Raw  = 1,
    LoggingOptions_Processed = 1 << 1,
};



