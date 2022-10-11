//
//  Mike.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Mike.hpp"
///项目代码
#include "../../Packing/Bottle.hpp"

namespace builder_pattern {
Mike* Mike::create()
{
    Mike* ret = new Mike();
    return ret;
}

std::string Mike::getName()
{
    return "牛奶";
}

float Mike::getPrice()
{
    return 3.0f;
}

void Mike::packing()
{
    _packing = Bottle::create();
}
///命名空间结束
}
