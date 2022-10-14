//
//  ChatSoftware.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "ChatSoftware.hpp"
///项目代码
#include "User.hpp"
#include "ChatRoom.hpp"

namespace mediator_pattern {
ChatSoftware* ChatSoftware::create()
{
    ChatSoftware* ret = new ChatSoftware();
    return ret;
}

void ChatSoftware::release()
{
    delete this;
}

void ChatSoftware::createRoomGroup()
{
    ChatRoom* chatRoom = ChatRoom::create();
    User* user1 = User::create("David");
    user1->bindChatRoom(chatRoom);
    User* user2 = User::create("James");
    user2->bindChatRoom(chatRoom);
    user2->sendMessage("David，I am coming\n");
}
///命名空间结束
}
