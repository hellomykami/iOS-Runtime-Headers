/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPStyleRenameCommand : TSWPStyleBaseCommand {
    NSString *_oldName;
    NSString *_updatedName;
}

@property(copy) NSString * oldName;
@property(copy) NSString * updatedName;

- (id)actionString;
- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 style:(id)arg2 updatedName:(id)arg3;
- (void)loadFromMessage:(const struct StyleRenameCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)oldName;
- (void)p_CommitAndRedo;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct StyleRenameCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)setOldName:(id)arg1;
- (void)setUpdatedName:(id)arg1;
- (void)undo;
- (id)updatedName;

@end