//
//  MementoManager.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "MementoManager.hpp"

namespace memento_pattern {
MementoManager* MementoManager::create()
{
    MementoManager* ret = new MementoManager();
    return ret;
}

void MementoManager::release()
{
    delete this;
}

void MementoManager::addMemento(Memento* memento)
{
    _mementos.push(memento);
}

Memento* MementoManager::getMemento()
{
    Memento* ret = nullptr;
    if (_mementos.empty() == false) {
        Memento* curMemento = _mementos.top();
        _mementos.pop();
        curMemento->release();
        if (_mementos.empty() == false) {
            ret = _mementos.top();
        }
    }
    return ret;
}
///命名空间结束
}
