//
//  CFSettings.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/10/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SOSearchSettings.h"

@interface CFSettings : NSObject
@property SOSearchSettings *SOSearch;

+(CFSettings * _Nonnull) sharedSettings;

@end
