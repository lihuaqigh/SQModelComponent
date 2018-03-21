//
//  SQShop.h
//  SQModelComponentDemo
//
//  Created by lhq on 2018/3/21.
//  Copyright © 2018年 lhq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SQShop : NSObject
@property (nonatomic, copy) NSString *shopId;
@property (nonatomic, copy) NSString *shopUrl;
@property (nonatomic, copy) NSString *logoUrl;
@property (nonatomic, copy) NSString *shopScore;
@property (nonatomic, copy) NSString *shopName;
@property (nonatomic, assign) NSInteger shopRank;
@end
