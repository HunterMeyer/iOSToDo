//
//  ToDoItem.h
//  ToDoList
//
//  Created by Hunter Meyer on 2/21/15.
//  Copyright (c) 2015 Hunter Meyer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end