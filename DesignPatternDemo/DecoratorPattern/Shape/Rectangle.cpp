//
//  Rectangle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Rectangle.hpp"
///C系统库
#include <stdio.h>

namespace decorator_pattern {
Rectangle* Rectangle::create()
{
    Rectangle* ret = new Rectangle();
    return ret;
}

void Rectangle::draw()
{
    printf("绘制矩形\n");
}
///命名空间结束
}
