//
//  KFDSSocketApis.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/18.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^SuccessCallbackBlock)(NSDictionary *dict);
typedef void (^FailedCallbackBlock)(NSError *error);


@interface WXSocketApis : NSObject

+ (WXSocketApis *)sharedInstance;


#pragma mark - 访客端接口


- (void)visitorJoinChannel:(NSString *)channel
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;


/**
 离开对话页面：
 注意：此函数不是leaveChannel，仅仅是为了通知客服访客已经离开对话页面，访客并未离开channel
 
 @param threadId <#threadId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)visitorLeaveChatWithThreadId:(NSString *)threadId
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;



#pragma mark - 客服端接口


- (void)adminJoinChannel:(NSString *)channel
           resultSuccess:(SuccessCallbackBlock)success
            resultFailed:(FailedCallbackBlock)failed;



#pragma mark - 公共接口


- (void)connectToSocketServerResultSuccess:(SuccessCallbackBlock)success
                              resultFailed:(FailedCallbackBlock)failed;


- (void)initConnectorServerResultSuccess:(SuccessCallbackBlock)success
                            resultFailed:(FailedCallbackBlock)failed;


- (void)joinChannel:(NSString *)channel
           withRole:(NSString *)role
       withUsername:(NSString *)username
       withNickname:(NSString *)nickname
      withSubdomain:(NSString *)subdomain
      resultSuccess:(SuccessCallbackBlock)success
       resultFailed:(FailedCallbackBlock)failed;


- (void)sendTextMessageToThread:(NSNumber *)threadId
                    withContent:(NSString *)content
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;


- (void)sendImageMessageToThread:(NSNumber *)threadId
                    withImageUrl:(NSString *)imageUrl
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


- (void)sendVoiceMessageToThread:(NSNumber *)threadId
                    withVoiceUrl:(NSString *)voiceUrl
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


- (void)disconnectResultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;;


@end








