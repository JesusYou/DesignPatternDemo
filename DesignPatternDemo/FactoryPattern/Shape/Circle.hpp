//
//  Circle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Shape.hpp"

namespace factory_pattern {
class Circle : public Shape {
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
