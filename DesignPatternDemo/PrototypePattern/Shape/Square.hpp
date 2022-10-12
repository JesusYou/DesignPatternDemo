//
//  Square.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Square_hpp
#define Square_hpp

#include "Shape.hpp"

namespace prototype_pattern {
class Square final : public Shape {
public:
    static Square* create(kShapeType type);
    virtual void draw();
    
private:
    Square() = default;
    ~Square() = default;
};
///命名空间结束
}

#endif /* Square_hpp */
