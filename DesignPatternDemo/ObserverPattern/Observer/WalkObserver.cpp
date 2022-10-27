//
//  WalkObserver.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "WalkObserver.hpp"
///C系统库
#include <stdio.h>

namespace observer_pattern {
WalkObserver* WalkObserver::create()
{
    WalkObserver* ret = new WalkObserver();
    return ret;
}

void WalkObserver::notify(kObjectState objectState)
{
    if (objectState == kObjectState::Walk) {
        printf("对象处于行走状态\n");
    }
}
///命名空间结束
}
