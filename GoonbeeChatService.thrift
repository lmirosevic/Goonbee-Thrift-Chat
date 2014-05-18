//
//  ChatService.thrift
//  Goonbee Thrift Chat
//
//  Created by Luka Mirosevic on 17/04/2014.
//  Copyright (c) 2014 Goonbee. All rights reserved.
//

include "shared/GoonbeeShared.thrift"

namespace js GBChatService
namespace cocoa GBChat

enum ChatSorting {
    PARTICIPANT_COUNT =     0,
    MESSAGE_COUNT =         1,
    DATE_CREATED =          2,
}

struct ChatStats {
    1: i32 messageCount,
    2: i32 participantCount,
}

struct ChatMeta {
    1: string ownerId,
    2: string dateCreated,
    3: string name,
    4: string topic,
}

struct ChatOptions {
    1: optional string name,
    2: optional string topic,
}

struct Chat {
    1: string id,
    2: ChatMeta meta,
    3: ChatStats stats,
}

struct Message {
    1: i32 seq,
    2: string dateCreated,
    3: string authorName,
    4: string content,
}

service GoonbeeChatService extends GoonbeeShared.BaseService {
    /**
     * Check whether the username is available or not
     */
    bool                isUsernameAvailable     (1: string username)                                                                           throws(1: GoonbeeShared.RequestError error),

    /**
     * Register a username, or change it if you are already registered. pass null or empty string to userId if not registered, returns userId on success
     */
    string              registerUsername        (1: string userId, 2: string username)                                                         throws(1: GoonbeeShared.RequestError error),

    /**
     * Create a new chat channel. Chats are created lazily so this method is identical to `chat` with an added chatOptions parameter. It is implemented as an alias to setChatOptions, which creates a chat lazily and then sets some options on it.
     */
    Chat                newChat                 (1: string userId, 2: string chatId, 3: ChatOptions chatOptions)                               throws(1: GoonbeeShared.RequestError error),

    /**
     * Returns info on all available chat channels (e.g. how many messages, participators, date created, etc.)
     */
    list<Chat>          chats                   (1: ChatSorting sorting, 2: GoonbeeShared.Range range)                                         throws(1: GoonbeeShared.RequestError error),

    /**
     * Returns info on a particular chat channel
     */
    Chat                chat                    (1: string userId, 2: string chatId)                                                           throws(1: GoonbeeShared.RequestError error),

    /**
     * Post a new message on a certain chat channel
     */
    void                newMessage              (1: string userId, 2: string chatId, 3: string content)                                        throws(1: GoonbeeShared.RequestError error),

    /**
     * Returns messags for a chat channel, according to range
     */
    list<Message>       messages                (1: string userId, 2: string chatId, 3: GoonbeeShared.Range range)                             throws(1: GoonbeeShared.RequestError error),

    /**
     * Update a chat's meta. If the chat does not exist, it will be created lazily.
     */
    Chat                setChatOptions          (1: string userId, 2: string chatId, 3: ChatOptions chatOptions)                               throws(1: GoonbeeShared.RequestError error),

    /**
     * Get the total number of users registered with the chat service
     */
    i32                 globalUserCount         ()                                                                                             throws(1: GoonbeeShared.RequestError error),
}
