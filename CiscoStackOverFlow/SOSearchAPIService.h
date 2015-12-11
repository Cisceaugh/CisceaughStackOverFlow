//
//  SOSearchAPIService.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/9/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"
// un neccisary for lecture ask students if they want to see per endpoint settings ?

@interface SOSearchAPIService : NSObject


+(void )searchWithTearm:(NSString * _Nonnull)searchTermParam withCompletion:(kNSDictionaryCompletionHandler _Nonnull)completionHandler;

+(void) searchWithTearm:(NSString * _Nonnull)searchTerm pageNumber:(int)pageNumber withCompletion:(kNSDictionaryCompletionHandler _Nonnull)completionHandler;

+(void) searchSimilarWithTearm:(NSString * _Nonnull)searchTermParam pageNumber:(int)pageNumberParam withCompletion:(kNSDictionaryCompletionHandler _Nonnull)completionHandler;

@end
