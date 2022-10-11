//
//  Bowl.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Bowl.hpp"

namespace builder_pattern {
Bowl* Bowl::create()
{
    Bowl* ret = new Bowl();
    return ret;
}

std::string Bowl::getName()
{
    return "碗";
}

float Bowl::getPrice()
{
    return 0.0f;
}
///命名空间结束
}
