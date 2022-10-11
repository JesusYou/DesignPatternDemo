//
//  ShapeFactory.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef ShapeFactory_hpp
#define ShapeFactory_hpp

///项目代码
#include "AbstractFactory.hpp"
#include "../Shape/Shape.hpp"

namespace abstract_factory_pattern {
class ShapeFactory final : public AbstractFactory {
public:
    static ShapeFactory* create();
    void release();
    Shape* getShape(kShapeType type);
    
private:
    ShapeFactory() = default;
    ~ShapeFactory() = default;
};
///命名空间结束
}

#endif /* ShapeFactory_hpp */
