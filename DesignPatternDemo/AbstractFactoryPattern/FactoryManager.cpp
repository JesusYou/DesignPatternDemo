//
//  FactoryManager.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "FactoryManager.hpp"

namespace abstract_factory_pattern {
FactoryManager* FactoryManager::_instance = nullptr;

FactoryManager* FactoryManager::getInstance()
{
    if (_instance == nullptr) {
        _instance = new FactoryManager();
        _instance->_init();
    }
    return _instance;
}

void FactoryManager::destoryInstance()
{
    if (_instance) {
        _instance->_release();
        delete _instance;
        _instance = nullptr;
    }
}

AbstractFactory* FactoryManager::getFactory(kFactoryType type)
{
    AbstractFactory* ret = nullptr;
    switch (type) {
        case kFactoryType::SHAPE:
            ret = _shapeFactory;
            break;
        case kFactoryType::COLOR:
            ret = _colorFactory;
            break;
        default:
            break;
    }
    return ret;
}

void FactoryManager::_init()
{
    _shapeFactory = ShapeFactory::create();
    _colorFactory = ColorFactory::create();
}

void FactoryManager::_release()
{
    _colorFactory->release();
    _shapeFactory->release();
}
///命名空间结束
}
