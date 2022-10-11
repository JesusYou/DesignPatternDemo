//
//  Square.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Square.hpp"
///C系统库
#include <stdio.h>

namespace factory_pattern {
Square* Square::create()
{
    Square* ret = new Square();
    return ret;
}

void Square::draw()
{
    printf("绘制正方形\n");
}
///命名空间结束
}
