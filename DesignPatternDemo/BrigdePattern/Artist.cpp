//
//  Artist.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Artist.hpp"
///项目代码
#include "Shape/Circle.hpp"
#include "Shape/Rectangle.hpp"
#include "DrawApi/DrawRedCircleApi.hpp"
#include "DrawApi/DrawRedRectangleApi.hpp"
#include "DrawApi/DrawGreenRectangleApi.hpp"

namespace bridge_pattern {
Artist* Artist::create()
{
    Artist* ret = new Artist();
    ret->_init();
    return ret;
}

void Artist::release()
{
    auto iter = _shapes.begin();
    while (iter != _shapes.end()) {
        Shape* shape = (*iter);
        iter = _shapes.erase(iter);
        shape->release();
    }
    delete this;
}

void Artist::drawShapes()
{
    for (Shape* shape : _shapes) {
        shape->draw();
    }
}

void Artist::_init()
{
    Circle* redCircle = Circle::create();
    DrawRedCircleApi* drawRedCircleApi = DrawRedCircleApi::create();
    redCircle->setDrawApi(drawRedCircleApi);
    _shapes.push_back(redCircle);
    Rectangle* redRectangle = Rectangle::create();
    DrawRedRectangleApi* drawRedRectangleApi = DrawRedRectangleApi::create();
    redRectangle->setDrawApi(drawRedRectangleApi);
    _shapes.push_back(redRectangle);
    Rectangle* greenRectangle = Rectangle::create();
    DrawGreenRectangleApi* drawGreenRectangleApi = DrawGreenRectangleApi::create();
    greenRectangle->setDrawApi(drawGreenRectangleApi);
    _shapes.push_back(greenRectangle);
}
///命名空间结束
}
