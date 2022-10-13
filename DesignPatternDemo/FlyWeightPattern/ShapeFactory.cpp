//
//  ShapeFactory.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "ShapeFactory.hpp"
///项目代码
#include "Shape/Circle/RedCircle.hpp"
#include "Shape/Circle/GreenCircle.hpp"
#include "Shape/Circle/BlueCircle.hpp"

namespace flyweight_pattern {
ShapeFactory* ShapeFactory::_instance = nullptr;

ShapeFactory* ShapeFactory::getInstance()
{
    if (_instance == nullptr) {
        _instance = new ShapeFactory();
    }
    return _instance;
}

void ShapeFactory::destoryInstance()
{
    if (_instance) {
        _instance->_release();
        delete _instance;
        _instance = nullptr;
    }
}

Circle* ShapeFactory::getCircle(kCircleColor color)
{
    Circle* ret = nullptr;
    if (_circleMap.find(color) != _circleMap.end()) {
        ret = _circleMap.at(color);
    } else {
        ret = _createCircle(color);
    }
    return ret;
}

void ShapeFactory::_release()
{
    auto iter = _circleMap.begin();
    while (iter != _circleMap.end()) {
        Circle* circle = iter->second;
        iter = _circleMap.erase(iter);
        circle->release();
    }
}

Circle* ShapeFactory::_createCircle(kCircleColor color)
{
    Circle* ret = nullptr;
    switch (color) {
        case kCircleColor::RED:
            ret = RedCircle::create();
            break;
        case kCircleColor::GREEN:
            ret = GreenCircle::create();
            break;
        case kCircleColor::BLUE:
            ret = BlueCircle::create();
            break;
        default:
            ret = Circle::create();
            break;
    }
    return ret;
}
///命名空间结束
}
