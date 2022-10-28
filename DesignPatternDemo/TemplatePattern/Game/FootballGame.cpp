//
//  FootballGame.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "FootballGame.hpp"
///C系统库
#include <stdio.h>

namespace template_pattern {
FootballGame* FootballGame::create()
{
    FootballGame* ret = new FootballGame();
    return ret;
}

void FootballGame::initGame()
{
    printf("初始化足球游戏\n");
}

void FootballGame::startGame()
{
    printf("开始足球游戏\n");
}

void FootballGame::endGame()
{
    printf("结束足球游戏\n");
}
///命名空间结束
}
