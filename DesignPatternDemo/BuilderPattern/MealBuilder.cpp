//
//  MealBuilder.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include "MealBuilder.hpp"
///项目代码
#include "Product/Food/Noodle.hpp"
#include "Product/Food/Rice.hpp"
#include "Product/Drink/Mike.hpp"
#include "Product/Drink/Beer.hpp"

namespace builder_pattern {
MealBuilder* MealBuilder::create()
{
    MealBuilder* ret = new MealBuilder();
    return ret;
}

void MealBuilder::release()
{
    delete this;
}

Meal* MealBuilder::getNoodleMeal()
{
    Meal* ret = Meal::create();
    Noodle* noodle = Noodle::create();
    noodle->packing();
    ret->addProduct(noodle);
    Mike* mike = Mike::create();
    mike->packing();
    ret->addProduct(mike);
    return ret;
}

Meal* MealBuilder::getRiceMeal()
{
    Meal* ret = Meal::create();
    Rice* rice = Rice::create();
    rice->packing();
    ret->addProduct(rice);
    Beer* beer = Beer::create();
    beer->packing();
    ret->addProduct(beer);
    return ret;
}
///命名空间结束
}
