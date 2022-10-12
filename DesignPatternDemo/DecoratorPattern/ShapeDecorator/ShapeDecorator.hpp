//
//  ShapeDecorator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef ShapeDecorator_hpp
#define ShapeDecorator_hpp

///项目代码
#include "../Shape/Shape.hpp"

namespace decorator_pattern {
class ShapeDecorator {
public:
    virtual void release();
    virtual void bindShape(Shape* shape) final;
    virtual void draw() = 0;
    
protected:
    ShapeDecorator() = default;
    virtual ~ShapeDecorator() = default;
    
protected:
    Shape* _shape = nullptr;
};
///命名空间结束
}

#endif /* ShapeDecorator_hpp */
