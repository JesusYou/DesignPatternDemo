//
//  WalkState.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "WalkState.hpp"
///C系统库
#include <stdio.h>

namespace state_pattern {
WalkState* WalkState::create()
{
    WalkState* ret = new WalkState();
    return ret;
}

void WalkState::onEnter()
{
    printf("进入行走状态\n");
}

void WalkState::onExit()
{
    printf("退出行走状态\n");
}
///命名空间结束
}
