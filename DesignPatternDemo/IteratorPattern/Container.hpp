//
//  Container.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef Container_hpp
#define Container_hpp

///项目代码
#include "Iterator.hpp"

namespace iterator_pattern {
class Container final {
public:
    static Container* create();
    void release();
    void pushBack(int num);
    Iterator* begin() const;
    Iterator* end() const;
    
private:
    Container() = default;
    ~Container() = default;
    void _init();
    void _updateContainerSize();
    
private:
    int* _data = nullptr;
    int _containerSize = 10;
    int _containerIndex = 0;
};
///命名空间结束
}

#endif /* Container_hpp */
