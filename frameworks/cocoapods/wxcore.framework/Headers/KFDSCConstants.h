//
//  KFDSCConstants.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/22.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef KFDSCConstants_h
#define KFDSCConstants_h
//
//typedef void (^SuccessCallbackBlock)(NSDictionary *dict)
//typedef void (^FailedCallbackBlock)(NSError *error)

// 当本地测试的时候设置为true，线上提交的时候设置为false
#define KFDS_IS_DEBUG                     true


// 会话类型
#define KFDS_THREAD_TYPE_WORKGROUP        @"workgroup"  // 工作组会话
#define KFDS_THREAD_TYPE_PRIVATE          @"private"    // 一对一会话
#define KFDS_THREAD_TYPE_GROUP            @"group"      // 群组
#define KFDS_THREAD_TYPE_DIS_GROUP        @"discussion_group" // 讨论组, 暂未启用


// 角色类型
#define KFDS_ROLE_VISITOR                 @"visitor" // 访客
#define KFDS_ROLE_ADMIN                   @"admin"   // 管理员
#define KFDS_ROLE_COMPANY                 @"company"  // 企业
#define KFDS_ROLE_PROXY                   @"proxy"  // 代理
#define KFDS_ROLE_AGENT                   @"agent" // 客服人员
#define KFDS_ROLE_AGENT_ADMIN             @"agent_admin" // 客服组长
#define KFDS_ROLE_CHECKER                 @"checker" // 质检人员
#define KFDS_ROLE_CHECKER_ADMIN           @"checker_admin" // 质检组长
#define KFDS_ROLE_WECHAT                  @"wechat" // 微信
#define KFDS_ROLE_MINI_PROGRAM            @"mini_program" // 微信小程序
#define KFDS_ROLE_WORKGROUP               @"workgroup" // 工作组
#define KFDS_ROLE_ROBOT                   @"robot" // 机器人

// 访客端
#define KFDS_SOURCE_WEB                     @"web"   // 访客pc网站
#define KFDS_SOURCE_WAP                     @"wap"    // 访客手机网站
#define KFDS_SOURCE_ANDROID                 @"android"  // 访客安卓
#define KFDS_SOURCE_IOS                     @"ios"         // 访客苹果
#define KFDS_SOURCE_WECHAT_MINI             @"wechat_mini"  // 访客小程序
#define KFDS_SOURCE_WECHAT_MP               @"wechat_mp"    // 访客微信客服接口
#define KFDS_SOURCE_WECHAT_URL              @"wechat_url"   // 访客微信自定义菜单

// 客服端
#define KFDS_SOURCE_WINDOW_ADMIN            @"window_admin"     // Windwow客服端
#define KFDS_SOURCE_MAC_ADMIN               @"mac_admin"           // MAC客服端
#define KFDS_SOURCE_ANDROID_ADMIN           @"android_admin"   // 安卓手机客服端
#define KFDS_SOURCE_IOS_ADMIN               @"ios_admin"           // 苹果手机客服端
#define KFDS_SOURCE_WEB_ADMIN               @"web_admin"           // web客服端
#define KFDS_SOURCE_WECHAT_MINI_ADMIN       @"wechat_mini_admin"   // 小程序客服端
//
#define KFDS_SOURCE_POMELO_ADMIN            @"pomelo_admin"     // Pomelo服务器
// 系统端
#define KFDS_SOURCE_SYSTEM                  @"system"

#define KFDS_ERROR_WITH_DOMAIN              @"error.ios.wuxieyun.com"

#define KFDS_NOTIFICATION_OAUTH_RESULT                  @"kfds_notification_oauth_result"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS               @"kfds_notification_socketio_status"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS_CONNECTING    @"kfds_notification_socketio_status_connecting"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS_CONNECTED     @"kfds_notification_socketio_status_connected"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS_ERROR         @"kfds_notification_socketio_status_error"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS_DISCONNECT    @"kfds_notification_socketio_status_disconnect"
#define KFDS_NOTIFICATION_SOCKETIO_STATUS_TIMEOUT       @"kfds_notification_socketio_status_timeout"

#define KFDS_NOTIFICATION_INIT_STATUS               @"kfds_notification_init_status"
#define KFDS_NOTIFICATION_INIT_STATUS_LOADING       @"kfds_notification_init_status_loading"
#define KFDS_NOTIFICATION_INIT_STATUS_LOADED        @"kfds_notification_init_status_loaded"
#define KFDS_NOTIFICATION_INIT_STATUS_ERROR         @"kfds_notification_init_status_error"

