@import UserNotifications;
#import "React/RCTBridgeModule.h"
#import "React/RCTEventEmitter.h"

@interface AdpPushClient : RCTEventEmitter <RCTBridgeModule,RCTInvalidating>
    
+(NSDictionary *) notificationOpened:(NSDictionary *) payload actionId:(NSString *) actionId;
+(NSDictionary *) notificationOpened:(NSDictionary *) payload;
+(void) registerToUNUserNotificationCenter;
    
@end
