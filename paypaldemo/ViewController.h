//
//  ViewController.h
//  PayPalDemo
//
//  Created by RainCreatives on 22/09/16.
//  Copyright © 2016 Chirag. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PayPalMobile.h"

@interface ViewController : UIViewController <PayPalPaymentDelegate,UIPopoverControllerDelegate>{
    
}

@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, assign, readwrite) BOOL acceptCreditCards;
@property(nonatomic, strong, readwrite) NSString *resultText;


@end

