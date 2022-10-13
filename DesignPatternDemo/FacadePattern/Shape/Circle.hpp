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

namespace facade_pattern {
class Circle final : public Shape {
public:
    static Circle* create();
    virtual void draw() override;
    
private:
    Circle() = default;
    ~Circle() = default;
};
///命名空间结束
}

#endif /* Circle_hpp */
