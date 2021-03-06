//
//  AVSubscriber.h
//  AVOS
//
//  Created by Tang Tianyong on 16/05/2017.
//  Copyright © 2017 LeanCloud Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AVLiveQuery;

FOUNDATION_EXPORT NSString * const AVLiveQueryEventKey;
FOUNDATION_EXPORT NSNotificationName const AVLiveQueryEventNotification;

@interface AVSubscriber : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly) NSString *identifier;

- (void)loginWithCallback:(void (^)(BOOL succeeded, NSError *error))callback;
- (void)addLiveQueryObjectToWeakTable:(AVLiveQuery *)liveQueryObject;
- (void)removeLiveQueryObjectFromWeakTable:(AVLiveQuery *)liveQueryObject;

@end
