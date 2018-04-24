//
//  WXCoreApis.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/7/15.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void (^SuccessCallbackBlock)(NSDictionary *dict);
typedef void (^FailedCallbackBlock)(NSError *error);

@class WXProfileModel;

@interface WXCoreApis : NSObject

+ (WXCoreApis *)sharedInstance;


#pragma mark - 访客端接口


/**
 访客登录

 @param appkey appkey
 @param subdomain 二级域名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void) visitorLoginWithAppkey:(NSString *)appkey
                  withSubdomain:(NSString *)subdomain
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;

/**
 访客登录，自定义用户名

 @param username 用户名
 @param appkey appkey
 @param subdomain 二级域名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void) visitorLoginWithUsername:(NSString *)username
                       withAppkey:(NSString *)appkey
                    withSubdomain:(NSString *)subdomain
                    resultSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;

/**
 访客登录，自定义用户名+密码

 @param username 用户名
 @param password 密码
 @param appkey appkey
 @param subdomain 二级域名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void) visitorLoginWithUsername:(NSString *)username
                     withPassword:(NSString *)password
                       withAppkey:(NSString *)appkey
                    withSubdomain:(NSString *)subdomain
                    resultSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;

/**
 注册，自定义用户名

 @param username 用户名
 @param appkey appkey
 @param subdomain 二级域名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void) visitorRegisterWithUsername:(NSString *)username
                          withAppkey:(NSString *)appkey
                       withSubdomain:(NSString *)subdomain
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;

/**
 注册，自定义用户名 + 密码

 @param username 用户名
 @param password 密码
 @param appkey appkey
 @param subdomain 二级域名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void) visitorRegisterWithUsername:(NSString *)username
                        withPassword:(NSString *)password
                          withAppkey:(NSString *)appkey
                       withSubdomain:(NSString *)subdomain
                       resultSuccess:(SuccessCallbackBlock)success
                        resultFailed:(FailedCallbackBlock)failed;

/**
 访客请求会话

 @param workgroupId 工作组id
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorRequestThreadWithWorkgroupId:(NSNumber *)workgroupId
                            resultSuccess:(SuccessCallbackBlock)success
                             resultFailed:(FailedCallbackBlock)failed;


/**
 改为在后台指定客服

 @param agentName <#agentName description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
//+ (void)visitorRequestThreadWithAgent:(NSString *)agentName
//                        resultSuccess:(SuccessCallbackBlock)success
//                         resultFailed:(FailedCallbackBlock)failed;


/**
 离开对话页面：
 注意：此函数不是leaveChannel，仅仅是为了通知客服访客已经离开对话页面，访客并未离开channel
 
 @param threadId 会话id
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorLeaveThread:(NSNumber *)threadId
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;

/**
 关闭会话

 @param threadId 会话id
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorCloseThread:(NSNumber *)threadId
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;


/**
 设置昵称

 @param nickname 昵称
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorSetNickname:(NSString *)nickname
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;

/**
 获取用户信息

 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorGetUserinfoSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;

/**
 自定义设置用户属性

 @param keyname 自定义键
 @param value 自定义值
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorSetUserinfo:(NSString *)keyname
                 withValue:(NSString *)value
             resultSuccess:(SuccessCallbackBlock)success
              resultFailed:(FailedCallbackBlock)failed;

/**
 获取工作组在线状态

 @param workgroupId 工作组id
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorGetWorkgroupStatus:(NSString *)workgroupId
                    resultSuccess:(SuccessCallbackBlock)success
                     resultFailed:(FailedCallbackBlock)failed;

/**
 获取某个客服账号的在线状态

 @param username 客服用户名
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorGetAgentStatus:(NSString *)username
                resultSuccess:(SuccessCallbackBlock)success
                 resultFailed:(FailedCallbackBlock)failed;


/**
 获取用户的所有会话历史

 @param success 成功回调
 @param failed 失败回调
 */
+ (void)visitorGetThreadsSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;




#pragma mark - 客服端接口


/**
 客服首次登录，需要提供相关信息

 @param username <#username description#>
 @param password <#password description#>
 @param appkey <#appkey description#>
 @param subdomain <#subdomain description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void) adminLoginWithUsername:(NSString *)username
                   withPassword:(NSString *)password
                     withAppkey:(NSString *)appkey
                  withSubdomain:(NSString *)subdomain
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;


/**
 非首次客服登录，利用首次登录保存在本地的token请求数据

 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void) adminLoginResultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;

/**
 数据初始化：
 {
     message: "success"
     status_code: 200,
     data: {
         agent: '', // 个人资料
         queues: '', // 排队列表
         rosters: '', // 好友信息
         threads: '' // 当前会话列表
     }
 }
 @param success 成功回调
 @param failed 失败回调
 */
