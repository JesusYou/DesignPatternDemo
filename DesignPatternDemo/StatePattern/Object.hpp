//
//  Object.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Object_hpp
#define Object_hpp

///项目代码
#include "State/State.hpp"

namespace state_pattern {
class Object final {
public:
    static Object* create();
    void release();
    void setState(State* state);
    
private:
    Object() = default;
    ~Object() = default;
    void _exitState();
    void _enterState();
    
private:
    State* _state = nullptr;
};
///命名空间结束
}

#endif /* Object_hpp */
