//
//  KFDSQueueModel.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/24.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXQueueModel : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@property(nonatomic, strong) NSNumber *mid;
@property(nonatomic, strong) NSString *myusername;
@property(nonatomic, strong) NSNumber *company_id;
@property(nonatomic, strong) NSNumber *workgroup_id;
@property(nonatomic, strong) NSString *workgroup_nickname;
@property(nonatomic, strong) NSString *username;
@property(nonatomic, strong) NSString *nickname;
@property(nonatomic, strong) NSString *avatar;
@property(nonatomic, strong) NSString *client;
@property(nonatomic, strong) NSNumber *wait_timelength;
@property(nonatomic, strong) NSString *joined_at;
@property(nonatomic, strong) NSString *tags;


@end
