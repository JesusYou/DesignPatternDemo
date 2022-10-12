//
//  RedShapeDecorator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef RedShapeDecorator_hpp
#define RedShapeDecorator_hpp

///项目代码
#include "ShapeDecorator.hpp"

namespace decorator_pattern {
class RedShapeDecorator final : public ShapeDecorator {
public:
    static RedShapeDecorator* create();
    virtual void draw() override;
    
private:
    RedShapeDecorator() = default;
    ~RedShapeDecorator() = default;
    void _fillColor();
};
///命名空间结束
}

#endif /* RedShapeDecorator_hpp */
