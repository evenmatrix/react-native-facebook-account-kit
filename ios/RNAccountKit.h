//
//  RNAccountKit.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif


@interface RNAccountKit : NSObject <RCTBridgeModule>

@property NSDictionary *options;

@end