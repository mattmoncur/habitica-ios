//
//  FAQ.h
//  Habitica
//
//  Created by Phillip Thelen on 07/09/15.
//  Copyright © 2017 HabitRPG Inc. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>

@interface FAQ : NSManagedObject

@property(nonatomic, retain) NSString *question;
@property(nonatomic, retain) NSString *iosAnswer;
@property(nonatomic, retain) NSString *webAnswer;
@property(nonatomic, retain) NSString *mobileAnswer;
@property(nonatomic, retain) NSNumber *index;

- (NSString *)getRelevantAnswer;

@end
