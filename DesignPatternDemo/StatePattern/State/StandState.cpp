//
//  StandState.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "StandState.hpp"
///C系统库
#include <stdio.h>

namespace state_pattern {
StandState* StandState::create()
{
    StandState* ret = new StandState();
    return ret;
}

void StandState::onEnter()
{
    printf("进入站立状态\n");
}

void StandState::onExit()
{
    printf("退出站立状态\n");
}
///命名空间结束
}
