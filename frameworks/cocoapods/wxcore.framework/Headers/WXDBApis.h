//
//  KFDSDBApis.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/18.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WXThreadModel;
@class WXQueueModel;
@class WXMessageModel;
@class WXProfileModel;
@class WXContactModel;

typedef void (^SuccessCallbackBlock)(NSDictionary *dict);
typedef void (^FailedCallbackBlock)(NSError *error);

@interface WXDBApis : NSObject

+ (WXDBApis *)sharedInstance;


#pragma mark - 访客端接口


#pragma mark - 客服端接口

- (BOOL) insertThread:(WXThreadModel *)thread;
- (BOOL) deleteThread:(NSNumber *)threadId;
- (NSMutableArray *) getThreads;
- (BOOL) clearThreads;

- (BOOL) insertQueue:(WXQueueModel *)queue;
- (BOOL) deleteQueue:(NSNumber *)queueId;
- (NSMutableArray *) getQueues;
- (NSNumber *) getQueueCount;
- (BOOL) clearQueues;

- (BOOL) insertMessage:(WXMessageModel *)message;
- (NSNumber *) insertSendTextMessageToThread:(NSNumber *)threadId withContent:(NSString *)content;
- (NSNumber *) insertSendImageMessageToThread:(NSNumber *)threadId withImageUrl:(NSString *)imageUrl;
- (NSNumber *) insertSendVoiceMessageToThread:(NSNumber *)threadId withVoiceUrl:(NSString *)voiceUrl;
- (BOOL) updateMessage:(NSNumber *)localId withStatus:(NSString *)status;
- (BOOL) updateMessage:(NSNumber *)localId withMessageId:(NSNumber *)messageId;
- (BOOL) deleteMessage:(NSNumber *)messageId;

// TODO: 分页查询
- (NSMutableArray *)getMessagesWithThread:(NSNumber *)threadId;
- (NSMutableArray *)getMessagesWithWorkgroup:(NSNumber *)workgroupId;

- (BOOL) insertProfile:(WXProfileModel *)profile;
- (WXProfileModel *) getProfile;

- (BOOL) insertContact:(WXContactModel *)contact;
- (NSMutableArray *) getContacts;
- (BOOL) clearContacts;

#pragma mark - 公共接口



@end
