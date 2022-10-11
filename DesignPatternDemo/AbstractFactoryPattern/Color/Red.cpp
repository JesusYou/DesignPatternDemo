//
//  Red.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Red.hpp"
///C系统库
#include <stdio.h>

namespace abstract_factory_pattern {
Red* Red::create()
{
    Red* ret = new Red();
    return ret;
}

void Red::draw()
{
    printf("绘制红色\n");
}
///命名空间结束
}
