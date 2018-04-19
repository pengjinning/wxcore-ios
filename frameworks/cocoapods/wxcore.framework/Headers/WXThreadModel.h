//
//  KFDSThreadModel.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/24.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXThreadModel : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@property(nonatomic, strong) NSNumber *mid;
@property(nonatomic, strong) NSString *myusername;
@property(nonatomic, strong) NSString *type; // 会话类型
@property(nonatomic, strong) NSNumber *company_id;
@property(nonatomic, strong) NSNumber *workgroup_id;
@property(nonatomic, strong) NSString *workgroup_nickname;
@property(nonatomic, strong) NSString *username;
@property(nonatomic, strong) NSString *nickname;
@property(nonatomic, strong) NSString *avatar;
@property(nonatomic, strong) NSString *client;
@property(nonatomic, strong) NSNumber *wait_timelength;
@property(nonatomic, strong) NSString *content;
@property(nonatomic, strong) NSNumber *unreadcount;
@property(nonatomic, strong) NSString *timestamp;

//@property(nonatomic, strong) NSString *craft; // 草稿, TODO: 暂定保存在content字段中

@end




