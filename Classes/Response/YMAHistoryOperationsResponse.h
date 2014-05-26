//
// Created by Alexander Mertvetsov on 23.05.14.
// Copyright (c) 2014 Yandex.Money. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMABaseResponse.h"

@interface YMAHistoryOperationsResponse : YMABaseResponse

@property(nonatomic, copy, readonly) NSString *nextRecord;
@property(nonatomic, strong, readonly) NSArray *operations;

@end