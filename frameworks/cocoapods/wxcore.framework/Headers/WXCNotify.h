//
//  KFDSCNotify.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/23.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WXQueueModel;
@class WXThreadModel;
@class WXMessageModel;


@interface WXCNotify : NSObject

+ (void)registerOAuthResult:(id)observer;
+ (void)unregisterOAuthResult:(id)observer;


+ (void)notifyOAuthResult:(BOOL)isSuccess;

+ (void)notifySocketStatus:(NSString *)status;

+ (void)notifyInitStatus:(NSString *)status;


//
+ (void)notifyThreadAdd:(WXThreadModel *)threadModel;

+ (void)notifyThreadDelete:(NSNumber *)threadId;

+ (void)notifyThreadClose:(NSNumber *)threadId;


//
+ (void)notifyQueueAdd:(WXQueueModel *)queueModel;

+ (void)notifyQueueDelete:(NSNumber *)queueId;

+ (void)notifyQueueAccept:(NSNumber *)queueId;


//
+ (void)notifyMessageAdd:(WXMessageModel *)messageModel;

+ (void)notifyMessageTextSend:(NSNumber *)threadId withContent:(NSString *)content withLocalId:(NSNumber *)localId;

+ (void)notifyMessageImageSend:(NSNumber *)threadId withImageUrl:(NSString *)imageUrl withLocalId:(NSNumber *)localId;

+ (void)notifyMessageDelete:(NSNumber *)messageId;

+ (void)notifyMessageRetract:(NSNumber *)messageId;

+ (void)notifyMessage:(NSNumber *)localId withStatus:(NSString *)status;


@end












