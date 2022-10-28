//
//  BasketballGame.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "BasketballGame.hpp"
///C系统库
#include <stdio.h>

namespace template_pattern {
BasketballGame* BasketballGame::create()
{
    BasketballGame* ret = new BasketballGame();
    return ret;
}

void BasketballGame::initGame()
{
    printf("初始化篮球游戏\n");
}

void BasketballGame::startGame()
{
    printf("开始篮球游戏\n");
}

void BasketballGame::endGame()
{
    printf("结束篮球游戏\n");
}
///命名空间结束
}
