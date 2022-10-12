//
//  Circle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Shape.hpp"

namespace prototype_pattern {
class Circle final : public Shape {
public:
    static Circle* create(kShapeType type);
    virtual void draw();
    
private:
    Circle() = default;
    ~Circle() = default;
};
///命名空间结束
}

#endif /* Circle_hpp */
