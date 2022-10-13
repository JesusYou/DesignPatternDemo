//
//  BlueCircle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "BlueCircle.hpp"
///C系统库
#include <stdio.h>

namespace flyweight_pattern {
BlueCircle* BlueCircle::create()
{
    BlueCircle* ret = new BlueCircle();
    return ret;
}

void BlueCircle::draw()
{
    printf("绘制蓝色圆形\n");
}
///命名空间结束
}
