//
//  SOSearchSettings.m
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/10/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import "SOSearchSettings.h"

@implementation SOSearchSettings
#pragma mark - class methods

+(SOSearchSettings * )sharedService{
    static SOSearchSettings *sharedService;
    if (!sharedService){
        sharedService = [[SOSearchSettings alloc] init];
        return sharedService;
    }
    return sharedService;
}

#pragma mark -instance methods
-(id)init
{
    if (self = [super init])
    {
        // Initializselation code here
        [self setSort: Activity];
        [self setOrder:Descending];
        
    }
    return self;
}

-(NSString *) getSortParameterForURL{
    switch (self.sort) {
        case Activity:
            return @"activity";
            break;
        case Creation:
            return @"creation";
            break;
        case Relevance:
            return @"relevance";
            break;
        case Votes:
            return @"votes";
            break;
        default:
            return @"activity";
            break;
    }
}

-(NSString *) getOrderParameterForURL{
    switch (self.order) {
        case Descending:
            return @"desc";
            break;
        case Ascending:
            return @"asc";
            break;
        default:
            return @"desc";
            break;
    }
}


@end
