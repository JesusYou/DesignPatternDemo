//
//  CrouchObserver.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "CrouchObserver.hpp"
///C系统库
#include <stdio.h>

namespace observer_pattern {
CrouchObserver* CrouchObserver::create()
{
    CrouchObserver* ret = new CrouchObserver();
    return ret;
}

void CrouchObserver::notify(kObjectState objectState)
{
    if (objectState == kObjectState::Crouch) {
        printf("对象处于蹲下状态\n");
    }
}
///命名空间结束
}
