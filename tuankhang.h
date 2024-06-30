#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface tuankhangmods : NSObject
extern NSString * const token;
// code token ImGui
// NSString * const token = @"dán token vào";
// code menu ted
// NSString * const token = NSSENCRYPT("dán token vào");
- (void)checkKeyExistence:(NSString *)key;
- (void)ExitApp;
- (NSString*)getUDID;
- (NSString *)getDeviceName;
- (NSString *)getModel;
- (NSString *)getVersionIOS;
+(bool)isJailbroken;
@end
