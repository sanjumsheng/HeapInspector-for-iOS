//
//  NSObject+HeapInspector.h
//
//  Created by Christian Menschel on 06.08.14.
//  Copyright (c) 2014 tapwork. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (HeapInspector)

+ (void)beginSnapshot;
+ (void)beginSnapshotWithClassPrefix:(NSString*)prefix;
+ (void)endSnapshot;
+ (void)resumeSnapshot;
+ (NSArray *)referenceHistoryForObject:(id)obj;

@end
