//
//  Shape.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Shape_hpp
#define Shape_hpp

namespace facade_pattern {
class Shape {
public:
    virtual void release() { delete this; }
    virtual void draw() = 0;
    
protected:
    Shape() = default;
    virtual ~Shape() = default;
};
///命名空间结束
}

#endif /* Shape_hpp */
