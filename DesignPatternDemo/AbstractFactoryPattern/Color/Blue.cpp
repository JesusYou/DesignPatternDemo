//
//  Blue.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Blue.hpp"
///C系统库
#include <stdio.h>

namespace abstract_factory_pattern {
Blue* Blue::create()
{
    Blue* ret = new Blue();
    return ret;
}

void Blue::draw()
{
    printf("绘制蓝色\n");
}
///命名空间结束
}
