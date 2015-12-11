//
//  ImageFetcherService.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Constants.h"


@interface ImageFetcherService : NSObject
+(void)fetchImageInBackgroundFromUrl:(NSURL * _Nonnull)url completionHandler:(kNSImageCompletionHandler)completionHandler;

@end