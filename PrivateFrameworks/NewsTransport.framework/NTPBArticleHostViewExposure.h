/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleHostViewExposure : PBCodable <NSCopying> {
    int  _activeTimeSpent;
    BOOL  _adSupportedChannel;
    int  _articleDisplayRankInGroup;
    int  _articleHostViewType;
    NSString * _articleId;
    NSData * _articleSessionId;
    int  _articleType;
    int  _articleViewPresentationReason;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _characterCount;
    int  _coverArticleDisplayRank;
    int  _coverArticleFeatureType;
    NSString * _creativeId;
    BOOL  _didBounce;
    BOOL  _didOpenInSafari;
    int  _displayRank;
    int  _feedCellHostType;
    int  _feedPresentationReason;
    NSString * _feedPresentationReasonSearchString;
    NSData * _feedViewExposureId;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int activeTimeSpent : 1; 
        unsigned int articleDisplayRankInGroup : 1; 
        unsigned int articleHostViewType : 1; 
        unsigned int articleType : 1; 
        unsigned int articleViewPresentationReason : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int coverArticleDisplayRank : 1; 
        unsigned int coverArticleFeatureType : 1; 
        unsigned int displayRank : 1; 
        unsigned int feedCellHostType : 1; 
        unsigned int feedPresentationReason : 1; 
        unsigned int groupType : 1; 
        unsigned int maxActiveTimeSpent : 1; 
        unsigned int maxVerticalScrollPositionEnding : 1; 
        unsigned int nextArticleAffordanceType : 1; 
        unsigned int paidSubscriberToFeedType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int previousArticleHostViewTypeIfSwipe : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int didBounce : 1; 
        unsigned int didOpenInSafari : 1; 
        unsigned int isCoverArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isExplorationArticle : 1; 
        unsigned int isFreeArticle : 1; 
        unsigned int isGroupedArticle : 1; 
        unsigned int isNewUserToArticle : 1; 
        unsigned int isPaidSubscriberToFeed : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
        unsigned int isSharedSubscriptionOnlyArticle : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
        unsigned int isTopStoryArticle : 1; 
        unsigned int isUserSubscribedToParentFeed : 1; 
        unsigned int isVideoInFeed : 1; 
        unsigned int subscriptionOnlyArticle : 1; 
        unsigned int viewFromNotificationDirectOpen : 1; 
    }  _has;
    BOOL  _isCoverArticle;
    BOOL  _isDigitalReplicaAd;
    BOOL  _isExplorationArticle;
    BOOL  _isFreeArticle;
    BOOL  _isGroupedArticle;
    BOOL  _isNewUserToArticle;
    BOOL  _isPaidSubscriberToFeed;
    BOOL  _isPaidSubscriberToSourceChannel;
    BOOL  _isSharedSubscriptionOnlyArticle;
    BOOL  _isSubscribedToGroupFeed;
    BOOL  _isTopStoryArticle;
    BOOL  _isUserSubscribedToParentFeed;
    BOOL  _isVideoInFeed;
    NSString * _language;
    int  _maxActiveTimeSpent;
    float  _maxVerticalScrollPositionEnding;
    NSMutableArray * _namedEntities;
    int  _nextArticleAffordanceType;
    NSString * _nextArticleAffordanceTypeFeedId;
    NSString * _notificationId;
    int  _paidSubscriberToFeedType;
    NSString * _parentFeedId;
    int  _parentFeedType;
    long long  _personalizationTreatmentId;
    int  _previousArticleHostViewTypeIfSwipe;
    int  _publisherArticleVersion;
    NSString * _referencedArticleId;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    NSString * _sectionHeadlineId;
    NSString * _sourceBinId;
    NSString * _sourceChannelId;
    NSString * _storyType;
    BOOL  _subscriptionOnlyArticle;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
    NSString * _userActivityType;
    NSString * _viewFrameInScreen;
    BOOL  _viewFromNotificationDirectOpen;
}

