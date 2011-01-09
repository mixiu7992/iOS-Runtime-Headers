/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DACalendarDatabase : DACalendarObject 
{
    BOOL _isChangeLoggingEnabled;
}

@property BOOL isChangeLoggingEnabled;
@property(readonly) NSArray *stores;
@property(readonly) DACalendar *defaultLocalCalendar;
@property(readonly) DACalendar *defaultCalendarForNewEvents;


- (id)initWithRef:(struct CalDatabase { }*)arg1;
- (BOOL)isChangeLoggingEnabled;
- (void)setIsChangeLoggingEnabled:(BOOL)arg1;
- (id)defaultLocalCalendar;
- (id)storeWithExternalID:(id)arg1;
- (id)event;
- (id)calendar;
- (id)recurrence;
- (id)stores;
- (id)defaultCalendarForNewEvents;

@end