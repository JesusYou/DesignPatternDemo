//
//  Circle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Circle.hpp"

namespace bridge_pattern {
Circle* Circle::create()
{
    Circle* ret = new Circle();
    return ret;
}

void Circle::draw()
{
    _drawApi->drawCircle(5, 5, 10);
}
///命名空间结束
}
