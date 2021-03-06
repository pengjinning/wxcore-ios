//
//  KFDSHttpApis.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/18.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^SuccessCallbackBlock)(NSDictionary *dict);
typedef void (^FailedCallbackBlock)(NSError *error);


@interface WXHttpApis : NSObject

+ (WXHttpApis *)sharedInstance;


#pragma mark - 访客端接口

/**
 从服务器请求用户名

 @param appkey <#appkey description#>
 @param subdomain <#subdomain description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)visitorGenerateUsernameWithAppkey:(NSString *)appkey
                            withSubdomain:(NSString *)subdomain
                            resultSuccess:(SuccessCallbackBlock)success
                             resultFailed:(FailedCallbackBlock)failed;



- (void)visitorRegisterWithUsername:(NSString *)username
                        withPassword:(NSString *)password
                          withAppkey:(NSString *)appkey
                       withSubdomain:(NSString *)subdomain
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;

/**
 工作组会话

 @param workgroupId <#workgroupId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)visitorRequestThreadWithWorkgroupId:(NSNumber *)workgroupId
                            resultSuccess:(SuccessCallbackBlock)success
                             resultFailed:(FailedCallbackBlock)failed;


/**
 一对一会话

 @param agentName <#agentName description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)visitorRequestThreadWithAgent:(NSString *)agentName
                              resultSuccess:(SuccessCallbackBlock)success
                               resultFailed:(FailedCallbackBlock)failed;


- (void)visitorLeaveThread:(NSNumber *)threadId
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;

/**
 关闭会话

 @param threadId <#threadId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)visitorCloseThread:(NSNumber *)threadId
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;



- (void)visitorSendTextMessageToThread:(NSNumber *)threadId
                         withContent:(NSString *)content
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;


- (void)visitorSendImageMessageToThread:(NSNumber *)threadId
                         withImageUrl:(NSString *)imageUrl
                        resultSuccess:(SuccessCallbackBlock)success
                         resultFailed:(FailedCallbackBlock)failed;


- (void)visitorSendVoiceMessageToThread:(NSNumber *)threadId
                         withVoiceUrl:(NSString *)voiceUrl
                        resultSuccess:(SuccessCallbackBlock)success
                         resultFailed:(FailedCallbackBlock)failed;


- (void)visitorSetNickname:(NSString *)nickname
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;


- (void)visitorGetUserinfoSuccess:(SuccessCallbackBlock)success
                           resultFailed:(FailedCallbackBlock)failed;


- (void)visitorSetUserinfo:(NSString *)keyname
                 withValue:(NSString *)value
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;


- (void)visitorGetWorkgroupStatus:(NSString *)workgroupId
                    resultSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;


- (void)visitorGetAgentStatus:(NSString *)agentUsername
                resultSuccess:(SuccessCallbackBlock)success
                 resultFailed:(FailedCallbackBlock)failed;


- (void)visitorGetThreadsSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;





#pragma mark - 客服端接口


- (void)authWitMobile:(NSString *)mobile
             withCode:(NSString *)code
        resultSuccess:(SuccessCallbackBlock)success
         resultFailed:(FailedCallbackBlock)failed;


- (void)adminRegisterWithEmail:(NSString *)email
                  withPassword:(NSString *)password
                    withMobile:(NSString *)mobile
                 withSubdomain:(NSString *)subdomain
                 resultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;


- (void)adminRegisterWithMobile:(NSString *)mobile
                     withAppkey:(NSString *)appkey
                  withSubdomain:(NSString *)subdomain
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;


/**
 初始化从服务器获取：
 1. 客服个人信息
 2. 队列信息
 3. 会话信息
 4. 同事好友信息

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminInitResultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;

/**
 获取当前进行中会话

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminGetThreadResultSuccess:(SuccessCallbackBlock)success
                       resultFailed:(FailedCallbackBlock)failed;

/**
 <#Description#>

 @param threadId <#threadId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminCloseThread:(NSNumber *)threadId
           resultSuccess:(SuccessCallbackBlock)success
            resultFailed:(FailedCallbackBlock)failed;

/**
 获取当前队列

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminGetQueueResultSuccess:(SuccessCallbackBlock)success
                      resultFailed:(FailedCallbackBlock)failed;


/**
 手动接入会话

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminManualAcceptQueueWithQueueId:(NSNumber *)queueId
                 resultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;

/**
 自动接入会话

 @param queueId <#queueId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminAutoAcceptQueueWithQueueId:(NSNumber *)queueId
                 resultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;


/**
 获取好友列表

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminGetContactResultSuccess:(SuccessCallbackBlock)success
                       resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param username <#username description#>
 @param client <#client description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminGetUserinfoWithCompanyId:(NSNumber *)companyId
                         withUsername:(NSString *)username
                          withClient:(NSString *)client
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;


/**
 获取标签

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminGetTagWithCompanyId:(NSNumber *)companyId
                    withUsername:(NSString *)username
                      withClient:(NSString *)client
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


/**
 添加标签

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminAddTagResultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


/**
 删除标签

 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)adminDeleteTagResultSuccess:(SuccessCallbackBlock)success
                       resultFailed:(FailedCallbackBlock)failed;



- (void)adminSendTextMessageToThread:(NSNumber *)threadId
                    withContent:(NSString *)content
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;


- (void)adminSendImageMessageToThread:(NSNumber *)threadId
                    withImageUrl:(NSString *)imageUrl
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


- (void)adminSendVoiceMessageToThread:(NSNumber *)threadId
                    withVoiceUrl:(NSString *)voiceUrl
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;


- (void)adminLogoutResultSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;



#pragma mark - 公共接口


/**
 检测网络是否可用

 @return <#return value description#>
 */
- (BOOL)isNetworkReachable;


/**
 通过passport授权

 @param role <#role description#>
 @param username <#username description#>
 @param password <#password description#>
 @param appkey <#appkey description#>
 @param subdomain <#subdomain description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)authWithRole:(NSString *)role
        withUsername:(NSString *)username
        withPassword:(NSString *)password
          withAppkey:(NSString *)appkey
       withSubdomain:(NSString *)subdomain
       resultSuccess:(SuccessCallbackBlock)success
        resultFailed:(FailedCallbackBlock)failed;

//
- (void)getProfileResultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;



/**
  获取某个thread内的聊天记录

 @param threadId <#threadId description#>
 @param offset <#offset description#>
 @param step <#step description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)getMessageWithThread:(NSNumber *)threadId
                   withOffset:(NSInteger)offset
                     withStep:(NSInteger)step
                resultSuccess:(SuccessCallbackBlock)success
                 resultFailed:(FailedCallbackBlock)failed;


/**
 获取某个工作组的聊天记录

 @param workgroupId <#workgroupId description#>
 @param offset <#offset description#>
 @param step <#step description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
- (void)getMessageWithWorkgroup:(NSNumber *)workgroupId
                  withOffset:(NSInteger)offset
                    withStep:(NSInteger)step
               resultSuccess:(SuccessCallbackBlock)success
                resultFailed:(FailedCallbackBlock)failed;


- (void)uploadImageData:(NSData *)imageData
          withImageName:(NSString *)imageName
          resultSuccess:(SuccessCallbackBlock)success
           resultFailed:(FailedCallbackBlock)failed;


- (void)uploadVoice:(NSString *)voicePath
      resultSuccess:(SuccessCallbackBlock)success
       resultFailed:(FailedCallbackBlock)failed;



@end







