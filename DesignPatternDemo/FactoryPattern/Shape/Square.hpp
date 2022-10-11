//
//  Square.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Square_hpp
#define Square_hpp

#include "Shape.hpp"

namespace factory_pattern {
class Square : public Shape {
public:
    static Square* create();
    virtual void draw() override;
    
private:
    Square() = default;
    ~Square() = default;
};
///命名空间结束
}

#endif /* Square_hpp */
