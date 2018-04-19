//
//  KFDSCSettings.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/23.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

#define KFDS_USERNAME               @"kfds_username"
#define KFDS_NICKNAME               @"kfds_nickname"
#define KFDS_AVATAR                 @"kfds_avatar"
#define KFDS_ROLE                   @"kfds_role"
#define KFDS_APPKEY                 @"kfds_appkey"
#define KFDS_SUBDOMAIN              @"kfds_subdomain"

#define KFDS_PASSPORT_ACCESS_TOKEN  @"kfds_access_token"
#define KFDS_PASSPORT_EXPIRES_IN    @"kfds_expires_in"
#define KFDS_PASSPORT_REFRESH_TOKEN @"kfds_refresh_token"
#define KFDS_PASSPORT_TOKEN_TYPE    @"kfds_token_type"


@interface KFDSCSettings : NSObject

+ (BOOL)isVisitor;

+ (NSString *)getClient;

+ (NSString *)getUsername;

+ (void)setUsername:(NSString *)username;

+ (NSString *)getNickname;

+ (void)setNickname:(NSString *)nickname;

+ (NSString *)getAvatar;

+ (void)setAvatar:(NSString *)avatar;

+ (NSString *)getRole;

+ (void)setRole:(NSString *)role;

+ (NSString *)getAppkey;

+ (void)setAppkey:(NSString *)appkey;

+ (NSString *)getSubdomain;

+ (void)setSubdomain:(NSString *)subdomain;

+ (NSString *)getPassportAccessToken;

+ (void)setPassportAccessToken:(NSString *)accessToken;

+ (NSString *)getPassportExpiresIn;

+ (void)setPassportExpiresIn:(NSString *)expiresIn;

+ (NSString *)getPassportRefreshToken;

+ (void)setPassportRefreshToken:(NSString *)refreshToken;

+ (NSString *)getPassportTokenType;

+ (void)setPassportTokenType:(NSString *)tokenType;

@end





