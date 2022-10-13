//
//  Mike.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Mike_hpp
#define Mike_hpp

///项目代码
#include "Product.hpp"

namespace command_pattern {
class Mike final : public Product {
public:
    static Mike* create();
    
private:
    Mike() = default;
    ~Mike() = default;
    void _init();
};
///命名空间结束
}

#endif /* Mike_hpp */
