/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

// These macro is only used inside framework project, does not expose to public header and effect user's define

#define SVGKIT_LOG_CONTEXT 556

#define SVGKitLogError(frmt, ...)   NSLog((frmt), ##__VA_ARGS__)
#define SVGKitLogWarn(frmt, ...)    NSLog((frmt), ##__VA_ARGS__)
#define SVGKitLogInfo(frmt, ...)    
#define SVGKitLogDebug(frmt, ...)   
#define SVGKitLogVerbose(frmt, ...) 

//#if DEBUG
//static const int ddLogLevel = DDLogLevelVerbose;
//#else
//static const int ddLogLevel = DDLogLevelWarning;
//#endif

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */
