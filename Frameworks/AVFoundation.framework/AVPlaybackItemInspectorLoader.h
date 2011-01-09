/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVPlaybackItemInspectorLoader : AVAssetInspectorLoader 
{
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    struct OpaqueFigFormatReaderLoader { } *_formatReaderLoader;
}

@property(getter=_playbackItem,readonly) OpaqueFigPlaybackItem *playbackItem;


- (void)_removeFigObjectNotifications;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(NSInteger*)arg1;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (id)assetInspector;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)cancelLoading;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;

@end