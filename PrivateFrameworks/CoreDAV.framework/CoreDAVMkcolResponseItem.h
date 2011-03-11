/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem  {
    NSMutableSet *_propStats;
}

@property(retain) NSMutableSet * propStats;


- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (BOOL)hasPropertyError;
- (id)copyParseRules;
- (void)addPropStat:(id)arg1;
- (id)propStats;
- (void)setPropStats:(id)arg1;

@end