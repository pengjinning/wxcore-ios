//
//  KFDSContactModel.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/24.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXContactModel : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@property(nonatomic, strong) NSNumber *mid;
@property(nonatomic, strong) NSString *myusername;
@property(nonatomic, strong) NSString *username;
@property(nonatomic, strong) NSString *nickname;
@property(nonatomic, strong) NSString *realname;
@property(nonatomic, strong) NSString *avatar;
@property(nonatomic, strong) NSString *email;
@property(nonatomic, strong) NSString *mobile;
@property(nonatomic, strong) NSString *status;
@property(nonatomic, strong) NSString *roles; // NSMutableArray
@property(nonatomic, strong) NSString *workgroups; // NSMutableArray

@end
