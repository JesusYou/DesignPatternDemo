//
//  AddStrategy.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "AddStrategy.hpp"

namespace strategy_pattern {
AddStrategy* AddStrategy::create()
{
    AddStrategy* ret = new AddStrategy();
    return ret;
}

int AddStrategy::doWork(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}
///命名空间结束
}
