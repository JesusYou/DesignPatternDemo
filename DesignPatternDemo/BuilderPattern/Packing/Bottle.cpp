//
//  Bottle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Bottle.hpp"

namespace builder_pattern {
Bottle* Bottle::create()
{
    Bottle* ret = new Bottle();
    return ret;
}

std::string Bottle::getName()
{
    return "杯子";
}

float Bottle::getPrice()
{
    return 0.0f;
}
///命名空间结束
}
