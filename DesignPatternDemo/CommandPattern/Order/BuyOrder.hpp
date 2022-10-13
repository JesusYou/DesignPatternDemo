//
//  BuyOrder.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef BuyOrder_hpp
#define BuyOrder_hpp

///项目代码
#include "Order.hpp"
#include "../Product/Product.hpp"

namespace command_pattern {
class BuyOrder final : public Order {
public:
    static BuyOrder* create(Product* product);
    virtual void exec() override;
    
protected:
    BuyOrder() = default;
    ~BuyOrder() = default;
    void _init(Product* product);
};
///命名空间结束
}

#endif /* BuyOrder_hpp */
