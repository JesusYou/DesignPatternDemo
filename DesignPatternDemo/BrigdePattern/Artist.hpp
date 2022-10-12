//
//  Artist.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Artist_hpp
#define Artist_hpp

///C++标准库
#include <vector>
///项目代码
#include "Shape/Shape.hpp"

namespace bridge_pattern {
class Artist final {
public:
    static Artist* create();
    void release();
    void drawShapes();
    
private:
    Artist() = default;
    ~Artist() = default;
    void _init();
    
private:
    std::vector<Shape*> _shapes;
};
///命名空间结束
}

#endif /* Artist_hpp */
