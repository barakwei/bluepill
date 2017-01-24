//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTXAllowedRPC.h"

@class DTXChannel, NSString;

@interface DTXService : NSObject <DTXAllowedRPC>
{
    DTXChannel *_channel;
}

+ (void)registerCapabilities:(id)arg1;
+ (_Bool)automaticallyRegistersCapabilities;
+ (void)instantiateServiceWithChannel:(id)arg1;
@property(readonly, retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
- (void)messageReceived:(id)arg1;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