@property (nonatomic) int activeTimeSpent;
@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) int articleDisplayRankInGroup;
@property (nonatomic) int articleHostViewType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic) int articleViewPresentationReason;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int characterCount;
@property (nonatomic) int coverArticleDisplayRank;
@property (nonatomic) int coverArticleFeatureType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) BOOL didBounce;
@property (nonatomic) BOOL didOpenInSafari;
@property (nonatomic) int displayRank;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) int feedPresentationReason;
@property (nonatomic, retain) NSString *feedPresentationReasonSearchString;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasActiveTimeSpent;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL hasArticleDisplayRankInGroup;
@property (nonatomic) BOOL hasArticleHostViewType;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasArticleViewPresentationReason;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) BOOL hasCoverArticleDisplayRank;
@property (nonatomic) BOOL hasCoverArticleFeatureType;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic) BOOL hasDidBounce;
@property (nonatomic) BOOL hasDidOpenInSafari;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedPresentationReason;
@property (nonatomic, readonly) BOOL hasFeedPresentationReasonSearchString;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic, readonly) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsExplorationArticle;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNewUserToArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSharedSubscriptionOnlyArticle;
@property (nonatomic) BOOL hasIsSubscribedToGroupFeed;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToParentFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (nonatomic, readonly) BOOL hasLanguage;
@property (nonatomic) BOOL hasMaxActiveTimeSpent;
@property (nonatomic) BOOL hasMaxVerticalScrollPositionEnding;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (nonatomic, readonly) BOOL hasNextArticleAffordanceTypeFeedId;
@property (nonatomic, readonly) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPaidSubscriberToFeedType;
@property (nonatomic, readonly) BOOL hasParentFeedId;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPreviousArticleHostViewTypeIfSwipe;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasReferringSourceApplication;
@property (nonatomic, readonly) BOOL hasReferringUrl;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic, readonly) BOOL hasSourceBinId;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasStoryType;
@property (nonatomic) BOOL hasSubscriptionOnlyArticle;
@property (nonatomic, readonly) BOOL hasSurfacedByChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedBySectionId;
@property (nonatomic, readonly) BOOL hasSurfacedByTopicId;
@property (nonatomic, readonly) BOOL hasUserActivityType;
@property (nonatomic, readonly) BOOL hasViewFrameInScreen;
@property (nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property (nonatomic) BOOL isCoverArticle;
@property (nonatomic) BOOL isDigitalReplicaAd;
@property (nonatomic) BOOL isExplorationArticle;
@property (nonatomic) BOOL isFreeArticle;
@property (nonatomic) BOOL isGroupedArticle;
@property (nonatomic) BOOL isNewUserToArticle;
@property (nonatomic) BOOL isPaidSubscriberToFeed;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isSharedSubscriptionOnlyArticle;
@property (nonatomic) BOOL isSubscribedToGroupFeed;
@property (nonatomic) BOOL isTopStoryArticle;
@property (nonatomic) BOOL isUserSubscribedToParentFeed;
@property (nonatomic) BOOL isVideoInFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int maxActiveTimeSpent;
@property (nonatomic) float maxVerticalScrollPositionEnding;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, retain) NSString *nextArticleAffordanceTypeFeedId;
@property (nonatomic, retain) NSString *notificationId;
@property (nonatomic) int paidSubscriberToFeedType;
@property (nonatomic, retain) NSString *parentFeedId;
@property (nonatomic) int parentFeedType;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int previousArticleHostViewTypeIfSwipe;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceBinId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *storyType;
@property (nonatomic) BOOL subscriptionOnlyArticle;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;
@property (nonatomic, retain) NSString *userActivityType;
@property (nonatomic, retain) NSString *viewFrameInScreen;
@property (nonatomic) BOOL viewFromNotificationDirectOpen;

