//
//  ShapeFactory.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "ShapeFactory.hpp"
///项目代码
#include "Shape/Circle.hpp"
#include "Shape/Square.hpp"
#include "Shape/Rectangle.hpp"

namespace factory_pattern {
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
        delete _instance;
        _instance = nullptr;
    }
}

Shape* ShapeFactory::getShape(kShapeType type)
{
    Shape* ret = nullptr;
    switch (type) {
        case kShapeType::CIRCLE:
            ret = Circle::create();
            break;
        case kShapeType::SQUARE:
            ret = Square::create();
            break;
        case kShapeType::RECTANGLE:
            ret = Rectangle::create();
            break;
        default:
            ret = Shape::create();
            break;
    }
    return ret;
}
///命名空间结束
}
