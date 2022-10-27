//
//  MementoManager.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef MementoManager_hpp
#define MementoManager_hpp

///C++标准库
#include <stack>
///项目代码
#include "Memento.hpp"

namespace memento_pattern {
class MementoManager final {
public:
    static MementoManager* create();
    void release();
    void addMemento(Memento* memento);
    Memento* getMemento();
    
private:
    MementoManager() = default;
    ~MementoManager() = default;
    
private:
    std::stack<Memento*> _mementos;
};
///命名空间结束
}

#endif /* MementoManager_hpp */
