/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugTexture : MTLToolsTexture {
    unsigned int  _bytesPerRow;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    MTLTextureDescriptor * _descriptor;
    unsigned int  _offset;
    unsigned int  _plane;
    unsigned int  _purgeableState;
    BOOL  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
    unsigned int  _textureUsage;
}

@property (nonatomic, readonly) unsigned int bytesPerRow;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly, copy) MTLTextureDescriptor *descriptor;
@property (nonatomic, readonly) unsigned int offset;
@property (nonatomic, readonly) unsigned int plane;
@property (nonatomic, readonly) unsigned int purgeableState;
@property (nonatomic, readonly) BOOL purgeableStateHasBeenSet;
@property (nonatomic, readonly) BOOL resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;
@property (nonatomic) unsigned int textureUsage;

- (void).cxx_destruct;
- (void)_initResourceTrackingWithDevice:(id)arg1;
- (BOOL)_resourceHasMemory;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned int)bytesPerRow;
- (id)common;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned int)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 bytesPerImage:(unsigned int)arg3 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned int)arg5 slice:(unsigned int)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 bytesPerImage:(unsigned int)arg3 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned int)arg5 slice:(unsigned int)arg6 options:(unsigned int)arg7;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned int)arg4;
- (id)heap;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 descriptor:(id)arg4 offset:(unsigned int)arg5 bytesPerRow:(unsigned int)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 descriptor:(id)arg3 plane:(unsigned int)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 descriptor:(id)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned int)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned int)arg4 textureType:(unsigned int)arg5 levels:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 slices:(struct _NSRange { unsigned int x1; unsigned int x2; })arg7;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 descriptor:(id)arg4;
- (void)makeAliasable;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned int)arg1 textureType:(unsigned int)arg2 level:(unsigned int)arg3 slice:(unsigned int)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned int)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned int)arg1 textureType:(unsigned int)arg2 levels:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 slices:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned int)arg1 textureType:(unsigned int)arg2 levels:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 slices:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 swizzle:(unsigned int)arg5;
- (unsigned int)offset;
- (unsigned int)plane;
- (unsigned int)purgeableState;
- (BOOL)purgeableStateHasBeenSet;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 slice:(unsigned int)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned int)arg5 bytesPerImage:(unsigned int)arg6;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 slice:(unsigned int)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned int)arg5 bytesPerImage:(unsigned int)arg6 options:(unsigned int)arg7;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned int)arg4;
- (BOOL)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (void)setTextureUsage:(unsigned int)arg1;
- (unsigned int)textureUsage;

@end
