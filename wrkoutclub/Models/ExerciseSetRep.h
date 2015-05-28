//
//  ExerciseRep.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Realm/Realm.h>

#import "ExerciseSet.h"

@interface ExerciseSetRep : RLMObject

// There is no id b/c we probably will never need to store this in its own table

@property CGFloat *weight;  // CGFloat over float (32-bit) & double (64-bit)
@property NSInteger *count;

@property (readonly) ExerciseSet *exerciseSet;

@end

RLM_ARRAY_TYPE(ExerciseSetRep)