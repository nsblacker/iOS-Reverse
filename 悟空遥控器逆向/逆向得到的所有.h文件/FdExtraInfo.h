//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FdExtraInfo : NSObject
{
    int _fd;
    int _nextPortIndex;
    int _port;
    unsigned long long _startTimeInMilliSec;
    NSString *_ipAddress;
}

@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property unsigned long long startTimeInMilliSec; // @synthesize startTimeInMilliSec=_startTimeInMilliSec;
@property int port; // @synthesize port=_port;
@property int nextPortIndex; // @synthesize nextPortIndex=_nextPortIndex;
@property int fd; // @synthesize fd=_fd;
- (void).cxx_destruct;

@end

