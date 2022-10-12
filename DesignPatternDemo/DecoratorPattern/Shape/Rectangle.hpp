//
//  Rectangle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

///项目代码
#include "Shape.hpp"

namespace decorator_pattern {
class Rectangle final : public Shape {
public:
    static Rectangle* create();
    virtual void draw() override;
    
private:
    Rectangle() = default;
    ~Rectangle() = default;
};
///命名空间结束
}

#endif /* Rectangle_hpp */
