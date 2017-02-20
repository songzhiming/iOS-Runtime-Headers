/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {
    _TVImageView * _backgroundImageView;
    IKImageElement * _bgImageElement;
    IKImageElement * _heroImgElement;
    UIImage * _loadingImage;
    IKViewElement * _loadingTemplateElement;
    UIView * _loadingTitleLabel;
    float  _spinnerDelay;
    struct CGSize { 
        float width; 
        float height; 
    }  _spinnerSize;
    UIActivityIndicatorView * _spinnerView;
    UIVisualEffectView * _visualEffectView;
}

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { float x1; float x2; })_backgroundImageProxySize;
- (void)_configureBackgroundImageView;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)init;
- (void)loadView;
- (void)setLoadingTitle:(id)arg1;
- (void)setSpinnerDelay:(double)arg1;
- (void)updateWithLoadingTemplate:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end