
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNComFirstsampleviewSpec.h"

@interface ComFirstsampleview : NSObject <NativeComFirstsampleviewSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ComFirstsampleview : NSObject <RCTBridgeModule>
#endif

@end
