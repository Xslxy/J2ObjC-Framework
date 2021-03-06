//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ClosedChannelException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsClosedChannelException")
#ifdef RESTRICT_JavaNioChannelsClosedChannelException
#define INCLUDE_ALL_JavaNioChannelsClosedChannelException 0
#else
#define INCLUDE_ALL_JavaNioChannelsClosedChannelException 1
#endif
#undef RESTRICT_JavaNioChannelsClosedChannelException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsClosedChannelException_) && (INCLUDE_ALL_JavaNioChannelsClosedChannelException || defined(INCLUDE_JavaNioChannelsClosedChannelException))
#define JavaNioChannelsClosedChannelException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../../java/io/IOException.h"

/*!
 @brief A <code>ClosedChannelException</code> is thrown when a channel is closed for the
 type of operation attempted.
 */
@interface JavaNioChannelsClosedChannelException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>ClosedChannelException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsClosedChannelException)

FOUNDATION_EXPORT void JavaNioChannelsClosedChannelException_init(JavaNioChannelsClosedChannelException *self);

FOUNDATION_EXPORT JavaNioChannelsClosedChannelException *new_JavaNioChannelsClosedChannelException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsClosedChannelException *create_JavaNioChannelsClosedChannelException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsClosedChannelException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsClosedChannelException")
