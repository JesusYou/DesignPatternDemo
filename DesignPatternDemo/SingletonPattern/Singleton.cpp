//
//  Singleton.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Singleton.hpp"

namespace singleton_pattern {
Singleton* Singleton::_instance = nullptr;

Singleton* Singleton::getInstance()
{
    if (_instance == nullptr) {
        _instance = new Singleton();
    }
    return _instance;
}

void Singleton::destoryInstance()
{
    if (_instance) {
        delete _instance;
        _instance = nullptr;
    }
}
///命名空间结束
}
