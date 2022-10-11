//
//  AbstractFactory.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

namespace abstract_factory_pattern {
enum class kFactoryType {
    SHAPE,  ///图形工厂
    COLOR   ///颜色工厂
};

class AbstractFactory {
protected:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;
};
///命名空间结束
}

#endif /* AbstractFactory_hpp */
