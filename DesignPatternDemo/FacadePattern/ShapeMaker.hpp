//
//  ShapeMaker.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef ShapeMaker_hpp
#define ShapeMaker_hpp

///项目代码
#include "Shape/Circle.hpp"
#include "Shape/Square.hpp"
#include "Shape/Rectangle.hpp"

namespace facade_pattern {
class ShapeMaker final {
public:
    static ShapeMaker* create();
    void release();
    void drawCircle();
    void drawSquare();
    void drawRectangle();
    
private:
    ShapeMaker() = default;
    ~ShapeMaker() = default;
    void _init();
    
private:
    Circle* _circle = nullptr;
    Square* _square = nullptr;
    Rectangle* _rectangle = nullptr;
};
///命名空间结束
}

#endif /* ShapeMaker_hpp */
