//
//  ExerciseOption.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>
#import "ExerciseBase.h"
#import "ExerciseType.h"
#import "Muscle.h"

/*
 ExerciseOption : Represents an exercise, including specific options such as:
    - Exercise Equipment
    - Muscles used
    - Arm Positions
    - Instructions for specific exercise
 */
@interface ExerciseOption : RLMObject

@property NSInteger id;
@property NSString *name;

@property ExerciseBase *exerciseBase;
@property ExerciseType *exerciseType;
@property Muscle *mainMuscle;
@property RLMArray<Muscle> *otherMuscles;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<ExerciseOption>
RLM_ARRAY_TYPE(ExerciseOption)
