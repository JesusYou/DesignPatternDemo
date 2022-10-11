//
//  Rectangle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.hpp"

namespace factory_pattern {
class Rectangle : public Shape {
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
