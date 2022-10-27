//
//  StandObserver.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "StandObserver.hpp"
///C系统库
#include <stdio.h>

namespace observer_pattern {
StandObserver* StandObserver::create()
{
    StandObserver* ret = new StandObserver();
    return ret;
}

void StandObserver::notify(kObjectState objectState)
{
    if (objectState == kObjectState::Stand) {
        printf("对象处于站立状态\n");
    }
}
///命名空间结束
}
