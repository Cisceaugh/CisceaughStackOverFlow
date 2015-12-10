//
//  JSONRequestService.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@interface JSONRequestService : NSObject
+(void)getRequestWithURL:(NSString* _Nonnull)url parameters:(NSDictionary *_Nullable)parameters withCompletion:(kNSDataCompletionHandler)completion;

@end
