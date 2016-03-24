/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHValidator : NSObject

- (BOOL)_pathExtension:(id)arg1 conformsToType:(struct __CFString { }*)arg2;
- (BOOL)_validateImageSource:(struct CGImageSource { }*)arg1 error:(id*)arg2;
- (BOOL)_validateLivePhotoResourceURLs:(id)arg1 error:(id*)arg2;
- (BOOL)_validateVideoURL:(id)arg1 error:(id*)arg2;
- (void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 imageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (BOOL)isValidImagePathExtension:(id)arg1;
- (BOOL)isValidVideoPathExtension:(id)arg1;
- (BOOL)validateData:(id)arg1 withOptions:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)validateURL:(id)arg1 withOptions:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)validateURLs:(id)arg1 withOptions:(unsigned int)arg2 error:(id*)arg3;

@end