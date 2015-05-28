//
//  WrkoutLog.m
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import "WrkoutLog.h"

@implementation WrkoutLog

// Specify default values for properties

+ (NSDictionary *)defaultPropertyValues
{
    return @{@"startDate" : [NSDate date],
             @"num_exercise_logs" : @0};
}

// Specify properties to ignore (Realm won't persist these)

//+ (NSArray *)ignoredProperties
//{
//    return @[];
//}

- (BOOL)hasWrkout
{
    return self.wrkout != nil;
}

- (NSInteger)numExerciseLogs
{
    return [self.exerciseLogs count];
}

@end
