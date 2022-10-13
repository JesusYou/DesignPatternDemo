//
//  ShapeMaker.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "ShapeMaker.hpp"

namespace facade_pattern {
ShapeMaker* ShapeMaker::create()
{
    ShapeMaker* ret = new ShapeMaker();
    ret->_init();
    return ret;
}

void ShapeMaker::release()
{
    _rectangle->release();
    _square->release();
    _circle->release();
    delete this;
}

void ShapeMaker::drawCircle()
{
    _circle->draw();
}

void ShapeMaker::drawSquare()
{
    _square->draw();
}

void ShapeMaker::drawRectangle()
{
    _rectangle->draw();
}

void ShapeMaker::_init()
{
    _circle = Circle::create();
    _square = Square::create();
    _rectangle = Rectangle::create();
}
///命名空间结束
}