+ (void)adminInitResultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param threadId <#threadId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)adminCloseThread:(NSNumber *)threadId
           resultSuccess:(SuccessCallbackBlock)success
            resultFailed:(FailedCallbackBlock)failed;

/**
 手动接入会话
 
 @param success success description
 @param failed <#failed description#>
 */
+ (void)adminManualAcceptQueueWithQueueId:(NSNumber *)queueId
                            resultSuccess:(SuccessCallbackBlock)success
                             resultFailed:(FailedCallbackBlock)failed;

/**
 自动接入会话
 
 @param queueId <#queueId description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)adminAutoAcceptQueueWithQueueId:(NSNumber *)queueId
                          resultSuccess:(SuccessCallbackBlock)success
                           resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param companyId <#companyId description#>
 @param username <#username description#>
 @param client <#client description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)adminGetUserinfoWithCompanyId:(NSNumber *)companyId
                         withUsername:(NSString *)username
                           withClient:(NSString *)client
                        resultSuccess:(SuccessCallbackBlock)success
                         resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param companyId <#companyId description#>
 @param username <#username description#>
 @param client <#client description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)adminGetTagWithCompanyId:(NSNumber *)companyId
                    withUsername:(NSString *)username
                      withClient:(NSString *)client
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;



#pragma mark - 公共接口



/**
 <#Description#>

 @return <#return value description#>
 */
+ (BOOL)isVisitor;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (WXProfileModel *)getProfile;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSMutableArray *)getThreads;


/**
 <#Description#>

 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)getThreadResultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSMutableArray *)getQueues;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSNumber *)getQueueCount;


/**
 <#Description#>

 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)getQueueResultSuccess:(SuccessCallbackBlock)success
                 resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @return <#return value description#>
 */
+ (NSMutableArray *)getContacts;


/**
 <#Description#>

 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)getContactResultSuccess:(SuccessCallbackBlock)success
                  resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param threadId <#threadId description#>
 @return <#return value description#>
 */
+ (NSMutableArray *)getMessagesWithThread:(NSNumber *)threadId;


/**
 <#Description#>

 @param workgroupId <#workgroupId description#>
 @return <#return value description#>
 */
+ (NSMutableArray *)getMessagesWithWorkgroup:(NSNumber *)workgroupId;

/**
 <#Description#>

 @param threadId <#threadId description#>
 @param offset <#offset description#>
 @param length <#length description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)getMessageWithThread:(NSNumber *)threadId
                  withOffset:(NSInteger)offset
              withStepLength:(NSInteger)length
                resultSuccess:(SuccessCallbackBlock)success
                 resultFailed:(FailedCallbackBlock)failed;


/**
 <#Description#>

 @param workgroupId <#workgroupId description#>
 @param offset <#offset description#>
 @param length <#length description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)getMessageWithWorkgroup:(NSNumber *)workgroupId
                  withOffset:(NSInteger)offset
              withStepLength:(NSInteger)length
               resultSuccess:(SuccessCallbackBlock)success
                resultFailed:(FailedCallbackBlock)failed;



/**
 <#Description#>

 @param threadId <#threadId description#>
 @param content <#content description#>
 @param role <#role description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)sendTextMessageToThread:(NSNumber *)threadId
                    withContent:(NSString *)content
                       withRole:(NSString *)role
                  resultSuccess:(SuccessCallbackBlock)success
                   resultFailed:(FailedCallbackBlock)failed;



/**
 <#Description#>

 @param threadId <#threadId description#>
 @param imageUrl <#imageUrl description#>
 @param role <#role description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)sendImageMessageToThread:(NSNumber *)threadId
                    withImageUrl:(NSString *)imageUrl
                        withRole:(NSString *)role
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;



/**
 <#Description#>

 @param threadId <#threadId description#>
 @param voiceUrl <#voiceUrl description#>
 @param role <#role description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)sendVoiceMessageToThread:(NSNumber *)threadId
                    withVoiceUrl:(NSString *)voiceUrl
                        withRole:(NSString *)role
                   resultSuccess:(SuccessCallbackBlock)success
                    resultFailed:(FailedCallbackBlock)failed;



/**
 <#Description#>

 @param imageData <#imageData description#>
 @param imageName <#imageName description#>
 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)uploadImageData:(NSData *)imageData
          withImageName:(NSString *)imageName
          resultSuccess:(SuccessCallbackBlock)success
           resultFailed:(FailedCallbackBlock)failed;



/**
 <#Description#>

 @param success <#success description#>
 @param failed <#failed description#>
 */
+ (void)logoutResultSuccess:(SuccessCallbackBlock)success
               resultFailed:(FailedCallbackBlock)failed;;


@end






