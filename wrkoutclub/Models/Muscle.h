//
//  Muscle.h
//  wrkoutclub
//
//  Created by Phu Nguyen on 5/27/15.
//  Copyright (c) 2015 Phubar. All rights reserved.
//

#import <Realm/Realm.h>

@interface Muscle : RLMObject

@property NSInteger id;
@property NSString *name;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<Muscle>
RLM_ARRAY_TYPE(Muscle)
