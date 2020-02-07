//
//  CardIOPaymentViewControllerContinuation.h
//  See the file "LICENSE.md" for the full license governing this code.
//

#import "CardIOPaymentViewController.h"
#import <AVFoundation/AVCaptureDevice.h>

@class CardIOAnalytics;
@class CardIOContext;

@interface CardIOPaymentViewController ()

+ (CardIOPaymentViewController *)cardIOPaymentViewControllerForResponder:(UIResponder *)responder;
- (UIInterfaceOrientationMask)supportedOverlayOrientationsMask;

@property(nonatomic, assign, readwrite) BOOL currentViewControllerIsDataEntry;
@property(nonatomic, assign, readwrite) UIInterfaceOrientation initialInterfaceOrientationForViewcontroller;

@property(nonatomic, strong, readwrite) UIAlertView *unauthorizedForScanAlert;
@property(nonatomic, assign, readwrite) BOOL shouldStoreStatusBarStyle;
@property(nonatomic, assign, readwrite) UIStatusBarStyle originalStatusBarStyle;
@property(nonatomic, assign, readwrite) BOOL statusBarWasOriginallyHidden;

@property(nonatomic, strong, readwrite) CardIOContext *context;
@property(nonatomic, assign, readwrite) AVCaptureDevicePosition preferredDevicePosition;

@property(nonatomic, strong, readwrite) UIImageView *obfuscatingView;

#if CARDIO_DEBUG
@property(nonatomic, assign, readwrite) BOOL doABTesting;
#endif

@end
