//
//  Square.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Square_hpp
#define Square_hpp

///项目代码
#include "Shape.hpp"

namespace abstract_factory_pattern {
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
