@interface UIView ()
- (UIViewController *)_viewControllerForAncestor;
@end

@interface YTQTMButton : UIButton
@property (strong, nonatomic) UIImageView *imageView;
+ (instancetype)iconButton;
@end

@interface ABCSwitch : UISwitch
@end

@interface YTPivotBarItemView : UIView
@property(readonly, nonatomic) YTQTMButton *navigationButton;
@end

@interface YTTopAlignedView : UIView
@end

@interface YTAsyncCollectionView : UICollectionView
@end

@interface YTRightNavigationButtons : UIView
@property(readonly, nonatomic) YTQTMButton *MDXButton;
@property(readonly, nonatomic) YTQTMButton *searchButton;
@property(readonly, nonatomic) YTQTMButton *notificationButton;
@property (strong, nonatomic) YTQTMButton *youtubeRebornButton;
- (void)setLeadingPadding:(CGFloat)arg1;
- (void)rootOptionsAction;
@end

@interface YTMainAppControlsOverlayView : UIView
@property(readonly, nonatomic) YTQTMButton *playbackRouteButton;
@property(readonly, nonatomic) YTQTMButton *previousButton;
@property(readonly, nonatomic) YTQTMButton *nextButton;
@property(readonly, nonatomic) ABCSwitch *autonavSwitch;
@property(readonly, nonatomic) YTQTMButton *closedCaptionsOrSubtitlesButton;
@property(retain, nonatomic) UIButton *overlayButtonOne;
- (id)playPauseButton;
- (void)didPressPause:(id)button;
- (void)optionsAction;
- (void)artworkDownloader:(NSString *)downloader :(NSString *)videoID;
- (void)audioDownloader:(NSString *)videoID;
- (void)videoDownloaderOptions:(NSString *)videoID;
- (void)videoDownloader:(NSInteger)quality :(NSString *)videoID;
- (void)pictureInPicture:(NSString *)videoID;
- (void)playInApp:(NSString *)videoID;
@end

@interface YTMainAppSkipVideoButton
@property(readonly, nonatomic) UIImageView *imageView;
@end

@protocol YTPlaybackController
@end

@interface YTPlayerViewController : UIViewController <YTPlaybackController>
- (void)scrubToTime:(CGFloat)time;
- (NSString *)currentVideoID;
- (CGFloat)currentVideoMediaTime;
@end

@interface YTLocalPlaybackController : NSObject
- (NSString *)currentVideoID;
@end

@interface YTMainAppVideoPlayerOverlayViewController
- (CGFloat)mediaTime;
- (int)playerViewLayout;
- (NSInteger)playerState;
@end

@interface YTWatchController : NSObject
- (void)showFullScreen;
@end

@interface YTPivotBarViewController : UIViewController
- (void)selectItemWithPivotIdentifier:(id)pivotIndentifier;
@end

@interface YTPageStyleController
+ (NSInteger)pageStyle;
@end

@interface YTSingleVideoTime : NSObject
@end

@interface MLHAMQueuePlayer : NSObject
@property id playerEventCenter;
-(void)setRate:(float)rate;
@end

@interface YTVarispeedSwitchControllerOption : NSObject
- (id)initWithTitle:(id)title rate:(float)rate;
@end

@interface HAMPlayerInternal : NSObject
- (void)setRate:(float)rate;
@end

@interface MLPlayerEventCenter : NSObject
- (void)broadcastRateChange:(float)rate;
@end

extern NSString *videoTime;
extern NSURL *bestURL;