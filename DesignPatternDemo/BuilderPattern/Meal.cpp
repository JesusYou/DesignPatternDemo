//
//  Meal.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "Meal.hpp"
///C系统库
#include <stdio.h>

namespace builder_pattern {
Meal* Meal::create()
{
    Meal* ret = new Meal();
    return ret;
}

void Meal::release()
{
    auto iter = _products.begin();
    while (iter != _products.end()) {
        Product* product = (*iter);
        iter = _products.erase(iter);
        product->release();
    }
}

void Meal::addProduct(Product* product)
{
    _products.push_back(product);
}

void Meal::printProducts()
{
    for (Product* product : _products) {
        std::string productName = product->getName();
        float productPrice = product->getPrice();
        printf("商品：%s，价格：%f\n", productName.c_str(), productPrice);
        std::string packingName = product->getPackingName();
        if (packingName.empty() == false) {
            float packingPrice = product->getPackingPrice();
            printf("商品：%s，价格：%f\n", packingName.c_str(), packingPrice);
        }
    }
}
///命名空间结束
}
