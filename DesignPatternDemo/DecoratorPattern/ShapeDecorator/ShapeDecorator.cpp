//
//  ShapeDecorator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "ShapeDecorator.hpp"

namespace decorator_pattern {
void ShapeDecorator::release()
{
    if (_shape) {
        _shape->release();
    }
    delete this;
}

void ShapeDecorator::bindShape(Shape* shape)
{
    _shape = shape;
}
///命名空间结束
}
