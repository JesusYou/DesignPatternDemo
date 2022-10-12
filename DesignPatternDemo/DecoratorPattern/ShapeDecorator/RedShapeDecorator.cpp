//
//  RedShapeDecorator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "RedShapeDecorator.hpp"
///C系统库
#include <stdio.h>

namespace decorator_pattern {
RedShapeDecorator* RedShapeDecorator::create()
{
    RedShapeDecorator* ret = new RedShapeDecorator();
    return ret;
}

void RedShapeDecorator::draw()
{
    _shape->draw();
    _fillColor();
}

void RedShapeDecorator::_fillColor()
{
    printf("填充红色\n");
}
///命名空间结束
}
