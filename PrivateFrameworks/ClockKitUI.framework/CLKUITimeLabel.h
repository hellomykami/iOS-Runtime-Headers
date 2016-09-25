/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITimeLabel : UIView <CLKTimeFormatterDelegate, CLKTimeFormatterObserver, CLKUILabel> {
    id /* block */  _didResizeHandler;
    float  _fadeEnd;
    float  _fadeStart;
    <_CLKUITimeLabelManager> * _fromLabelManager;
    CLKUITimeLabelStyle * _fromStyle;
    <_CLKUITimeLabelManager> * _labelManager;
    float  _maxWidth;
    unsigned int  _options;
    BOOL  _paused;
    BOOL  _showSeconds;
    BOOL  _showsDesignator;
    CLKUITimeLabelStyle * _style;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _styleTransitionEndFrame;
    float  _styleTransitionFraction;
    BOOL  _styleTransitioning;
    CLKTimeFormatter * _timeFormatter;
    NSString * _timeText;
}

@property (nonatomic, readonly) float _lastLineBaseline;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didResizeHandler;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } intrinsicSize;
@property (nonatomic) float maxWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } opticalInsets;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic) BOOL paused;
@property (nonatomic) BOOL showSeconds;
@property (nonatomic) BOOL showsDesignator;
@property (nonatomic, copy) CLKUITimeLabelStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) CLKTimeFormatter *timeFormatter;

+ (id)labelWithOptions:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_cancelAnimation;
- (void)_enumerateUnderlyingLabelsWithBlock:(id /* block */)arg1;
- (void)_fadeTransitionLabels;
- (float)_lastLineBaseline;
- (id)_newLabelManager;
- (id)_newUnderlyingLabel:(BOOL)arg1;
- (void)_resizeIfNecessary;
- (void)_scaleTransitionLabels;
- (id)attributedText;
- (void)cleanupAfterStyleTransition;
- (void)didMoveToWindow;
- (id /* block */)didResizeHandler;
- (id)font;
- (id)identifyingInfoForTimeFormatter:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTimeLabelOptions:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicSize;
- (void)layoutSubviews;
- (float)maxWidth;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })opticalInsets;
- (unsigned int)options;
- (BOOL)paused;
- (void)prepareToTransitionToStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBlinkingPaused:(BOOL)arg1;
- (void)setDidResizeHandler:(id /* block */)arg1;
- (void)setFont:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setPaused:(BOOL)arg1;
- (void)setShowSeconds:(BOOL)arg1;
- (void)setShowsDesignator:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleTransitionFraction:(float)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3;
- (void)setTimeFont:(id)arg1 designatorFont:(id)arg2;
- (void)setTimeOffset:(double)arg1;
- (BOOL)showSeconds;
- (BOOL)showsDesignator;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (id)style;
- (struct CGSize { float x1; float x2; })styleTransitionCurrentSize;
- (struct CGSize { float x1; float x2; })styleTransitionEndSize;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)timeFormatter;
- (void)timeFormatterTextDidChange:(id)arg1;

@end