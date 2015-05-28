//
//  ExerciseSet.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>
#import "ExerciseSetRep.h"

@interface ExerciseSet : RLMObject

@property NSInteger id;
@property NSDate *startDate;
@property NSDate *endDate;

@property RLMArray<ExerciseSetRep> *exerciseReps;

@end

RLM_ARRAY_TYPE(ExerciseSet)