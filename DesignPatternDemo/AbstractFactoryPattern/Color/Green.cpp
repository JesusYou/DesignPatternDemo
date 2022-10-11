//
//  Green.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Green.hpp"
///C系统库
#include <stdio.h>

namespace abstract_factory_pattern {
Green* Green::create()
{
    Green* ret = new Green();
    return ret;
}

void Green::draw()
{
    printf("绘制绿色\n");
}
///命名空间结束
}
