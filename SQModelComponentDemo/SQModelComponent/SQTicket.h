//
//  SQTicket.h
//  SQModelComponentDemo
//
//  Created by lhq on 2018/3/21.
//  Copyright © 2018年 lhq. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, CouponStatus) {
    CouponStatusInvalid,  //!< 不可用
    CouponStatusEnable,   //!< 正常
};

typedef NS_ENUM(NSInteger, CouponURLType) { //领取链接类型0初始值 1普通 2e加密类型
    CouponURLTypeNormal = 1,   //!< 正常优惠券券
    CouponURLTypeEncryption = 2,  //!< 加密券
};

typedef NS_ENUM(NSInteger, CouponOpenType) { //打开类型
    CouponOpenTypeTaoQuan = 1,   //!< 淘券链接
    CouponOpenTypeSDK = 2,  //!<  SDK
    CouponOpenTypeH5  = 3,  //!<  H5链接
};

@interface SQTicket : NSObject
@property (nonatomic, assign) CouponStatus status;
@property (nonatomic, copy) NSString *ticketId;
@property (nonatomic, copy) NSString *activityId;
@property (nonatomic, copy) NSString *couponPrice;  //!< 优惠卷价钱 = 商品节省价钱
@property (nonatomic, copy) NSString *requirePrice; //!< 满减额度(使用条件) eg.满 50 减20
@property (nonatomic, copy) NSString *couponUrl;    //!< 二合一 优惠劵详情URL
@property (nonatomic, copy) NSString *applyUrl;     //!< 弹窗 优惠劵详情URL
@property (nonatomic, assign) long long startTime;    //!< 开始时间
@property (nonatomic, assign) long long expiredTime;  //!< 过期时间
@property (nonatomic, copy) NSString *expiredTimeString;  //!< 用于显示的过期时间：有效期至：xxxx-xx-xx
@property (nonatomic, copy) NSString *expiredTimeString2;  //!< 用于显示的过期时间：截止到xx月xx日
@property (nonatomic, copy) NSString *expiredTimeString3;  //!< 用于显示的过期时间：xx后到期
@property (nonatomic, copy) NSString *alimmpid;
@property (nonatomic, assign) CouponURLType couponUrlType ;   //!< 领取链接类型0初始值 1普通 2e加密类型
@property (nonatomic, assign) CouponOpenType couponOpenType ; //!< 1.是淘券 2是手淘SDK 3是H5
@end
