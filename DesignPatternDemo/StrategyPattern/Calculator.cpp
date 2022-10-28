//
//  Calculator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Calculator.hpp"

namespace strategy_pattern {
Calculator* Calculator::create()
{
    Calculator* ret = new Calculator();
    return ret;
}

void Calculator::release()
{
    delete this;
}

void Calculator::setFirstNum(int num)
{
    _firstNum = num;
}

void Calculator::setSecondNum(int num)
{
    _secondNum = num;
}

int Calculator::execStrategy(AlgorithmStrategy* algorithmStrategy)
{
    return algorithmStrategy->doWork(_firstNum, _secondNum);
}
///命名空间结束
}
