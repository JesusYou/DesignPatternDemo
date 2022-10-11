//
//  ColorFactory.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "ColorFactory.hpp"
///项目代码
#include "../Color/Red.hpp"
#include "../Color/Green.hpp"
#include "../Color/Blue.hpp"

namespace abstract_factory_pattern {
ColorFactory* ColorFactory::create()
{
    ColorFactory* ret = new ColorFactory();
    return ret;
}

void ColorFactory::release()
{
    delete this;
}

Color* ColorFactory::getColor(kColorType type)
{
    Color* ret = nullptr;
    switch (type) {
        case kColorType::RED:
            ret = Red::create();
            break;
        case kColorType::GREEN:
            ret = Green::create();
            break;
        case kColorType::BLUE:
            ret = Blue::create();
            break;
        default:
            ret = Color::create();
            break;
    }
    return ret;
}
///命名空间结束
}
