#import <UIKit/UIKit.h>

@class ARTopMenuViewController;


@interface UIViewController (TopMenuViewController)

/// Get access to the ARTopMenuViewController by looking through the view controller heirarchy
/// this means we can avoid the singleton.

- (ARTopMenuViewController *_Nullable)ar_TopMenuViewController;

@end
