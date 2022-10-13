//
//  GreenCircle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef GreenCircle_hpp
#define GreenCircle_hpp

///项目代码
#include "../Circle.hpp"

namespace flyweight_pattern {
class GreenCircle final : public Circle {
public:
    static GreenCircle* create();
    virtual void draw() override;
    
private:
    GreenCircle() = default;
    ~GreenCircle() = default;
};
///命名空间结束
}

#endif /* GreenCircle_hpp */
