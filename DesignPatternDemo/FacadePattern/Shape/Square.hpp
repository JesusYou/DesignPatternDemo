//
//  Square.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Square_hpp
#define Square_hpp

///项目代码
#include "Shape.hpp"

namespace facade_pattern {
class Square final : public Shape {
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
