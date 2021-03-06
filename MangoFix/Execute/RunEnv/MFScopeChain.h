//
//  ANEScopeChain.h
//  MangoFix
//
//  Created by jerry.yong on 2018/2/28.
//  Copyright © 2018年 yongpengliang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MFValue;

NS_ASSUME_NONNULL_BEGIN
@interface MFScopeChain: NSObject
@property (strong, nonatomic) id instance;
@property (strong, nonatomic) MFScopeChain *next;

+ (instancetype)scopeChainWithNext:(MFScopeChain *)next;
- (MFValue *)getValueWithIdentifierInChain:(NSString *)identifier;
- (MFValue *)getValueWithIdentifier:(NSString *)identifer;
- (void)setValue:(MFValue *)value withIndentifier:(NSString *)identier;
- (void)assignWithIdentifer:(NSString *)identifier value:(MFValue *)value;
- (void)setMangoBlockVarNil;
@end
NS_ASSUME_NONNULL_END




