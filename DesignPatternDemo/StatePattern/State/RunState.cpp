//
//  RunState.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "RunState.hpp"
///C系统库
#include <stdio.h>

namespace state_pattern {
RunState* RunState::create()
{
    RunState* ret = new RunState();
    return ret;
}

void RunState::onEnter()
{
    printf("进入跑步状态\n");
}

void RunState::onExit()
{
    printf("退出跑步状态\n");
}
///命名空间结束
}
