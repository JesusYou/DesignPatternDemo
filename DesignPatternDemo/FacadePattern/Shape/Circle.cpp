//
//  Circle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Circle.hpp"
///C系统库
#include <stdio.h>

namespace facade_pattern {
Circle* Circle::create()
{
    Circle* ret = new Circle();
    return ret;
}

void Circle::draw()
{
    printf("绘制圆形\n");
}
///命名空间结束
}
