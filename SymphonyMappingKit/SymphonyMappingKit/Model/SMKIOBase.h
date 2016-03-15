//
//  SMKIOBase.h
//  SymphonyMappingKit
//
//  Created by Mark Cafaro on 2/13/13.
//  Copyright (c) 2013 Rieke Lab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AUIModel/AUIModel.h>

// CODE DEBT: copied from AUIAxoPatchDevice.h, which is part of a plugin and
// therefore not readily imported from.
typedef enum {
    VCLAMP_MODE=0,
    I0_MODE,
    ICLAMP_NORMAL_MODE,
    ICLAMP_FAST_MODE,
    TRACK_MODE,
    UNKNOWN_MODE
} AxoPatchAmpMode;

@interface SMKIOBase : NSObject {
    NSString *_deviceName;
    NSString *_deviceManufacturer;
    AxoPatchAmpMode _deviceMode;
    NSDictionary *_deviceParameters;
    NSNumber *_channelNumber;
    StreamType _streamType;
}

@property (copy) NSString *deviceName;
@property (copy) NSString *deviceManufacturer;
@property AxoPatchAmpMode deviceMode;
@property (retain) NSDictionary *deviceParameters;

// TODO: These don't really belong here. They should be in a stream associated with an external device.
@property (retain) NSNumber *channelNumber;
@property StreamType streamType;

@end
