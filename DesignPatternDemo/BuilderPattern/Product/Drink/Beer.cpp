//
//  Beer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Beer.hpp"
///项目代码
#include "../../Packing/Bottle.hpp"

namespace builder_pattern {
Beer* Beer::create()
{
    Beer* ret = new Beer();
    return ret;
}

std::string Beer::getName()
{
    return "啤酒";
}

float Beer::getPrice()
{
    return 5.0f;
}

void Beer::packing()
{
    _packing = Bottle::create();
}
///命名空间结束
}
