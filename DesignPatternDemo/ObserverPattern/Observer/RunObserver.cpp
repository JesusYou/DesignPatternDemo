//
//  RunObserver.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "RunObserver.hpp"
///C系统库
#include <stdio.h>

namespace observer_pattern {
RunObserver* RunObserver::create()
{
    RunObserver* ret = new RunObserver();
    return ret;
}

void RunObserver::notify(kObjectState objectState)
{
    if (objectState == kObjectState::Run) {
        printf("对象处于跑步状态\n");
    }
}
///命名空间结束
}
