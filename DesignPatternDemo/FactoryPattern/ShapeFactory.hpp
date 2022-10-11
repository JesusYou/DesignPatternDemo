//
//  ShapeFactory.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef ShapeFactory_hpp
#define ShapeFactory_hpp

#include "Shape/Shape.hpp"

namespace factory_pattern {
class ShapeFactory final {
public:
    static ShapeFactory* getInstance();
    static void destoryInstance();
    Shape* getShape(kShapeType type);
    
private:
    ShapeFactory() = default;
    ~ShapeFactory() = default;
    
private:
    static ShapeFactory* _instance;
};
///命名空间结束
}

#endif /* ShapeFactory_hpp */
