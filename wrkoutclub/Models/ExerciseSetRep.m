
//
//  ExerciseRep.m
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import "ExerciseSetRep.h"

@implementation ExerciseSetRep

-(ExerciseSet *)exerciseSet {
    NSArray *sets = [self linkingObjectsOfClass:@"ExerciseSet" forProperty:@"exerciseReps"];
    
    if ([sets count] > 0) {
        return sets[0];
    }
    
    return nil;
}

@end
