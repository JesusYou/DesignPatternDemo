//
//  Rectangle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Rectangle.hpp"

namespace bridge_pattern {
Rectangle* Rectangle::create()
{
    Rectangle* ret = new Rectangle();
    return ret;
}

void Rectangle::draw()
{
    _drawApi->drawSquare(0, 0, 5, 10);
}
///命名空间结束
}
