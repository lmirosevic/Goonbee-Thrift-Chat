/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"

#import "GoonbeeSharedThriftService.h"

enum GBChatChatSorting {
  ChatSorting_PARTICIPANT_COUNT = 0,
  ChatSorting_MESSAGE_COUNT = 1,
  ChatSorting_DATE_CREATED = 2
};

enum GBChatResponseStatus {
  ResponseStatus_SUCCESS = 0,
  ResponseStatus_GENERIC = 1,
  ResponseStatus_MALFORMED_REQUEST = 2,
  ResponseStatus_AUTHENTICATION = 3,
  ResponseStatus_AUTHORIZATION = 4,
  ResponseStatus_PHASED_OUT = 5
};

enum GBChatRangeDirection {
  RangeDirection_FORWARDS = 0,
  RangeDirection_BACKWARDS = 1
};

@interface GBChatRange : NSObject <TBase, NSCoding> {
  int __direction;
  int32_t __index;
  int32_t __length;

  BOOL __direction_isset;
  BOOL __index_isset;
  BOOL __length_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=direction, setter=setDirection:) int direction;
@property (nonatomic, getter=index, setter=setIndex:) int32_t index;
@property (nonatomic, getter=length, setter=setLength:) int32_t length;
#endif

- (id) init;
- (id) initWithDirection: (int) direction index: (int32_t) index length: (int32_t) length;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) direction;
- (void) setDirection: (int) direction;
#endif
- (BOOL) directionIsSet;

#if !__has_feature(objc_arc)
- (int32_t) index;
- (void) setIndex: (int32_t) index;
#endif
- (BOOL) indexIsSet;

#if !__has_feature(objc_arc)
- (int32_t) length;
- (void) setLength: (int32_t) length;
#endif
- (BOOL) lengthIsSet;

@end

@interface GBChatChatStats : NSObject <TBase, NSCoding> {
  int32_t __messageCount;
  int32_t __participantCount;

  BOOL __messageCount_isset;
  BOOL __participantCount_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=messageCount, setter=setMessageCount:) int32_t messageCount;
@property (nonatomic, getter=participantCount, setter=setParticipantCount:) int32_t participantCount;
#endif

- (id) init;
- (id) initWithMessageCount: (int32_t) messageCount participantCount: (int32_t) participantCount;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) messageCount;
- (void) setMessageCount: (int32_t) messageCount;
#endif
- (BOOL) messageCountIsSet;

#if !__has_feature(objc_arc)
- (int32_t) participantCount;
- (void) setParticipantCount: (int32_t) participantCount;
#endif
- (BOOL) participantCountIsSet;

@end

@interface GBChatChatMeta : NSObject <TBase, NSCoding> {
  NSString * __ownerId;
  NSString * __dateCreated;
  NSString * __name;
  NSString * __topic;

  BOOL __ownerId_isset;
  BOOL __dateCreated_isset;
  BOOL __name_isset;
  BOOL __topic_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=ownerId, setter=setOwnerId:) NSString * ownerId;
@property (nonatomic, retain, getter=dateCreated, setter=setDateCreated:) NSString * dateCreated;
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=topic, setter=setTopic:) NSString * topic;
#endif

- (id) init;
- (id) initWithOwnerId: (NSString *) ownerId dateCreated: (NSString *) dateCreated name: (NSString *) name topic: (NSString *) topic;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) ownerId;
- (void) setOwnerId: (NSString *) ownerId;
#endif
- (BOOL) ownerIdIsSet;

#if !__has_feature(objc_arc)
- (NSString *) dateCreated;
- (void) setDateCreated: (NSString *) dateCreated;
#endif
- (BOOL) dateCreatedIsSet;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) topic;
- (void) setTopic: (NSString *) topic;
#endif
- (BOOL) topicIsSet;

@end

@interface GBChatChatOptions : NSObject <TBase, NSCoding> {
  NSString * __name;
  NSString * __topic;

  BOOL __name_isset;
  BOOL __topic_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=name, setter=setName:) NSString * name;
@property (nonatomic, retain, getter=topic, setter=setTopic:) NSString * topic;
#endif

- (id) init;
- (id) initWithName: (NSString *) name topic: (NSString *) topic;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) name;
- (void) setName: (NSString *) name;
#endif
- (BOOL) nameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) topic;
- (void) setTopic: (NSString *) topic;
#endif
- (BOOL) topicIsSet;

@end

@interface GBChatChat : NSObject <TBase, NSCoding> {
  NSString * __id;
  GBChatChatMeta * __meta;
  GBChatChatStats * __stats;

  BOOL __id_isset;
  BOOL __meta_isset;
  BOOL __stats_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=id, setter=setId:) NSString * id;
