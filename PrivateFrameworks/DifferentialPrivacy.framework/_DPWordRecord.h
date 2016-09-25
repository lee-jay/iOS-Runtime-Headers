/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding> {
    NSString * _word;
    NSNumber * _wordPosition;
}

@property (nonatomic, readonly, copy) NSString *word;
@property (nonatomic, readonly) NSNumber *wordPosition;

+ (id)sequenceAndFragmentsFrom:(id)arg1 fragmentLimit:(unsigned int)arg2 fragmentWidth:(unsigned int)arg3 blacklist:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)word:(id)arg1 atPosition:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWord:(id)arg1 atPosition:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToWordRecord:(id)arg1;
- (id)word;
- (id)wordPosition;

@end