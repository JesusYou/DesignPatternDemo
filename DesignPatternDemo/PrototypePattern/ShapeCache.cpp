//
//  ShapeCache.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "ShapeCache.hpp"

namespace prototype_pattern {
ShapeCache* ShapeCache::create()
{
    ShapeCache* ret = new ShapeCache();
    ret->_init();
    return ret;
}

void ShapeCache::release()
{
    _rectangle->release();
    _square->release();
    _circle->release();
    delete this;
}

Shape* ShapeCache::getShape(kShapeType type)
{
    Shape* ret = nullptr;
    switch (type) {
        case kShapeType::CIRCLE:
            ret = _circle->clone();
            break;
        case kShapeType::SQUARE:
            ret = _square->clone();
            break;
        case kShapeType::RECTANGLE:
            ret = _rectangle->clone();
            break;
        default:
            break;
    }
    return ret;
}

void ShapeCache::_init()
{
    _circle = Circle::create(kShapeType::CIRCLE);
    _square = Square::create(kShapeType::SQUARE);
    _rectangle = Rectangle::create(kShapeType::RECTANGLE);
}
///命名空间结束
}
