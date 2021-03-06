/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPassbookMediaObject : CKMediaObject {
    UIImage * _icon;
    PKPass * _pass;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) PKPass *pass;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;

- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (id)icon;
- (int)mediaType;
- (id)pass;
- (id)passView;
- (void)setIcon:(id)arg1;
- (void)setPass:(id)arg1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;
- (id)subtitle;
- (id)title;

@end
