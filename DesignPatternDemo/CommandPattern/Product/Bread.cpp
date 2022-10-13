//
//  Bread.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Bread.hpp"

namespace command_pattern {
Bread* Bread::create()
{
    Bread* ret = new Bread();
    ret->_init();
    return ret;
}

void Bread::_init()
{
    _name = "面包";
}
///命名空间结束
}
