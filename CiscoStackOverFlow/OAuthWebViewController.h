//
//  OAuthWebViewController.h
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/8/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^OAuthWebViewControllerCompletion)();

@interface OAuthWebViewController : UIViewController

@property (copy, nonatomic) OAuthWebViewControllerCompletion completion;

@end
