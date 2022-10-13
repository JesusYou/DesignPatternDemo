//
//  RedCircle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef RedCircle_hpp
#define RedCircle_hpp

///项目代码
#include "../Circle.hpp"

namespace flyweight_pattern {
class RedCircle final : public Circle {
public:
    static RedCircle* create();
    virtual void draw() override;
    
private:
    RedCircle() = default;
    ~RedCircle() = default;
};
///命名空间结束
}

#endif /* RedCircle_hpp */
