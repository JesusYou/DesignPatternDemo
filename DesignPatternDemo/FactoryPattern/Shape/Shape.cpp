//
//  Shape.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Shape.hpp"
///C系统库
#include <stdio.h>

namespace factory_pattern {
Shape* Shape::create()
{
    Shape* ret = new Shape();
    return ret;
}

void Shape::release()
{
    delete this;
}

void Shape::draw()
{
    printf("无法绘制抽象图形\n");
}
///命名空间结束
}
