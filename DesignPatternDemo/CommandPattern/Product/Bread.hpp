//
//  Bread.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Bread_hpp
#define Bread_hpp

///项目代码
#include "Product.hpp"

namespace command_pattern {
class Bread final : public Product {
public:
    static Bread* create();
    
private:
    Bread() = default;
    ~Bread() = default;
    void _init();
};
///命名空间结束
}

#endif /* Bread_hpp */
