//
//  TerminalExpression.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "TerminalExpression.hpp"

namespace interpreter_pattern {
TerminalExpression* TerminalExpression::create(int data)
{
    TerminalExpression* ret = new TerminalExpression();
    ret->_init(data);
    return ret;
}

int TerminalExpression::interpret()
{
    return _data;
}

void TerminalExpression::_init(int data)
{
    _data = data;
}
///命名空间结束
}
