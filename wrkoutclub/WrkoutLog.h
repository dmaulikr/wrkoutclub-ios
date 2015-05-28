//
//  WrkoutLog.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>
#import "Wrkout.h"
#import "ExerciseLog.h"

@interface WrkoutLog : RLMObject

@property NSDate *startDate;
@property NSDate *endDate;

@property Wrkout *wrkout;
@property RLMArray<ExerciseLog> *exerciseLogs;

- (BOOL)hasWrkout;
- (NSInteger)numExerciseLogs;

@end

RLM_ARRAY_TYPE(WrkoutLog)
