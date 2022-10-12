//
//  Artist.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Artist.hpp"
///项目代码
#include "ShapeDecorator/RedShapeDecorator.hpp"
#include "Shape/Circle.hpp"
#include "Shape/Rectangle.hpp"

namespace decorator_pattern {
Artist* Artist::create()
{
    Artist* ret = new Artist();
    return ret;
}

void Artist::release()
{
    delete this;
}

void Artist::drawShapes()
{
    RedShapeDecorator* redShapeDecorator = RedShapeDecorator::create();
    Circle* circle = Circle::create();
    redShapeDecorator->bindShape(circle);
    redShapeDecorator->draw();
    Rectangle* rectangle = Rectangle::create();
    redShapeDecorator->bindShape(rectangle);
    redShapeDecorator->draw();
    redShapeDecorator->release();
}
///命名空间结束
}
