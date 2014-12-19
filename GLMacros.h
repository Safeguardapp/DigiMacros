// App Delegate
#import "AppDelegate.h"
#define kAppDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])

// General
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kFileManager [NSFileManager defaultManager]
#define kMainBundle [NSBundle mainBundle]
#define kMainThread [NSThread mainThread]
#define kMainScreen [UIScreen mainScreen]
#define kApplication [UIApplication sharedApplication]
#define kCurrentDevice [UIDevice currentDevice]
#define kMainRunLoop [NSRunLoop mainRunLoop]
#define kGeneralPasteboard [UIPasteboard generalPasteboard]
#define kUserDefaults [NSUserDefaults standardUserDefaults]
#define kLanguageCode ([[NSLocale currentLocale] objectForKey:NSLocaleLanguageCode])

// Paths
#define kDocumentDirectoryPath ([NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0])
#define kCachesDirectoryPath ([NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject])

#define kMainStoryboard [UIStoryboard storyboardWithName:@"Main" bundle:nil]

// Core Data
#define kManagedObjectContext [kAppDelegate managedObjectContext]

// Logging
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif
#define CGRectLog(rect) DLog(@"(%f, %f) -> [%f, %f]", rect.origin.x, rect.origin.y, rect.size.width, rect.size.height);
#define ELOG(error)                                                                                                                                                                                              \
    [[[UIAlertView alloc] initWithTitle:[error localizedDescription] message:[error localizedRecoverySuggestion] delegate:nil cancelButtonTitle:NSLocalizedString(@"Dismiss", nil) otherButtonTitles:nil] show]; \
    DLog(@"%@", [error localizedDescription]);
#define FONTS_LOG                                                                         \
    for (NSString * fontFamilyStrings in [UIFont familyNames])                            \
    {                                                                                     \
        NSLog(@"Font family: %@", fontFamilyStrings);                                     \
        for (NSString * fontStrings in [UIFont fontNamesForFamilyName:fontFamilyStrings]) \
        {                                                                                 \
            NSLog(@"-- Font: %@", fontStrings);                                           \
        }                                                                                 \
    }
#define LOG_DOCUMENTS DLog(@"Documents Directory: %@", [[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject]);

// iOS Versions
#define isIOS5 ([[UIDevice currentDevice] systemVersion].floatValue >= 5.0)
#define isIOS6 ([[UIDevice currentDevice] systemVersion].floatValue >= 6.0)
#define isIOS7 ([[UIDevice currentDevice] systemVersion].floatValue >= 7.0)
#define isIOS8 ([[UIDevice currentDevice] systemVersion].floatValue >= 8.0)

// Device types
#define isPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define isPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// General conversions
#define convertToLbs(kg) kg * 2.2
#define convertToInch(cm) cm / 2.54
#define convertToKg(lbs) lbs / 2.2
#define convertToCm(inch) inch * 2.54
#define convertToRadians(degrees) degrees *M_PI / 180
#define convertToDegrees(radians) radians * 180 / M_PI

// Time Conversions
#define kMinuteInSeconds 60
#define kHourInSeconds 3600
#define kDayInSeconds 86400
#define kWeekInSeconds 604800

//AppName
#define kLocalizedAppName [[[NSBundle mainBundle] localizedInfoDictionary] objectForKey:@"CFBundleDisplayName"]
#define kAppName kLocalizedAppName ?: [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]

// Colors
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]