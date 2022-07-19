#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
{
    // 'public' keyword makes variable can be accessed by the outside
    @public
    float weight;   // declare weight
    int age;        // declare age
    NSString* name;
    NSString* major;
}
-(void) study;        // study method
@end

NS_ASSUME_NONNULL_END

