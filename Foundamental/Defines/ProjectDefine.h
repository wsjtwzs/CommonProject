//
//  ProjectDefine.h
//  CommonProject
//
//  Created by 魔时网 on 15/3/12.
//  Copyright (c) 2015年 wsjtwzs. All rights reserved.
//

#ifndef CommonProject_ProjectDefine_h
#define CommonProject_ProjectDefine_h
#import "iConsole.h"

// 常量定义
#define kScreenWidth        [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight       [[UIScreen mainScreen] bounds].size.height
#define kNavigationBarHeight       (IS_IOS7_LATER? 64 : 44)
#define kStatusBarHeight     (IS_IOS7_LATER? 0 : 20)
#define kTabbarHeight    49

//系统版本
#define RunTimeSysVersion   ([[UIDevice currentDevice].systemVersion floatValue])
#define IS_IOS7_LATER            (RunTimeSysVersion >= 7.0f)

//宏定义颜色
#define kColorClear     [UIColor clearColor]
#define kColorWhite     [UIColor whiteColor]
#define kColorBlack     [UIColor blackColor]
#define kColorDrakGray  [UIColor darkGrayColor]
#define kColorLightGray [UIColor darkGrayColor]
#define kColorGray      [UIColor grayColor]
#define kColorRed       [UIColor redColor]
#define kColorGreen     [UIColor greenColor]
#define kColorBlue      [UIColor blueColor]
#define kColorCyan      [UIColor cyanColor]
#define kColorYellow    [UIColor yellowColor]
#define kColorMagenta   [UIColor magentaColor]
#define kColorOrange    [UIColor orangeColor]
#define kColorPurple    [UIColor purpleColor]
#define kColorBrown     [UIColor brownColor]
#define kColorClear     [UIColor clearColor]
#define kColor33        [UIColor colorWithRed:0x33/255.0 green:0x33/255.0 blue:0x33/255.0 alpha:1.0]
#define kColor66        [UIColor colorWithRed:0x66/255.0 green:0x66/255.0 blue:0x66/255.0 alpha:1.0]
#define kColor99        [UIColor colorWithRed:0x99/255.0 green:0x99/255.0 blue:0x99/255.0 alpha:1.0]
#define kColorFA        [UIColor colorWithRed:0xFA/255.0 green:0xFA/255.0 blue:0xFA/255.0 alpha:1.0]
#define kColorFF        [UIColor colorWithRed:0xFF/255.0 green:0xFF/255.0 blue:0xFF/255.0 alpha:1.0]


//类
#define NSArrayClass            ([NSArray class])
#define NSDictionaryClass       ([NSDictionary class])
#define NSStringClass           ([NSString class])
#define kUserDefaults           ([NSUserDefaults standardUserDefaults])
#define kObjOfUserdeault(key)   ([NSUserDefaults standardUserDefaults] objectForKey:object])
#define kNotiCenter             ([NSNotificationCenter defaultCenter])
#define kNoti_post(noti)        ([kNotiCenter postNotificationName:noti object:nil])


//Log
#define _DEBUG

#ifdef	_DEBUG
/**
 *  不同方式的DLOG（打印内容、iconsole+打印内容、方法名+行数+打印内容、iconsole+方法名+行数+打印内容）
 */
//#define	DLog(...);	NSLog(__VA_ARGS__);
//#define	DLog(...);	[iConsole info:(__VA_ARGS__)];
//#define DLog(fmt, ...) NSLog((@"DLog --- %s [Line %d] \n\n" fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define	DLog(fmt,...);	[iConsole info:(@"%s [Line %d]:"fmt),__PRETTY_FUNCTION__, __LINE__,##__VA_ARGS__];
#define DLog_Condition(condition, xx, ...) { if ((condition)) { \
DLog(xx, ##__VA_ARGS__); \
} \
} ((void)0)
#define DLogMethod	NSLog( @"[%s] %@", class_getName([self class]), NSStringFromSelector(_cmd));
#else
#define DLog(...);
#define DLog_Condition(condition, xx, ...) ((void)0);
#define DLogMethod
#endif

#endif
