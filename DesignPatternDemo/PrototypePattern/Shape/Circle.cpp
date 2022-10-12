//
//  Circle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Circle.hpp"
///C系统库
#include <stdio.h>

namespace prototype_pattern {
Circle* Circle::create(kShapeType type)
{
    Circle* ret = new Circle();
    ret->_init(type);
    return ret;
}

void Circle::draw()
{
    printf("绘制圆形\n");
}
///命名空间结束
}
