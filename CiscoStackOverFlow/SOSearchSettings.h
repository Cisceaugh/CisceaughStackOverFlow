//
//  SOSearchSettings.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/10/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
    Activity,
    Votes,
    Creation,
    Relevance,
} Sort;

typedef enum {
    Descending,
    Ascending,
} Order;

@interface SOSearchSettings : NSObject
@property Sort sort;
@property Order order;

+(SOSearchSettings * _Nonnull) sharedService;

-( NSString *) getSortParameterForURL;
-( NSString *) getOrderParameterForURL;

@end
