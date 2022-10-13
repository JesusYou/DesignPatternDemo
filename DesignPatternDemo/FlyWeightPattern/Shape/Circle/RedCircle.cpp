//
//  RedCircle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "RedCircle.hpp"
///C系统库
#include <stdio.h>

namespace flyweight_pattern {
RedCircle* RedCircle::create()
{
    RedCircle* ret = new RedCircle();
    return ret;
}

void RedCircle::draw()
{
    printf("绘制红色圆形\n");
}
///命名空间结束
}
