//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPeripheralDelegate.h"

@class CBPeripheral, HEBLEParser, NSDictionary, NSString, NSTimer;

@interface BLEDevice : NSObject <CBPeripheralDelegate>
{
    int sendingCommand;
    NSString *setting_ssid;
    NSString *setting_wifi_pw;
    long long setting_wifi_encrypt;
    NSString *setting_owner_id;
    NSString *setting_auth_token;
    NSString *setting_time_zone;
    NSString *setting_dcd;
    _Bool binding_transaction;
    int transactionStep;
    _Bool changing_wifi_transaction;
    NSString *getting_ssid;
    NSString *getting_wifi_pw;
    long long getting_wifi_encrypt;
    _Bool get_wifi_transaction;
    long long protocol_version;
    int retry;
    _Bool _validated;
    _Bool _validating;
    int _setupStep;
    int _setupStatus;
    id <BLEDeviceDelegate> _delegate;
    CBPeripheral *_peripheral;
    NSString *_name;
    long long _model;
    long long _currentAction;
    HEBLEParser *_parser;
    NSTimer *_pollingTimer;
    NSDictionary *_advertisement;
    NSTimer *_statusTimer;
}

+ (long long)parseModel:(id)arg1;
+ (id)parseName:(id)arg1;
+ (long long)parseApSecureType:(id)arg1;
+ (id)secureTypes;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(retain, nonatomic) NSDictionary *advertisement; // @synthesize advertisement=_advertisement;
@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) HEBLEParser *parser; // @synthesize parser=_parser;
@property(readonly, nonatomic, getter=isValidating) _Bool validating; // @synthesize validating=_validating;
@property(readonly, nonatomic, getter=isValidated) _Bool validated; // @synthesize validated=_validated;
@property(readonly, nonatomic) int setupStatus; // @synthesize setupStatus=_setupStatus;
@property(readonly, nonatomic) int setupStep; // @synthesize setupStep=_setupStep;
@property(readonly, nonatomic) long long currentAction; // @synthesize currentAction=_currentAction;
@property(readonly, nonatomic) long long model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(nonatomic) __weak id <BLEDeviceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)forceValidated;
- (void)cancelStep;
- (void)handleWriteFailed:(id)arg1 error:(id)arg2;
- (void)handleWriteCharacteristic:(id)arg1;
- (void)handleReadCharacteristic:(id)arg1;
- (void)handleWifiData:(id)arg1;
- (void)handleChangingWifiStep:(int)arg1 status:(int)arg2;
- (void)handleSetupBindingStep:(int)arg1 status:(int)arg2;
- (void)handleSetupStep:(int)arg1 withStatus:(int)arg2;
- (void)handlePendingAction;
- (void)sendCommand:(int)arg1 payload:(id)arg2;
- (_Bool)getProtocolVersion;
- (void)getWifiEncryption;
- (void)getWifiPassword;
- (void)getWifiSSID;
- (void)getWiFi;
- (void)bind;
- (void)setDcdUri;
- (void)setTimeZone;
- (void)setAuthToken;
- (void)setOwnerID;
- (void)setWifiEncryption;
- (void)setWifiPassword;
- (void)setSSID;
- (void)changeSSID:(id)arg1 password:(id)arg2 encryption:(long long)arg3;
- (void)bindWithSSID:(id)arg1 password:(id)arg2 encryption:(long long)arg3 userID:(id)arg4 token:(id)arg5 timezone:(id)arg6 dcd:(id)arg7;
- (void)getApContList;
- (void)getApNewList;
- (void)getStatusAfterInterval;
- (void)getStatus;
- (void)validatePrivacy;
- (long long)checkErrorForAction:(long long)arg1;
- (id)prepareService:(id)arg1 characteristic:(id)arg2;
- (_Bool)check:(id)arg1 isEqualService:(id)arg2 characteristic:(id)arg3;
- (id)characteristicWithUUID:(id)arg1 serviceUUID:(id)arg2;
- (id)serviceWithUUID:(id)arg1;
@property(readonly, nonatomic) NSString *macSuffix;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)initWithPeripheral:(id)arg1 advertisement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

