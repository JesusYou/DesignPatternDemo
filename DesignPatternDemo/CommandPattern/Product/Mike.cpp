//
//  Mike.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Mike.hpp"

namespace command_pattern {
Mike* Mike::create()
{
    Mike* ret = new Mike();
    ret->_init();
    return ret;
}

void Mike::_init()
{
    _name = "牛奶";
}
///命名空间结束
}
