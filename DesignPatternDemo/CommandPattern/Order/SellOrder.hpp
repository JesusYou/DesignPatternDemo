//
//  SellOrder.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef SellOrder_hpp
#define SellOrder_hpp

///项目代码
#include "Order.hpp"

namespace command_pattern {
class SellOrder final : public Order {
public:
    static SellOrder* create(Product* product);
    virtual void exec() override;
    
protected:
    SellOrder() = default;
    ~SellOrder() = default;
    void _init(Product* product);
};
///命名空间结束
}

#endif /* SellOrder_hpp */
