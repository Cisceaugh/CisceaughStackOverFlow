//
//  Constants.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^kIdCompletionHandler)(id _Nullable data , NSError  * _Nullable  error);

typedef void (^kNSDataCompletionHandler)(NSData * _Nullable data , NSError  * _Nullable  error);
typedef void (^kNSDictionaryCompletionHandler)(NSDictionary * _Nullable data , NSError  * _Nullable  error);
typedef void (^kNSArrayCompletionHandler)(NSArray * _Nullable data , NSError  * _Nullable  error);
typedef void (^kNSImageCompletionHandler)(UIImage * _Nullable data , NSError  * _Nullable  error);