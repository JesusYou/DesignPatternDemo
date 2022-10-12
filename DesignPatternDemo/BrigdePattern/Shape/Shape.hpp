//
//  Shape.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Shape_hpp
#define Shape_hpp

///项目代码
#include "../DrawApi/DrawApi.hpp"

namespace bridge_pattern {
class Shape {
public:
    virtual void release();
    virtual void setDrawApi(DrawApi* drawApi) final;
    virtual void draw() = 0;
    
protected:
    Shape() = default;
    virtual ~Shape() = default;
    
protected:
    DrawApi* _drawApi = nullptr;
};
///命名空间结束
}

#endif /* Shape_hpp */
