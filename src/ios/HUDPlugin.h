//
//  HUDPlugin.h
//  HelloConfirm
//
//  Created by Francesco Verheye on 03/12/14.
//
//

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>

@interface HUDPlugin : CDVPlugin <UIAlertViewDelegate>

- (void)show:(CDVInvokedUrlCommand*)command;

@end
