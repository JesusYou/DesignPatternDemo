//
//  Circle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Circle_hpp
#define Circle_hpp

///项目代码
#include "Shape.hpp"

namespace flyweight_pattern {
enum class kCircleColor {
    NONE,   ///无颜色
    RED,    ///红色
    GREEN,  ///绿色
    BLUE    ///蓝色
};

class Circle : public Shape {
public:
    static Circle* create();
    virtual void draw() override;
    
protected:
    Circle() = default;
    virtual ~Circle() = default;
};
///命名空间结束
}

#endif /* Circle_hpp */
