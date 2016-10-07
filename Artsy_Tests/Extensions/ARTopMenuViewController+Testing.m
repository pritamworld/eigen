
#import "ARTopMenuViewController+Testing.h"
#import "ARTopMenuNavigationDataSource.h"

@interface ARTopMenuViewController(TestingPrivateDetails)
@property (readwrite, nonatomic, strong) ARTopMenuNavigationDataSource *navigationDataSource;
@end

@implementation ARTopMenuViewController (Testing)

- (instancetype)initWithStubbedViewControllers
{
    self = [super init];
    self.navigationDataSource = [[ARStubbedTopMenuNavigationDataSource alloc] init];
    return self;
}

@end

@implementation ARStubbedTopMenuNavigationDataSource

- (ARNavigationController *)navigationControllerAtIndex:(NSInteger)index
{
    return [[ARNavigationController alloc] initWithRootViewController:[[UIViewController alloc] init]];
}

@end