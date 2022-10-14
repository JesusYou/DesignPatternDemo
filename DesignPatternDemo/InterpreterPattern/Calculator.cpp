//
//  Calculator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "Calculator.hpp"
///C系统库
#include <stdio.h>
///项目代码
#include "Expression/TerminalExpression.hpp"
#include "Expression/AddExpression.hpp"
#include "Expression/SubExpression.hpp"

namespace interpreter_pattern {
Calculator* Calculator::create()
{
    Calculator* ret = new Calculator();
    return ret;
}

void Calculator::release()
{
    delete this;
}

void Calculator::work()
{
    Expression* expression = _getExpression();
    int data = expression->interpret();
    printf("数据值：%d\n", data);
    expression->release();
}

Expression* Calculator::_getExpression()
{
    Expression* ret = nullptr;
    TerminalExpression* expression1 = TerminalExpression::create(3);
    TerminalExpression* expression2 = TerminalExpression::create(5);
    AddExpression* expression3 = AddExpression::create(expression1, expression2);
    TerminalExpression* expression4 = TerminalExpression::create(4);
    ret = SubExpression::create(expression3, expression4);
    return ret;
}
///命名空间结束
}
