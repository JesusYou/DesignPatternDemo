//
//  Color.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Color.hpp"
///C系统库
#include <stdio.h>

namespace abstract_factory_pattern {
Color* Color::create()
{
    Color* ret = new Color();
    return ret;
}

void Color::release()
{
    delete this;
}

void Color::draw()
{
    printf("无法绘制抽象颜色\n");
}
///命名空间结束
}
