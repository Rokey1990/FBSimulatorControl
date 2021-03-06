//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SimProfilesPathMonitor;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SimServiceContext : NSObject
{
    NSMutableArray *_supportedDeviceTypes;
    NSMutableDictionary *_supportedDeviceTypesByIdentifier;
    NSMutableDictionary *_supportedDeviceTypesByAlias;
    NSMutableArray *_supportedRuntimes;
    NSMutableDictionary *_supportedRuntimesByIdentifier;
    NSMutableDictionary *_supportedRuntimesByAlias;
    NSString *_developerDir;
    NSMutableDictionary *_allDeviceSets;
    BOOL _initialized;
    int _serviceBootstrapCount;
    long long _connectionType;
    NSObject<OS_xpc_object> *_serviceConnection;
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
    NSDate *_lastConnectionTime;
    SimProfilesPathMonitor *_profileMonitor;
    NSObject<OS_dispatch_queue> *_profileQueue;
    NSObject<OS_dispatch_queue> *_allDeviceSetsQueue;
}

+ (void)setSharedContextConnectionType:(long long)arg1;
+ (id)simContextWithConnectionType:(long long)arg1;
+ (id)sharedServiceContext;
+ (id)serviceContextForDeveloperDir:(id)arg1 connectionType:(long long)arg2 error:(id *)arg3;
+ (id)sharedServiceContextForDeveloperDir:(id)arg1 error:(id *)arg2;
@property(nonatomic) int serviceBootstrapCount; // @synthesize serviceBootstrapCount=_serviceBootstrapCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *allDeviceSetsQueue; // @synthesize allDeviceSetsQueue=_allDeviceSetsQueue;
@property(nonatomic) BOOL initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *profileQueue; // @synthesize profileQueue=_profileQueue;
@property(retain, nonatomic) SimProfilesPathMonitor *profileMonitor; // @synthesize profileMonitor=_profileMonitor;
@property(retain, nonatomic) NSDate *lastConnectionTime; // @synthesize lastConnectionTime=_lastConnectionTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceConnectionQueue; // @synthesize serviceConnectionQueue=_serviceConnectionQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(copy, nonatomic) NSString *developerDir; // @synthesize developerDir=_developerDir;
@property(nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
- (void)handleXPCEvent:(id)arg1;
- (void)handleReconnectionBookkeeping;
- (void)_supportedRuntimesScanPath:(id)arg1;
- (void)_supportedDeviceTypesScanPath:(id)arg1;
- (void)supportedRuntimesAddProfilesAtPath:(id)arg1;
- (void)supportedDeviceTypesAddProfilesAtPath:(id)arg1;
- (void)serviceAddProfilesAtPath:(id)arg1;
- (void)addProfilesAtPath:(id)arg1;
@property(readonly) NSDictionary *supportedRuntimesByAlias;
@property(readonly) NSDictionary *supportedRuntimesByIdentifier;
@property(readonly) NSArray *bundledRuntimes;
@property(readonly) NSArray *supportedRuntimes;
@property(readonly) NSDictionary *supportedDeviceTypesByAlias;
@property(readonly) NSDictionary *supportedDeviceTypesByIdentifier;
@property(readonly) NSArray *bundledDeviceTypes;
@property(readonly) NSArray *supportedDeviceTypes;
- (id)allDeviceSets;
- (id)deviceSetWithPath:(id)arg1 error:(id *)arg2;
- (id)defaultDeviceSetWithError:(id *)arg1;
- (void)dealloc;
- (void)connect;
- (void)reloadServiceIfMovedOrAbortIfWeAreInvalid;
- (void)removeOtherCoreSimulatorServiceJobs;
- (id)initWithDeveloperDir:(id)arg1 connectionType:(long long)arg2;
- (id)init;

@end

