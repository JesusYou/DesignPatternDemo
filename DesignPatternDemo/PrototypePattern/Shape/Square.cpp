//
//  Square.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Square.hpp"
///C系统库
#include <stdio.h>

namespace prototype_pattern {
Square* Square::create(kShapeType type)
{
    Square* ret = new Square();
    ret->_init(type);
    return ret;
}

void Square::draw()
{
    printf("绘制正方形\n");
}
///命名空间结束
}
