//
//  GreenCircle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "GreenCircle.hpp"
///C系统库
#include <stdio.h>

namespace flyweight_pattern {
GreenCircle* GreenCircle::create()
{
    GreenCircle* ret = new GreenCircle();
    return ret;
}

void GreenCircle::draw()
{
    printf("绘制绿色圆形\n");
}
///命名空间结束
}
