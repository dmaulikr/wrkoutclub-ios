//
//  Wrkout.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/25/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>
#import "ExerciseOption.h"

@interface Wrkout : RLMObject

@property NSInteger id;
@property NSString *name;

@property RLMArray<ExerciseOption> *exerciseOptions;

@end

RLM_ARRAY_TYPE(Wrkout)