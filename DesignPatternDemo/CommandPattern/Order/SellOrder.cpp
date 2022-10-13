//
//  SellOrder.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "SellOrder.hpp"

namespace command_pattern {
SellOrder* SellOrder::create(Product* product)
{
    SellOrder* ret = new SellOrder();
    ret->_init(product);
    return ret;
}

void SellOrder::exec()
{
    _product->sell();
}

void SellOrder::_init(Product* product)
{
    _product = product;
}
///命名空间结束
}
