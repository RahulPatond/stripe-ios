//
//  STPCheckoutOptions.h
//  StripeExample
//
//  Created by Jack Flintermann on 10/6/14.
//  Copyright (c) 2014 Stripe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface STPCheckoutOptions : NSObject

// required property
@property (nonatomic, copy) NSString *publishableKey;

// strongly recommended properties
@property (nonatomic) NSURL *logoURL;
@property (nonatomic) UIImage *logoImage;
@property (nonatomic) UIColor *logoColor;
@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *purchaseDescription;
@property (nonatomic, copy) NSString *purchaseLabel;
@property (nonatomic, copy) NSString *purchaseCurrency;
@property (nonatomic) NSNumber *purchaseAmount;

// optional properties
@property (nonatomic, copy) NSString *customerEmail;
@property (nonatomic) NSNumber *enableRememberMe;
@property (nonatomic) NSNumber *enablePostalCode;

- (NSString *)stringifiedJSONRepresentation;

@end
