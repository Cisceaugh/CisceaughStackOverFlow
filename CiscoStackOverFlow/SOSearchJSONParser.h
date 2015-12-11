//
//  SOSearchJSONParser.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@interface SOSearchJSONParser : NSObject
+(void)questionsArrayFromDictionary:(NSDictionary *)dictionary completionHandler:(kNSArrayCompletionHandler)completion;
@end