@property (nonatomic, retain, getter=meta, setter=setMeta:) GBChatChatMeta * meta;
@property (nonatomic, retain, getter=stats, setter=setStats:) GBChatChatStats * stats;
#endif

- (id) init;
- (id) initWithId: (NSString *) id meta: (GBChatChatMeta *) meta stats: (GBChatChatStats *) stats;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) id;
- (void) setId: (NSString *) id;
#endif
- (BOOL) idIsSet;

#if !__has_feature(objc_arc)
- (GBChatChatMeta *) meta;
- (void) setMeta: (GBChatChatMeta *) meta;
#endif
- (BOOL) metaIsSet;

#if !__has_feature(objc_arc)
- (GBChatChatStats *) stats;
- (void) setStats: (GBChatChatStats *) stats;
#endif
- (BOOL) statsIsSet;

@end

@interface GBChatMessage : NSObject <TBase, NSCoding> {
  int32_t __seq;
  NSString * __dateCreated;
  NSString * __authorName;
  NSString * __content;

  BOOL __seq_isset;
  BOOL __dateCreated_isset;
  BOOL __authorName_isset;
  BOOL __content_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=seq, setter=setSeq:) int32_t seq;
@property (nonatomic, retain, getter=dateCreated, setter=setDateCreated:) NSString * dateCreated;
@property (nonatomic, retain, getter=authorName, setter=setAuthorName:) NSString * authorName;
@property (nonatomic, retain, getter=content, setter=setContent:) NSString * content;
#endif

- (id) init;
- (id) initWithSeq: (int32_t) seq dateCreated: (NSString *) dateCreated authorName: (NSString *) authorName content: (NSString *) content;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int32_t) seq;
- (void) setSeq: (int32_t) seq;
#endif
- (BOOL) seqIsSet;

#if !__has_feature(objc_arc)
- (NSString *) dateCreated;
- (void) setDateCreated: (NSString *) dateCreated;
#endif
- (BOOL) dateCreatedIsSet;

#if !__has_feature(objc_arc)
- (NSString *) authorName;
- (void) setAuthorName: (NSString *) authorName;
#endif
- (BOOL) authorNameIsSet;

#if !__has_feature(objc_arc)
- (NSString *) content;
- (void) setContent: (NSString *) content;
#endif
- (BOOL) contentIsSet;

@end

@interface GBChatRequestError : NSException <TBase, NSCoding> {
  int __status;
  NSString * __message;

  BOOL __status_isset;
  BOOL __message_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=status, setter=setStatus:) int status;
@property (nonatomic, retain, getter=message, setter=setMessage:) NSString * message;
#endif

- (id) init;
- (id) initWithStatus: (int) status message: (NSString *) message;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) status;
- (void) setStatus: (int) status;
#endif
- (BOOL) statusIsSet;

#if !__has_feature(objc_arc)
- (NSString *) message;
- (void) setMessage: (NSString *) message;
#endif
- (BOOL) messageIsSet;

@end

@protocol GBChatGoonbeeChatService <NSObject>
- (BOOL) isUsernameAvailable: (NSString *) username;  // throws GBChatRequestError *, TException
- (NSString *) registerUsername: (NSString *) userId username: (NSString *) username;  // throws GBChatRequestError *, TException
- (GBChatChat *) newChat: (NSString *) userId chatId: (NSString *) chatId chatOptions: (GBChatChatOptions *) chatOptions;  // throws GBChatRequestError *, TException
- (NSMutableArray *) chats: (int) sorting range: (GBChatRange *) range;  // throws GBChatRequestError *, TException
- (GBChatChat *) chat: (NSString *) userId chatId: (NSString *) chatId;  // throws GBChatRequestError *, TException
- (void) newMessage: (NSString *) userId chatId: (NSString *) chatId content: (NSString *) content;  // throws GBChatRequestError *, TException
- (NSMutableArray *) messages: (NSString *) userId chatId: (NSString *) chatId range: (GBChatRange *) range;  // throws GBChatRequestError *, TException
- (GBChatChat *) setChatOptions: (NSString *) userId chatId: (NSString *) chatId chatOptions: (GBChatChatOptions *) chatOptions;  // throws GBChatRequestError *, TException
- (int32_t) globalUserCount;  // throws GBChatRequestError *, TException
@end

@interface GBChatGoonbeeChatServiceClient : NSObject <GBChatGoonbeeChatService> {
  id <TProtocol> inProtocol;
  id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface GBChatGoonbeeChatServiceProcessor : NSObject <TProcessor> {
  id <GBChatGoonbeeChatService> mService;
  NSDictionary * mMethodMap;
}
- (id) initWithGoonbeeChatService: (id <GBChatGoonbeeChatService>) service;
- (id<GBChatGoonbeeChatService>) service;
@end

@interface GBChatGoonbeeChatServiceConstants : NSObject {
}
@end
