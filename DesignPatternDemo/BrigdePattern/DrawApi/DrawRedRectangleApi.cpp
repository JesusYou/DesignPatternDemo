//
//  DrawRedRectangleApi.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "DrawRedRectangleApi.hpp"
///C系统库
#include <stdio.h>

namespace bridge_pattern {
DrawRedRectangleApi* DrawRedRectangleApi::create()
{
    DrawRedRectangleApi* ret = new DrawRedRectangleApi();
    return ret;
}

void DrawRedRectangleApi::drawCircle(int posX, int posY, int radius)
{
    printf("该api无法绘制圆形\n");
}

void DrawRedRectangleApi::drawSquare(int posX, int posY, int width, int height)
{
    printf("绘制红色矩形！坐标(%d，%d)，宽：%d，高：%d\n", posX, posY, width, height);
}
///命名空间结束
}
