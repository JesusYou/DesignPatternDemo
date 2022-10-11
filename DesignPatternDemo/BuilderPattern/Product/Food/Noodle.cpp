//
//  Noodle.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Noodle.hpp"
///项目代码
#include "../../Packing/Bowl.hpp"

namespace builder_pattern {
Noodle* Noodle::create()
{
    Noodle* ret = new Noodle();
    return ret;
}

std::string Noodle::getName()
{
    return "面条";
}

float Noodle::getPrice()
{
    return 6.0f;
}

void Noodle::packing()
{
    _packing = Bowl::create();
}
///命名空间结束
}
