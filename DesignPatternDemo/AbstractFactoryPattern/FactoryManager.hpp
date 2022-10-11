//
//  FactoryManager.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef FactoryManager_hpp
#define FactoryManager_hpp

///项目代码
#include "Factory/AbstractFactory.hpp"
#include "Factory/ShapeFactory.hpp"
#include "Factory/ColorFactory.hpp"

namespace abstract_factory_pattern {
class FactoryManager final {
public:
    static FactoryManager* getInstance();
    static void destoryInstance();
    AbstractFactory* getFactory(kFactoryType type);
    
private:
    FactoryManager() = default;
    ~FactoryManager() = default;
    void _init();
    void _release();
    
private:
    static FactoryManager* _instance;
    ShapeFactory* _shapeFactory = nullptr;
    ColorFactory* _colorFactory = nullptr;
};
///命名空间结束
}

#endif /* FactoryManager_hpp */
