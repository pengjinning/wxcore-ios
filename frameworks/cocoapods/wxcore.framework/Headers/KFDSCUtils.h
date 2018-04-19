//
//  KFDSCUtils.h
//  wxcore
//
//  Created by 宁金鹏 on 2017/11/23.
//  Copyright © 2017年 吾协云. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KFDSCUtils : NSObject

+(NSString *)getCurrentDate;
//
+ (NSDate *)stringToDate:(NSString *)string;

+ (NSString *) getOptimizedTimestamp:(NSString *)date;

+ (NSString *)getCurrentTimeString;

@end
