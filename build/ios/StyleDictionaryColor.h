
//
// StyleDictionaryColor.h
//

// Do not edit directly, this file was auto-generated.


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorsBlack,
ColorsWhite,
ColorsOrange100,
ColorsOrange200,
ColorsOrange300,
ColorsOrange400,
ColorsOrange500,
ColorsOrange600,
ColorsOrange700,
ColorsOrange800,
ColorsOrange900,
ColorsBlue100,
ColorsBlue200,
ColorsBlue300,
ColorsBlue400,
ColorsBlue500,
ColorsBlue600,
ColorsBlue700,
ColorsBlue800,
ColorsBlue900
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end