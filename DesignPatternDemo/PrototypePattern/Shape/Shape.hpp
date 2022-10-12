//
//  Shape.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Shape_hpp
#define Shape_hpp

namespace prototype_pattern {
enum class kShapeType {
    UNKNOW,     ///未知形状
    CIRCLE,     ///圆形
    SQUARE,     ///正方形
    RECTANGLE   ///矩形
};

class Shape {
public:
    static Shape* create(kShapeType type);
    virtual Shape* clone();
    virtual void release();
    virtual void draw();
    
protected:
    Shape() = default;
    virtual ~Shape() = default;
    void _init(kShapeType type);
    
protected:
    kShapeType _type = kShapeType::UNKNOW;
};
///命名空间结束
}

#endif /* Shape_hpp */
