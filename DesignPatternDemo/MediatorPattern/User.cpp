//
//  User.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "User.hpp"

namespace mediator_pattern {
User* User::create(std::string name)
{
    User* ret = new User();
    ret->_init(name);
    return ret;
}

void User::release()
{
    delete this;
}

void User::sendMessage(std::string message)
{
    if (_chatRoom) {
        std::string packagingMessage = "[" + _name + "]：" + message;
        _chatRoom->showMessage(packagingMessage);
    }
}

void User::bindChatRoom(ChatRoom* chatRoom)
{
    _chatRoom = chatRoom;
}

void User::_init(std::string name)
{
    _name = name;
}
///命名空间结束
}
