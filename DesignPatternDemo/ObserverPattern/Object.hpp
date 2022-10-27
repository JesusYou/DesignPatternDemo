//
//  Object.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef Object_hpp
#define Object_hpp

///C++标准库
#include <vector>

namespace observer_pattern {
enum class kObjectState {
    Unknow,     ///未知状态
    Stand,      ///站立状态
    Crouch,     ///蹲下状态
    Walk,       ///行走状态
    Run         ///跑步状态
};

class Observer;

class Object final {
public:
    static Object* create();
    void release();
    void attach(Observer* observer);
    void awake();
    
private:
    Object() = default;
    ~Object() = default;
    void _stand();
    void _crouch();
    void _walk();
    void _run();
    void _notifyAllObserver();
    
private:
    kObjectState _state = kObjectState::Unknow;
    std::vector<Observer*> _observers;
};
///命名空间结束
}

#endif /* Object_hpp */

