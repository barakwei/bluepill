//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

#import "NSURLSessionDelegate.h"

@class NSString, NSURLSession, NSURLSessionDataTask;

@interface DTXFoundationURLTransport : DTXTransport <NSURLSessionDelegate>
{
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
}

+ (id)schemes;
- (void)disconnect;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_shutDownSession;
- (id)initWithRemoteAddress:(id)arg1;
- (unsigned int)supportedDirections;
- (id)initWithLocalAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

