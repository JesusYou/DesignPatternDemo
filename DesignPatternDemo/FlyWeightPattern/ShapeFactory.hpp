//
//  ShapeFactory.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef ShapeFactory_hpp
#define ShapeFactory_hpp

///C++标准库
#include <map>
///项目代码
#include "Shape/Circle.hpp"

namespace flyweight_pattern {
class ShapeFactory final {
public:
    static ShapeFactory* getInstance();
    static void destoryInstance();
    Circle* getCircle(kCircleColor color);
    
private:
    ShapeFactory() = default;
    ~ShapeFactory() = default;
    void _release();
    Circle* _createCircle(kCircleColor color);
    
private:
    static ShapeFactory* _instance;
    std::map<kCircleColor, Circle*> _circleMap;
};
///命名空间结束
}

#endif /* ShapeFactory_hpp */
