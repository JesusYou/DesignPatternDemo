//
//  Observer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef Observer_hpp
#define Observer_hpp

///项目代码
#include "Object.hpp"

namespace observer_pattern {
class Observer {
public:
    void release() { delete this; }
    virtual void notify(kObjectState objectState) = 0;
    
protected:
    Observer() = default;
    virtual ~Observer() = default;
};
///命名空间结束
}

#endif /* Observer_hpp */