// 通知UI thread状态
#define KFDS_NOTIFICATION_THREAD                @"kfds_notification_thread"
#define KFDS_NOTIFICATION_THREAD_ADD            @"kfds_notification_thread_add"
#define KFDS_NOTIFICATION_THREAD_UPDATE         @"kfds_notification_thread_update"
#define KFDS_NOTIFICATION_THREAD_DELETE         @"kfds_notification_thread_delete"
#define KFDS_NOTIFICATION_THREAD_CLOSE          @"kfds_notification_thread_close"

// 通知UI queue状态
#define KFDS_NOTIFICATION_QUEUE                 @"kfds_notification_queue"
#define KFDS_NOTIFICATION_QUEUE_ADD             @"kfds_notification_queue_add"
#define KFDS_NOTIFICATION_QUEUE_UPDATE          @"kfds_notification_queue_update"
#define KFDS_NOTIFICATION_QUEUE_DELETE          @"kfds_notification_queue_delete"
#define KFDS_NOTIFICATION_QUEUE_ACCEPT          @"kfds_notification_queue_accept"

// 通知UI message状态
#define KFDS_NOTIFICATION_MESSAGE_ADD           @"kfds_notification_message_add"
#define KFDS_NOTIFICATION_MESSAGE_DELETE        @"kfds_notification_message_delete"
#define KFDS_NOTIFICATION_MESSAGE_RETRACT       @"kfds_notification_message_retract"
#define KFDS_NOTIFICATION_MESSAGE_STATUS        @"kfds_notification_message_status"

// 消息发送状态
// 发送中
#define KFDS_MESSAGE_STATUS_SENDING         @"sending"
// 送达
#define KFDS_MESSAGE_STATUS_RECEIVED        @"received"
// 已读
#define KFDS_MESSAGE_STATUS_READ            @"read"
// 发送到服务器，成功存储数据库中
#define KFDS_MESSAGE_STATUS_STORED          @"stored"
// 发送错误
#define KFDS_MESSAGE_STATUS_ERROR           @"error"

// 消息类型
#define KFDS_MESSAGE_TYPE_TEXT              @"text"
#define KFDS_MESSAGE_TYPE_IMAGE             @"image"
#define KFDS_MESSAGE_TYPE_VOICE             @"voice"
#define KFDS_MESSAGE_TYPE_VIDEO             @"video"
#define KFDS_MESSAGE_TYPE_SHORTVIDEO        @"shortvideo"
#define KFDS_MESSAGE_TYPE_LOCATION          @"location"
#define KFDS_MESSAGE_TYPE_LINK              @"link"
#define KFDS_MESSAGE_TYPE_EVENT             @"event"
#define KFDS_MESSAGE_TYPE_NOTIFICATION      @"notification"
#define KFDS_MESSAGE_TYPE_QUEUE_NOTIFICATION @"queue_notification" // 排队通知类型
#define KFDS_MESSAGE_TYPE_NOTIFICATION_REQUEST @"notification_request" // 请求会话
#define KFDS_MESSAGE_TYPE_NOTIFICATION_ACCEPT_AUTO @"notification_accept_auto" // 自动接入会话
#define KFDS_MESSAGE_TYPE_NOTIFICATION_ACCEPT_MANUAL @"notification_accept_manual" // 手动接入
#define KFDS_MESSAGE_TYPE_NOTIFICATION_CONNECT @"notification_connect";    // 上线
#define KFDS_MESSAGE_TYPE_NOTIFICATION_DISCONNECT @"notification_disconnect";    // 离线
#define KFDS_MESSAGE_TYPE_NOTIFICATION_LEAVE @"notification_leave" // 离开会话页面
#define KFDS_MESSAGE_TYPE_NOTIFICATION_CLOSE @"notification_close" // 关闭会话
#define KFDS_MESSAGE_TYPE_NOTIFICATION_INVITE @"notification_invite" // 邀请会话
#define KFDS_MESSAGE_TYPE_NOTIFICATION_INVITE_ACCEPT @"notification_invite_accept" // 接受邀请
#define KFDS_MESSAGE_TYPE_NOTIFICATION_INVITE_REJECT @"notification_invite_reject" // 拒绝邀请
#define KFDS_MESSAGE_TYPE_NOTIFICATION_TRANSFER @"notification_transfer" // 转接会话
#define KFDS_MESSAGE_TYPE_NOTIFICATION_TRANSFER_ACCEPT @"notification_transfer_accept" // 接受转接
#define KFDS_MESSAGE_TYPE_NOTIFICATION_TRANSFER_REJECT @"notification_transfer_reject" // 拒绝转接



#endif /* KFDSCConstants_h */






