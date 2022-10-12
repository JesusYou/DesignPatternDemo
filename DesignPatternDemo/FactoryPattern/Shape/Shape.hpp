//
//  Shape.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Shape_hpp
#define Shape_hpp

namespace factory_pattern {
enum class kShapeType {
    UNKNOW,     ///未知形状
    CIRCLE,     ///圆形
    SQUARE,     ///正方形
    RECTANGLE   ///矩形
};

class Shape {
public:
    static Shape* create();
    virtual void release();
    virtual void draw();
    
protected:
    Shape() = default;
    virtual ~Shape() = default;
};
///命名空间结束
}

#endif /* Shape_hpp */
