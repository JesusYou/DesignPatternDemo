//
//  ChatRoom.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef ChatRoom_hpp
#define ChatRoom_hpp

///C系统库
#include <string>

namespace mediator_pattern {
class ChatRoom final {
public:
    static ChatRoom* create();
    void release();
    void showMessage(std::string message);
    
private:
    ChatRoom() = default;
    ~ChatRoom() = default;
};
///命名空间结束
}

#endif /* ChatRoom_hpp */
