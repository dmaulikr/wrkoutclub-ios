//
//  ExerciseLog.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>
#import "ExerciseOption.h"
#import "ExerciseSet.h"

@interface ExerciseLog : RLMObject

@property NSInteger id;

@property ExerciseOption *exerciseOption;
@property RLMArray<ExerciseSet> *exerciseSets;

@end


RLM_ARRAY_TYPE(ExerciseLog)