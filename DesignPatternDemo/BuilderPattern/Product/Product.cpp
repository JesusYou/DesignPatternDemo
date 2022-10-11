//
//  Product.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Product.hpp"

namespace builder_pattern {
void Product::release()
{
    if (_packing) {
        _packing->release();
    }
    delete this;
}

std::string Product::getPackingName()
{
    std::string ret = "";
    if (_packing) {
        ret = _packing->getName();
    }
    return ret;
}

float Product::getPackingPrice()
{
    float ret = 0.0f;
    if (_packing) {
        ret = _packing->getPrice();
    }
    return ret;
}
///命名空间结束
}
