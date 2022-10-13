//
//  BlueCircle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef BlueCircle_hpp
#define BlueCircle_hpp

///项目代码
#include "../Circle.hpp"

namespace flyweight_pattern {
class BlueCircle final : public Circle {
public:
    static BlueCircle* create();
    virtual void draw() override;
    
private:
    BlueCircle() = default;
    ~BlueCircle() = default;
};
///命名空间结束
}

#endif /* BlueCircle_hpp */
