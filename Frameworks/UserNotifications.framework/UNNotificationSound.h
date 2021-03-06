/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationSound : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alertTopic;
    int  _alertType;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    double  _maximumDuration;
    BOOL  _shouldIgnoreRingerSwitch;
    BOOL  _shouldRepeat;
    NSString * _toneFileName;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) NSString *alertTopic;
@property (nonatomic, readonly) int alertType;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSNumber *audioVolume;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic, readonly) BOOL shouldRepeat;
@property (nonatomic, readonly, copy) NSString *toneFileName;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *vibrationPattern;

+ (id)_soundWithAlertType:(int)arg1 toneFileName:(id)arg2;
+ (id)defaultSound;
+ (id)soundNamed:(id)arg1;
+ (id)soundWithAlertType:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlertType:(int)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 maximumDuration:(double)arg5 shouldIgnoreRingerSwitch:(BOOL)arg6 shouldRepeat:(BOOL)arg7 toneFileName:(id)arg8 toneIdentifier:(id)arg9 toneMediaLibraryItemIdentifier:(unsigned long long)arg10 vibrationIdentifier:(id)arg11 vibrationPattern:(id)arg12;
- (id)alertTopic;
- (int)alertType;
- (id)audioCategory;
- (id)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (double)maximumDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)shouldIgnoreRingerSwitch;
- (BOOL)shouldRepeat;
- (id)toneFileName;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end
