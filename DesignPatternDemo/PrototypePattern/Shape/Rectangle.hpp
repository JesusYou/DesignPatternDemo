//
//  Rectangle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.hpp"

namespace prototype_pattern {
class Rectangle final : public Shape {
public:
    static Rectangle* create(kShapeType type);
    virtual void draw();
    
private:
    Rectangle() = default;
    ~Rectangle() = default;
};
///命名空间结束
}

#endif /* Rectangle_hpp */
