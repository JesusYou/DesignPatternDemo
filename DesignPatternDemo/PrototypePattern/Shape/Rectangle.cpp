//
//  Rectangle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Rectangle.hpp"
///C系统库
#include <stdio.h>

namespace prototype_pattern {
Rectangle* Rectangle::create(kShapeType type)
{
    Rectangle* ret = new Rectangle();
    ret->_init(type);
    return ret;
}

void Rectangle::draw()
{
    printf("绘制矩形\n");
}
///命名空间结束
}
