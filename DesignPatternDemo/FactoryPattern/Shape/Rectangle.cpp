//
//  Rectangle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Rectangle.hpp"
///C系统库
#include <stdio.h>

namespace factory_pattern {
Rectangle* Rectangle::create()
{
    Rectangle* ret = new Rectangle();
    return ret;
}

void Rectangle::draw()
{
    printf("绘制三角形\n");
}
///命名空间结束
}
