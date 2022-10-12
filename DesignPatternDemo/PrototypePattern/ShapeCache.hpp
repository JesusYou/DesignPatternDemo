//
//  ShapeCache.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef ShapeCache_hpp
#define ShapeCache_hpp

#include "Shape/Shape.hpp"
#include "Shape/Circle.hpp"
#include "Shape/Square.hpp"
#include "Shape/Rectangle.hpp"

namespace prototype_pattern {
class ShapeCache final {
public:
    static ShapeCache* create();
    void release();
    Shape* getShape(kShapeType type);
    
private:
    ShapeCache() = default;
    ~ShapeCache() = default;
    void _init();
    
private:
    Circle* _circle = nullptr;
    Square* _square = nullptr;
    Rectangle* _rectangle = nullptr;
};
///命名空间结束
}

#endif /* ShapeCache_hpp */
