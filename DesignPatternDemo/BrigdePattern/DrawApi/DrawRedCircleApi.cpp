//
//  DrawRedCircleApi.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "DrawRedCircleApi.hpp"
///C系统库
#include <stdio.h>

namespace bridge_pattern {
DrawRedCircleApi* DrawRedCircleApi::create()
{
    DrawRedCircleApi* ret = new DrawRedCircleApi();
    return ret;
}

void DrawRedCircleApi::drawCircle(int posX, int posY, int radius)
{
    printf("绘制红色圆形！坐标(%d，%d)，半径：%d\n", posX, posY, radius);
}

void DrawRedCircleApi::drawSquare(int posX, int posY, int width, int height)
{
    printf("该api无法绘制矩形\n");
}
///命名空间结束
}
