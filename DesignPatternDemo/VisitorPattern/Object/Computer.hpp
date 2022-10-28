//
//  Computer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Computer_hpp
#define Computer_hpp

///C++标准库
#include <vector>
///项目代码
#include "Object.hpp"

namespace visitor_pattern {
class Computer final : public Object {
public:
    static Computer* create();
    virtual void accept(Visitor* visitor) override;
    virtual void doSomething() override;
    
private:
    Computer() = default;
    ~Computer() = default;
    void _init();
    
private:
    std::vector<Object*> _components;
};
///命名空间结束
}

#endif /* Computer_hpp */
