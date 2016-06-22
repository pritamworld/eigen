#import <Mantle/Mantle.h>

@class CLLocation, MKMapItem;

@interface Location : MTLModel <MTLJSONSerializing>

@property (nonatomic, copy, readonly) NSString *name;

@property (nonatomic, copy, readonly) NSString *streetAddress;
@property (nonatomic, copy, readonly) NSString *city;
@property (nonatomic, copy, readonly) NSString *country;
@property (nonatomic, copy, readonly) NSString *state;
@property (nonatomic, copy, readonly) NSString *postalCode;

@property (nonatomic, copy, readonly) NSString *phone;

@property (nonatomic, copy, readonly) NSNumber *longitude;
@property (nonatomic, copy, readonly) NSNumber *latitude;
- (NSDictionary *)coordinatesAsDictionary;

@property (nonatomic, readonly) BOOL publiclyViewable;

- (NSString *)addressAndCity;

/// For integrating with different parts of the OS

/// Turning the location into a core location version
- (CLLocation *)clLocation;
/// Turning location into a map item, filling in as much as possible 
- (MKMapItem *)mapRepresentation;
@end
