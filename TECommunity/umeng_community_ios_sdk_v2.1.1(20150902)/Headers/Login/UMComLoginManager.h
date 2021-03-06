//
//  UMComLoginManager.h
//  UMCommunity
//
//  Created by Gavin Ye on 8/25/14.
//  Copyright (c) 2014 Umeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UMComUserAccount.h"
#import "UMComLoginDelegate.h"

#define  UserLoginSecceed  @"User_Login_Secceed"
#define  UserLogoutSucceed @"UserLogoutSucceed"

#define kUserNameTooLong 10010
#define kUserNameSensitive 10012
#define kUserDelete 10002
#define kUserDidNotLogin 10003
#define kUserNameRepeat 10013

//#define kUserNameWrongCharater 10009   //sdk本地检测是否有非法字符
#define kUserNameWrongName 10016        //服务器返回是否有非法字符
#define kTokenInvalid 50003

@interface UMComLoginManager : NSObject

/**
 设置登录SDK的appkey
 
 */
+ (void)setAppKey:(NSString *)appKey;

/**
 处理SSO跳转回来之后的url
 
 */
+ (BOOL)handleOpenURL:(NSURL *)url;

/**
 得到登录SDK实现对象
 
 */
+ (id<UMComLoginDelegate>)getLoginHandler;


/**
 设置登录SDK实现对象
 
 */
+ (void)setLoginHandler:(id <UMComLoginDelegate>)loginHandler;



/**
 获取当前是否登录
 
 */
+ (BOOL)isLogin;

/**
 提供社区SDK调用，默认使用友盟登录SDK，或者自定义的第三方登录SDK，实现登录功能
 
 */
+ (void)performLogin:(UIViewController *)viewController completion:(LoadDataCompletion)completion;


/**
 第三方登录SDK登录完成后，调用此方法上传登录的账号信息
 
 */
+ (void)finishLoginWithAccount:(UMComUserAccount *)userAccount completion:(LoadDataCompletion)completion;


/**
 第三方登录SDK登录完成并dismiss登录的页面之后，调用此方法进入社区sdk下一步的操作
 
 */
+ (void)finishDismissViewController:(UIViewController *)viewController data:(NSArray *)data error:(NSError *)error;

/**
 用户注销方法
 */
+ (void)userLogout;


@end



