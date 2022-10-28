//
//  Mouse.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Mouse_hpp
#define Mouse_hpp

///项目代码
#include "Object.hpp"

namespace visitor_pattern {
class Mouse final : public Object {
public:
    static Mouse* create();
    virtual void accept(Visitor* visitor) override;
    virtual void doSomething() override;
    
private:
    Mouse() = default;
    ~Mouse() = default;
};
///命名空间结束
}

#endif /* Mouse_hpp */
