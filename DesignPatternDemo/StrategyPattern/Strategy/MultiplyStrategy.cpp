//
//  MultiplyStrategy.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "MultiplyStrategy.hpp"

namespace strategy_pattern {
MultiplyStrategy* MultiplyStrategy::create()
{
    MultiplyStrategy* ret = new MultiplyStrategy();
    return ret;
}

int MultiplyStrategy::doWork(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}
///命名空间结束
}
