//
//  Shape.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Shape.hpp"

namespace bridge_pattern {
void Shape::release()
{
    delete this;
}

void Shape::setDrawApi(DrawApi* drawApi)
{
    _drawApi = drawApi;
}
///命名空间结束
}
