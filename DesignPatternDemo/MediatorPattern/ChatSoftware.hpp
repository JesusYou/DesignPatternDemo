//
//  ChatSoftware.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef ChatSoftware_hpp
#define ChatSoftware_hpp

namespace mediator_pattern {
class ChatSoftware final {
public:
    static ChatSoftware* create();
    void release();
    void createRoomGroup();
    
private:
    ChatSoftware() = default;
    ~ChatSoftware() = default;
};
///命名空间结束
}

#endif /* ChatSoftware_hpp */
