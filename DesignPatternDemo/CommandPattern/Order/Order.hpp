//
//  Order.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Order_hpp
#define Order_hpp

///项目代码
#include "../Product/Product.hpp"

namespace command_pattern {
class Order {
public:
    virtual void release() { delete this; }
    virtual void exec() = 0;
    
protected:
    Order() = default;
    virtual ~Order() = default;
    
protected:
    Product* _product = nullptr;
};
///命名空间结束
}

#endif /* Order_hpp */
