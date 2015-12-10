//
//  OAuthWebViewController.m
//  CiscoStackOverFlow
//
//  Created by Francisco Ragland Jr on 12/8/15.
//  Copyright © 2015 Francisco Ragland. All rights reserved.
//

#import "OAuthWebViewController.h"

@import WebKit;

NSString const *kClientID = @"6123";
NSString const *kBaseURL = @"https://stackexchange.com/oauth/dialog?";
NSString const *kRedirectURI = @"https://stackexchange.com/oauth/login_success";

@interface OAuthWebViewController () <WKNavigationDelegate>

@property (strong, nonatomic) WKWebView *webView;

@end

@implementation OAuthWebViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.webView = [[WKWebView alloc]initWithFrame:self.view.frame];
    [self.view addSubview:self.webView];
    self.webView.navigationDelegate = self;
    NSString *stackURLString = [NSString stringWithFormat:@"%@client_id=%@&redirect_uri=%@", kBaseURL, kClientID, kRedirectURI];
    NSLog(@"%@", stackURLString);
    NSURL *stackURL = [NSURL URLWithString:stackURLString];
    [self.webView loadRequest:[NSURLRequest requestWithURL:stackURL]];
    
}

- (void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void (^)(WKNavigationActionPolicy))decisionHandler {
    
    NSURLRequest *request = navigationAction.request;
    NSURL *requestURL = request.URL;
    
    if ([requestURL.description containsString:@"access_token"]) {
        NSArray *urlComponents = [[requestURL description] componentsSeparatedByString:@"="];
        NSString *secondToLast = [urlComponents objectAtIndex:(urlComponents.count -2)];
        NSArray *actualToken = [secondToLast componentsSeparatedByString:@"&"];
        
        
        NSString *accessToken = actualToken.firstObject;
        NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
        [userDefaults setObject:accessToken forKey:@"accessToken"];
        [userDefaults synchronize];
        
        NSLog(@"%@", accessToken);
        
        if (self.completion) {
            self.completion();
        }
    }

    decisionHandler(WKNavigationActionPolicyAllow);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
