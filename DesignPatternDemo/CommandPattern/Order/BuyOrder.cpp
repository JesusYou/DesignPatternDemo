//
//  BuyOrder.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "BuyOrder.hpp"

namespace command_pattern {
BuyOrder* BuyOrder::create(Product* product)
{
    BuyOrder* ret = new BuyOrder();
    ret->_init(product);
    return ret;
}

void BuyOrder::exec()
{
    _product->buy();
}

void BuyOrder::_init(Product* product)
{
    _product = product;
}
///命名空间结束
}