+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;
- (int)StringAsFeedPresentationReason:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (int)activeTimeSpent;
- (BOOL)adSupportedChannel;
- (void)addNamedEntities:(id)arg1;
- (int)articleDisplayRankInGroup;
- (int)articleHostViewType;
- (id)articleId;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (int)articleViewPresentationReason;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (id)campaignId;
- (id)campaignType;
- (int)characterCount;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)coverArticleDisplayRank;
- (int)coverArticleFeatureType;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)didBounce;
- (BOOL)didOpenInSafari;
- (int)displayRank;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)feedPresentationReason;
- (id)feedPresentationReasonAsString:(int)arg1;
- (id)feedPresentationReasonSearchString;
- (id)feedViewExposureId;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasActiveTimeSpent;
- (BOOL)hasAdSupportedChannel;
- (BOOL)hasArticleDisplayRankInGroup;
- (BOOL)hasArticleHostViewType;
- (BOOL)hasArticleId;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleType;
- (BOOL)hasArticleViewPresentationReason;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCharacterCount;
- (BOOL)hasCoverArticleDisplayRank;
- (BOOL)hasCoverArticleFeatureType;
- (BOOL)hasCreativeId;
- (BOOL)hasDidBounce;
- (BOOL)hasDidOpenInSafari;
- (BOOL)hasDisplayRank;
- (BOOL)hasFeedCellHostType;
- (BOOL)hasFeedPresentationReason;
- (BOOL)hasFeedPresentationReasonSearchString;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasGroupFeedId;
- (BOOL)hasGroupType;
- (BOOL)hasIsCoverArticle;
- (BOOL)hasIsDigitalReplicaAd;
- (BOOL)hasIsExplorationArticle;
- (BOOL)hasIsFreeArticle;
- (BOOL)hasIsGroupedArticle;
- (BOOL)hasIsNewUserToArticle;
- (BOOL)hasIsPaidSubscriberToFeed;
- (BOOL)hasIsPaidSubscriberToSourceChannel;
- (BOOL)hasIsSharedSubscriptionOnlyArticle;
- (BOOL)hasIsSubscribedToGroupFeed;
- (BOOL)hasIsTopStoryArticle;
- (BOOL)hasIsUserSubscribedToParentFeed;
- (BOOL)hasIsVideoInFeed;
- (BOOL)hasLanguage;
- (BOOL)hasMaxActiveTimeSpent;
- (BOOL)hasMaxVerticalScrollPositionEnding;
- (BOOL)hasNextArticleAffordanceType;
- (BOOL)hasNextArticleAffordanceTypeFeedId;
- (BOOL)hasNotificationId;
- (BOOL)hasPaidSubscriberToFeedType;
- (BOOL)hasParentFeedId;
- (BOOL)hasParentFeedType;
- (BOOL)hasPersonalizationTreatmentId;
- (BOOL)hasPreviousArticleHostViewTypeIfSwipe;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasReferringSourceApplication;
- (BOOL)hasReferringUrl;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasSourceBinId;
- (BOOL)hasSourceChannelId;
- (BOOL)hasStoryType;
- (BOOL)hasSubscriptionOnlyArticle;
- (BOOL)hasSurfacedByChannelId;
- (BOOL)hasSurfacedBySectionId;
- (BOOL)hasSurfacedByTopicId;
- (BOOL)hasUserActivityType;
- (BOOL)hasViewFrameInScreen;
- (BOOL)hasViewFromNotificationDirectOpen;
- (unsigned int)hash;
- (BOOL)isCoverArticle;
- (BOOL)isDigitalReplicaAd;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExplorationArticle;
- (BOOL)isFreeArticle;
- (BOOL)isGroupedArticle;
- (BOOL)isNewUserToArticle;
- (BOOL)isPaidSubscriberToFeed;
- (BOOL)isPaidSubscriberToSourceChannel;
- (BOOL)isSharedSubscriptionOnlyArticle;
- (BOOL)isSubscribedToGroupFeed;
- (BOOL)isTopStoryArticle;
- (BOOL)isUserSubscribedToParentFeed;
- (BOOL)isVideoInFeed;
- (id)language;
- (int)maxActiveTimeSpent;
- (float)maxVerticalScrollPositionEnding;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned int)arg1;
- (unsigned int)namedEntitiesCount;
- (int)nextArticleAffordanceType;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (id)nextArticleAffordanceTypeFeedId;
- (id)notificationId;
- (int)paidSubscriberToFeedType;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
- (id)parentFeedId;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (long long)personalizationTreatmentId;
- (int)previousArticleHostViewTypeIfSwipe;
- (int)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)referringSourceApplication;
- (id)referringUrl;
- (id)sectionHeadlineId;
- (void)setActiveTimeSpent:(int)arg1;
- (void)setAdSupportedChannel:(BOOL)arg1;
- (void)setArticleDisplayRankInGroup:(int)arg1;
- (void)setArticleHostViewType:(int)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewPresentationReason:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setCoverArticleDisplayRank:(int)arg1;
- (void)setCoverArticleFeatureType:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setDidBounce:(BOOL)arg1;
- (void)setDidOpenInSafari:(BOOL)arg1;
- (void)setDisplayRank:(int)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setFeedPresentationReason:(int)arg1;
- (void)setFeedPresentationReasonSearchString:(id)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasActiveTimeSpent:(BOOL)arg1;
- (void)setHasAdSupportedChannel:(BOOL)arg1;
- (void)setHasArticleDisplayRankInGroup:(BOOL)arg1;
- (void)setHasArticleHostViewType:(BOOL)arg1;
- (void)setHasArticleType:(BOOL)arg1;
- (void)setHasArticleViewPresentationReason:(BOOL)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasCharacterCount:(BOOL)arg1;
- (void)setHasCoverArticleDisplayRank:(BOOL)arg1;
- (void)setHasCoverArticleFeatureType:(BOOL)arg1;
- (void)setHasDidBounce:(BOOL)arg1;
- (void)setHasDidOpenInSafari:(BOOL)arg1;
- (void)setHasDisplayRank:(BOOL)arg1;
- (void)setHasFeedCellHostType:(BOOL)arg1;
- (void)setHasFeedPresentationReason:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsCoverArticle:(BOOL)arg1;
- (void)setHasIsDigitalReplicaAd:(BOOL)arg1;
- (void)setHasIsExplorationArticle:(BOOL)arg1;
- (void)setHasIsFreeArticle:(BOOL)arg1;
- (void)setHasIsGroupedArticle:(BOOL)arg1;
- (void)setHasIsNewUserToArticle:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setHasIsSharedSubscriptionOnlyArticle:(BOOL)arg1;
- (void)setHasIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)setHasIsTopStoryArticle:(BOOL)arg1;
- (void)setHasIsUserSubscribedToParentFeed:(BOOL)arg1;
- (void)setHasIsVideoInFeed:(BOOL)arg1;
- (void)setHasMaxActiveTimeSpent:(BOOL)arg1;
- (void)setHasMaxVerticalScrollPositionEnding:(BOOL)arg1;
- (void)setHasNextArticleAffordanceType:(BOOL)arg1;
- (void)setHasPaidSubscriberToFeedType:(BOOL)arg1;
- (void)setHasParentFeedType:(BOOL)arg1;
- (void)setHasPersonalizationTreatmentId:(BOOL)arg1;
- (void)setHasPreviousArticleHostViewTypeIfSwipe:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setHasSubscriptionOnlyArticle:(BOOL)arg1;
- (void)setHasViewFromNotificationDirectOpen:(BOOL)arg1;
- (void)setIsCoverArticle:(BOOL)arg1;
- (void)setIsDigitalReplicaAd:(BOOL)arg1;
- (void)setIsExplorationArticle:(BOOL)arg1;
- (void)setIsFreeArticle:(BOOL)arg1;
- (void)setIsGroupedArticle:(BOOL)arg1;
- (void)setIsNewUserToArticle:(BOOL)arg1;
- (void)setIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1;
- (void)setIsSharedSubscriptionOnlyArticle:(BOOL)arg1;
- (void)setIsSubscribedToGroupFeed:(BOOL)arg1;
- (void)setIsTopStoryArticle:(BOOL)arg1;
- (void)setIsUserSubscribedToParentFeed:(BOOL)arg1;
- (void)setIsVideoInFeed:(BOOL)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMaxActiveTimeSpent:(int)arg1;
- (void)setMaxVerticalScrollPositionEnding:(float)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNextArticleAffordanceType:(int)arg1;
- (void)setNextArticleAffordanceTypeFeedId:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setPaidSubscriberToFeedType:(int)arg1;
- (void)setParentFeedId:(id)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPreviousArticleHostViewTypeIfSwipe:(int)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceBinId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setStoryType:(id)arg1;
- (void)setSubscriptionOnlyArticle:(BOOL)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setViewFrameInScreen:(id)arg1;
- (void)setViewFromNotificationDirectOpen:(BOOL)arg1;
- (id)sourceBinId;
- (id)sourceChannelId;
- (id)storyType;
- (BOOL)subscriptionOnlyArticle;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (id)userActivityType;
- (id)viewFrameInScreen;
- (BOOL)viewFromNotificationDirectOpen;
- (void)writeTo:(id)arg1;

@end
