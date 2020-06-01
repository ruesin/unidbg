#import <Foundation/Foundation.h>

NSString *const CTRadioAccessTechnologyLTE = @"CTRadioAccessTechnologyLTE";

@interface CTCarrier : NSObject
- (NSString *)carrierName;
- (NSString *)isoCountryCode;
- (NSString *)mobileCountryCode;
- (NSString *)mobileNetworkCode;
@end

@interface CTTelephonyNetworkInfo : NSObject
- (CTCarrier *)subscriberCellularProvider;
- (NSString *)currentRadioAccessTechnology;
@end
