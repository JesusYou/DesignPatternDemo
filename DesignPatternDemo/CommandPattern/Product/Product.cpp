//
//  Product.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Product.hpp"
///C系统库
#include <stdio.h>

namespace command_pattern {
void Product::release()
{
    delete this;
}

void Product::buy()
{
    _quantity += 1;
    printf("购买商品：%s，剩余商品数量：%d\n", _name.c_str(), _quantity);
}

void Product::sell()
{
    if (_quantity > 0) {
        _quantity -= 1;
        printf("卖出商品：%s，剩余商品数量：%d\n", _name.c_str(), _quantity);
    } else {
        printf("%s数量不足", _name.c_str());
    }
}
///命名空间结束
}
