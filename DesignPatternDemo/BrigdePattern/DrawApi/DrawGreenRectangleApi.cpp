//
//  DrawGreenRectangleApi.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "DrawGreenRectangleApi.hpp"
///C系统库
#include <stdio.h>

namespace bridge_pattern {
DrawGreenRectangleApi* DrawGreenRectangleApi::create()
{
    DrawGreenRectangleApi* ret = new DrawGreenRectangleApi();
    return ret;
}

void DrawGreenRectangleApi::drawCircle(int posX, int posY, int radius)
{
    printf("该api无法绘制圆形\n");
}

void DrawGreenRectangleApi::drawSquare(int posX, int posY, int width, int height)
{
    printf("绘制绿色矩形！坐标(%d，%d)，宽：%d，高：%d\n", posX, posY, width, height);
}
///命名空间结束
}
