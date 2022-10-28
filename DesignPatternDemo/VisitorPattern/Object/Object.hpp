//
//  Object.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Object_hpp
#define Object_hpp

///项目代码
#include "../Visitor/Visitor.hpp"

namespace visitor_pattern {
class Object {
public:
    virtual void release() { delete this; }
    virtual void accept(Visitor* visitor) = 0;
    virtual void doSomething() = 0;
    
protected:
    Object() = default;
    virtual ~Object() = default;
};
///命名空间结束
}

#endif /* Object_hpp */
