#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface tuankhangmods : NSObject
+ (void)setToken:(NSString *)token;
// [tuankhangmods Token:@"dán token vào đây"];
- (void)paid:(void (^)(void))execute;
- (NSString*)getUDID;
- (NSString *)getDeviceName;
- (NSString *)getModel;
- (NSString *)getVersionIOS;
+(bool)isJailbroken;
@end

