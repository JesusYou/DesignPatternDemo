//
//  Computer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Computer.hpp"
///C系统库
#include <stdio.h>
///项目代码
#include "Calculator.hpp"
#include "Strategy/AddStrategy.hpp"
#include "Strategy/SubstractStrategy.hpp"
#include "Strategy/MultiplyStrategy.hpp"

namespace strategy_pattern {
Computer* Computer::create()
{
    Computer* ret = new Computer();
    return ret;
}

void Computer::release()
{
    delete this;
}

void Computer::testCalculator()
{
    Calculator* calculator = Calculator::create();
    calculator->setFirstNum(9);
    calculator->setSecondNum(5);
    AddStrategy* addStrategy = AddStrategy::create();
    int addValue = calculator->execStrategy(addStrategy);
    printf("9 + 5 = %d\n", addValue);
    SubstractStrategy* substractStrategy = SubstractStrategy::create();
    int substractValue = calculator->execStrategy(substractStrategy);
    printf("9 - 5 = %d\n", substractValue);
    MultiplyStrategy* multiplyStrategy = MultiplyStrategy::create();
    int multiplyValue = calculator->execStrategy(multiplyStrategy);
    printf("9 * 5 = %d\n", multiplyValue);
}
///命名空间结束
}
