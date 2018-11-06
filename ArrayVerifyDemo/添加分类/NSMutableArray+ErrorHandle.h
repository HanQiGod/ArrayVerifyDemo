//
//  NSMutableArray+ErrorHandle.h
//  数组越界
//
//  Created by Mr_Han on 2018/9/20.
//  Copyright © 2018年 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//
 
#import <Foundation/Foundation.h>

@interface NSMutableArray (ErrorHandle)
/**
 数组中插入数据

 @param object 数据
 @param index 下标
 */
- (void)insertObjectVerify:(id)object atIndex:(NSInteger)index;
/**
 数组中添加数据

 @param object 数据
 */
- (void)addObjectVerify:(id)object;

@end
