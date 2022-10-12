//
//  Shape.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Shape.hpp"
///C系统库
#include <stdio.h>

namespace prototype_pattern {
Shape* Shape::create(kShapeType type)
{
    Shape* ret = new Shape();
    ret->_init(type);
    return ret;
}

Shape* Shape::clone()
{
    Shape* ret = new Shape();
    ret->_init(_type);
    return ret;
}

void Shape::release()
{
    delete this;
}

void Shape::draw()
{
    printf("无法绘制抽象图形\n");
}

void Shape::_init(kShapeType type)
{
    _type = type;
}
///命名空间结束
}
