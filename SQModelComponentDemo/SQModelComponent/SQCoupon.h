//
//  SQCoupon.h
//  SQModelComponentDemo
//
//  Created by lhq on 2018/3/21.
//  Copyright © 2018年 lhq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SQShop.h"
#import "SQTicket.h"

typedef NS_ENUM(NSInteger, CouponStoreType) {
    CouponStoreTypeNormal,
    CouponStoreTypeFlagShip,  //!< 旗舰店
};

typedef NS_ENUM(NSInteger, CouponType) {
    CouponTypeNormal = 1,       //!< 正常优惠券商品
    CouponTypeProduct = 2,      //!< 没有优惠券商品
};

@interface SQCoupon : NSObject
@property (nonatomic, assign) CouponType type; //!< 优惠券类型（有无优惠券）
@property (nonatomic, strong) SQTicket *ticket;
@property (nonatomic, strong) SQShop *shop;
@property (nonatomic, strong) NSArray<NSString *> *coverPics; // 多个封面
//@property (nonatomic, strong) NSArray<PicInfo *> *descPics; // 商品详情图
//@property (nonatomic, strong) NSArray<SKUPicInfo *> *images; // SKU 图片
@property (nonatomic, copy) NSString *couponId;
@property (nonatomic, copy) NSString *subcateId; // 上报数据时候需要表示所属分类ID
@property (nonatomic, copy) NSString *itemId;  // 淘宝ItemId
@property (nonatomic, assign) NSInteger platform;  // 来源平台 1 淘宝  2 天猫  0 其他
@property (nonatomic, assign) NSInteger sourceId;  // 抓取来源
@property (nonatomic, assign) NSInteger commentCount;  // 评论个数
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *cover;
@property (nonatomic, copy) NSString *title;  // 商品名
@property (nonatomic, copy) NSString *shortTitle;  // 短标题
@property (nonatomic, copy) NSString *descTitle;  // 商品描述
@property (nonatomic, copy) NSString *remake;  // “今日特惠”
@property (nonatomic, copy) NSString *monthSales; // 格式化月销量
@property (nonatomic, copy) NSString *originalPrice; // 商品原价
@property (nonatomic, copy) NSString *formattedOriginalPrice; // 格式化 商品原价
@property (nonatomic, copy) NSString *realPrice;  // 商品用卷后价格（实际价格）
@property (nonatomic, copy) NSString *discount;  // 折扣
@property (nonatomic, copy) NSString *priceDesc; // 价格描述
@property (nonatomic, copy) NSString *buttonTitle;  // "立即领劵"
@property (nonatomic, copy) NSString *linkUrl; //!< 商品链接
@property (nonatomic, copy) NSString *couponDetailUrl; // 优惠劵详情插入优惠劵用 TODO:是否删除？
@property (nonatomic, copy) NSString *tag; //!< 优惠券标签，来源于运营位.
@property (nonatomic, copy) NSString *deposit; //!< 双十一定金
@property (nonatomic, assign) BOOL isPromotionInDoubleEleven; //!< 是否参加双十一活动
@property (nonatomic, assign) long long publishTime; //!< 双十一feed单品发布时间
@property (nonatomic, assign) NSInteger views;
@property (nonatomic, copy) NSString *alimmpid;

/* 是否申请高佣金，0是走自己的逻辑，1是走百川逻辑 */
@property (nonatomic, assign) NSInteger applyCommissionType;
@property (nonatomic, assign) BOOL isNew;
@property (nonatomic, assign) BOOL isGrab;
@property (nonatomic, assign) BOOL freePost;  // 包邮
@property (nonatomic, assign) BOOL isCollected;
@property (nonatomic, assign) BOOL isAd;
@property (nonatomic, assign) BOOL searchResultFromTaoBao; //!< 淘宝搜索结果
@property (nonatomic, assign) CouponStoreType storeType;
@property (nonatomic, assign) NSTimeInterval timestamp; // for db - save time
@property (nonatomic, assign) NSTimeInterval c_timestamp; // for db - received coupon time
@property (nonatomic, assign) BOOL history; // for history db.
@property (nonatomic, assign) BOOL isOperation; // indicate if the coupon in the lis is operation
@property (nonatomic, assign) long long collectTime; // collect time
@property (nonatomic, assign) BOOL couponHasReceive; // for received history db.
@property (nonatomic, assign) BOOL isNewUser;
///// Coupon layout for the cell.
//@property (nonatomic, strong) id <HomeCouponLayoutProtocol>couponLayout;

/// 详情界面参数
@property (nonatomic, strong) NSString *shareUrl;

/// H5插入的折扣关联CouponId
@property (nonatomic, copy) NSString *couponRelationId;

@property (nonatomic, copy) NSString *traceId;
/// 单品追踪链接
@property (nonatomic, copy) NSString *trackUrl;

/// 服务器返回的表示类型
@property (nonatomic, assign) NSInteger recType;
@end
