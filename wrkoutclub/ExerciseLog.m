//
//  ExerciseLog.m
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import "ExerciseLog.h"

@implementation ExerciseLog

// Specify default values for properties

+ (NSDictionary *)defaultPropertyValues
{
    return @{@"startDate" : [NSDate date],
             @"num_exercise_log_reps" : @0};
}

// Specify properties to ignore (Realm won't persist these)

//+ (NSArray *)ignoredProperties
//{
//    return @[];
//}

@end
