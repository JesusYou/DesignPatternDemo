//
//  Director.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "Director.hpp"
///项目代码
#include "Object.hpp"
#include "Observer/StandObserver.hpp"
#include "Observer/CrouchObserver.hpp"
#include "Observer/WalkObserver.hpp"
#include "Observer/RunObserver.hpp"

namespace observer_pattern {
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
    StandObserver* standObserver = StandObserver::create();
    object->attach(standObserver);
    CrouchObserver* crouchObserver = CrouchObserver::create();
    object->attach(crouchObserver);
    WalkObserver* walkObserver = WalkObserver::create();
    object->attach(walkObserver);
    RunObserver* runObserver = RunObserver::create();
    object->attach(runObserver);
    object->awake();
}
///命名空间结束
}
