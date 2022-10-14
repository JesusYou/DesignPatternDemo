//
//  ChatRoom.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "ChatRoom.hpp"
///C系统库
#include <stdio.h>

namespace mediator_pattern {
ChatRoom* ChatRoom::create()
{
    ChatRoom* ret = new ChatRoom();
    return ret;
}

void ChatRoom::release()
{
    delete this;
}

void ChatRoom::showMessage(std::string message)
{
    printf("用户消息%s", message.c_str());
}
///命名空间结束
}
