//
//  Keyboard.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Keyboard_hpp
#define Keyboard_hpp

///项目代码
#include "Object.hpp"

namespace visitor_pattern {
class Keyboard final : public Object {
public:
    static Keyboard* create();
    virtual void accept(Visitor* visitor) override;
    virtual void doSomething() override;
    
private:
    Keyboard() = default;
    ~Keyboard() = default;
};
///命名空间结束
}

#endif /* Keyboard_hpp */
