#define XCTAssertIsValidUUIDString(test) \
    NSUUID *_u = ([test isKindOfClass:[NSString class]] ? [[NSUUID alloc] initWithUUIDString:(test)] : nil); \
    if (_u == nil) { \
        XCTFail(@"'%@' is not a valid UUID string", test); \
    } 
#define XCTAssertIsKindOfClass(test, expression) \
    if(![test isKindOfClass: expression]) { \
        XCTFail(@"'%@' is not of class %@", test, expression); \
    } 
