//
//  Object.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Object.hpp"

namespace state_pattern {
Object* Object::create()
{
    Object* ret = new Object();
    return ret;
}

void Object::release()
{
    delete this;
}

void Object::setState(State* state)
{
    _exitState();
    _state = state;
    _enterState();
}

void Object::_exitState()
{
    if (_state) {
        _state->onExit();
    }
}

void Object::_enterState()
{
    if (_state) {
        _state->onEnter();
    }
}
///命名空间结束
}
