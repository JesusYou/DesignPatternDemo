//
//  Rice.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Rice.hpp"
///项目代码
#include "../../Packing/Bowl.hpp"

namespace builder_pattern {
Rice* Rice::create()
{
    Rice* ret = new Rice();
    return ret;
}

std::string Rice::getName()
{
    return "米饭";
}

float Rice::getPrice()
{
    return 2.0f;
}

void Rice::packing()
{
    _packing = Bowl::create();
}
///命名空间结束
}
