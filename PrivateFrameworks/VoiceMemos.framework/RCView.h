/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCView : UIView {
    RCWaveformDataSource * _delegate;
    bool  _isCreatingSnapshot;
    CALayer * _waveformLayer;
}

@property (nonatomic) RCWaveformDataSource *delegate;
@property (nonatomic, readonly) bool isCreatingSnapshot;
@property (nonatomic, readonly) CALayer *waveformLayer;

- (void).cxx_destruct;
- (void)_setNeedsVisibleTimeRangeRendering;
- (id)delegate;
- (id)init;
- (bool)isCreatingSnapshot;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshot;
- (id)waveformLayer;

@end