//
//  Director.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Director.hpp"
///项目代码
#include "Object.hpp"
#include "State/StandState.hpp"
#include "State/WalkState.hpp"
#include "State/RunState.hpp"

namespace state_pattern {
Director* Director::create()
{
    Director* ret = new Director();
    return ret;
}

void Director::release()
{
    delete this;
}

void Director::createObject()
{
    Object* object = Object::create();
    StandState* standState = StandState::create();
    WalkState* walkState = WalkState::create();
    RunState* runState = RunState::create();
    object->setState(standState);
    object->setState(walkState);
    object->setState(runState);
    object->setState(walkState);
    object->setState(standState);
}
///命名空间结束
}
