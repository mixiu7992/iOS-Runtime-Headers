/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand {
}

@property(retain) SAAlarmObject * alarmToCreate;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmToCreate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAlarmToCreate:(id)arg1;

@end