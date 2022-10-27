//
//  Object.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "Object.hpp"
///项目代码
#include "Observer/Observer.hpp"

namespace observer_pattern {
Object* Object::create()
{
    Object* ret = new Object();
    return ret;
}

void Object::release()
{
    delete this;
}

void Object::attach(Observer* observer)
{
    _observers.push_back(observer);
}

void Object::awake()
{
    _stand();
    _crouch();
    _stand();
    _walk();
    _run();
    _walk();
    _stand();
}

void Object::_stand()
{
    _state = kObjectState::Stand;
    _notifyAllObserver();
}

void Object::_crouch()
{
    _state = kObjectState::Crouch;
    _notifyAllObserver();
}

void Object::_walk()
{
    _state = kObjectState::Walk;
    _notifyAllObserver();
}

void Object::_run()
{
    _state = kObjectState::Run;
    _notifyAllObserver();
}

void Object::_notifyAllObserver()
{
    for (Observer* observer : _observers) {
        observer->notify(_state);
    }
}
///命名空间结束
}
