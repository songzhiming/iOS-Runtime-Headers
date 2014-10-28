/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSString, NSURL;

@interface WBSFeedMetadata : NSObject <NSSecureCoding> {
    NSURL *_homepageURL;
    NSURL *_imageURL;
    NSString *_title;
}

@property(readonly) NSURL * homepageURL;
@property(readonly) NSURL * imageURL;
@property(readonly) NSString * title;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homepageURL;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3;
- (id)title;

@end