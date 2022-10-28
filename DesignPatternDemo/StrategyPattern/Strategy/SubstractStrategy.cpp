//
//  SubstractStrategy.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "SubstractStrategy.hpp"

namespace strategy_pattern {
SubstractStrategy* SubstractStrategy::create()
{
    SubstractStrategy* ret = new SubstractStrategy();
    return ret;
}

int SubstractStrategy::doWork(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}
///命名空间结束
}
