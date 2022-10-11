//
//  ColorFactory.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef ColorFactory_hpp
#define ColorFactory_hpp

///项目代码
#include "AbstractFactory.hpp"
#include "../Color/Color.hpp"

namespace abstract_factory_pattern {
class ColorFactory final : public AbstractFactory {
public:
    static ColorFactory* create();
    void release();
    Color* getColor(kColorType type);
    
private:
    ColorFactory() = default;
    ~ColorFactory() = default;
};
///命名空间结束
}

#endif /* ColorFactory_hpp */
