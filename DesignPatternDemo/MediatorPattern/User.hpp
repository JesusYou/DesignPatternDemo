//
//  User.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef User_hpp
#define User_hpp

///C++标准库
#include <string>
///项目代码
#include "ChatRoom.hpp"

namespace mediator_pattern {
class User final {
public:
    static User* create(std::string name);
    void release();
    void sendMessage(std::string message);
    void bindChatRoom(ChatRoom* chatRoom);
    
private:
    User() = default;
    ~User() = default;
    void _init(std::string name);
    
private:
    std::string _name = "";
    ChatRoom* _chatRoom = nullptr;
};
///命名空间结束
}

#endif /* User_hpp */
