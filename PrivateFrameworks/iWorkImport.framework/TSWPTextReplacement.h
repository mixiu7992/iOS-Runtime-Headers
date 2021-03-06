/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {
    TSWPSelection * _selection;
    NSString * _string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (int)delta;
- (id)initWithSelection:(id)arg1 string:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(int)arg2 actionBuilder:(struct TSWPStorageActionBuilder { }*)arg3 withFlags:(unsigned int)arg4 replaceBlock:(id /* block */)arg5;
- (unsigned int)targetCharIndex;

@end
