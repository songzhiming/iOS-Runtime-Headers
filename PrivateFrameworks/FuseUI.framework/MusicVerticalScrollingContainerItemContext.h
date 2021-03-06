/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerItemContext : NSObject {
    UICollectionViewCell * _containerCell;
    UICollectionView * _containerCollectionView;
    UIScrollView * _contentScrollView;
    BOOL  _contentScrollViewCanPanVertically;
    BOOL  _contentScrollViewScrollsToTop;
    <MusicVerticalScrollingContainerItemContextDelegate> * _delegate;
    BOOL  _hasSetupContentScrollView;
    BOOL  _isChangingContentScrollViewContentOffset;
    MusicVerticalScrollingContainerItem * _item;
    float  _lastSeenContentHeight;
    unsigned int  _originalAutoresizingMask;
    NSMutableArray * _overriddenContentHeightStack;
    BOOL  _readyForDisplay;
    BOOL  _shouldIgnoreContentScrollViewChanges;
}

@property (nonatomic) <MusicVerticalScrollingContainerItemContextDelegate> *delegate;
@property (nonatomic, readonly) MusicVerticalScrollingContainerItem *item;
@property (nonatomic, readonly) UIView *itemView;
@property (getter=isOverridingContentHeight, nonatomic, readonly) BOOL overridingContentHeight;

- (void).cxx_destruct;
- (id)_contentScrollView;
- (void)_handleContentScrollViewDidChangeNotification:(id)arg1;
- (void)_notifyDelegateOfUpdatedContentHeightInContentScrollView;
- (void)_tearDownContentScrollView;
- (void)_updateLayoutOfItemView:(id)arg1 inCell:(id)arg2 withContainerCollectionView:(id)arg3;
- (id)_verticallyAdjustableScrollViewAllowingForcedLayoutUpToContentScrollView:(BOOL)arg1;
- (id)_viewAllowingLoadingFromViewController:(BOOL)arg1;
- (void)beginOverridingContentHeightToValue:(float)arg1;
- (float)contentHeightForContentWidth:(float)arg1 withTemporaryParentView:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endOverridingContentHeight;
- (id)initWithItem:(id)arg1;
- (BOOL)isOverridingContentHeight;
- (id)item;
- (id)itemView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareViewForDisplayInCell:(id)arg1 withContainerCollectionView:(id)arg2;
- (void)prepareViewForTearDown;
- (void)setDelegate:(id)arg1;
- (void)updateLayoutOfItemViewInCell:(id)arg1 withContainerCollectionView:(id)arg2;

@end
