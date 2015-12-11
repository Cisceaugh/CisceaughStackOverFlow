//
//  Question.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Question : NSObject
@property NSString *title;
@property User *owner;
@property int questionID;
@property int viewCount;
@property int score;
@property BOOL isAnswered;

-(id)initWithTitle:(NSString*)title owner:(User*)owner questionID:(int)questionID viewCount:(int)viewCount score:(int)score isAnswered:(BOOL)isAnswered ;

@end
