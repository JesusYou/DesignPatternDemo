//
//  AddExpression.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "AddExpression.hpp"

namespace interpreter_pattern {
AddExpression* AddExpression::create(Expression* expression1, Expression* expression2)
{
    AddExpression* ret = new AddExpression();
    ret->_init(expression1, expression2);
    return ret;
}

void AddExpression::release()
{
    _expression1->release();
    _expression2->release();
    delete this;
}

int AddExpression::interpret()
{
    return (_expression1->interpret() + _expression2->interpret());
}

void AddExpression::_init(Expression* expression1, Expression* expression2)
{
    _expression1 = expression1;
    _expression2 = expression2;
}
///命名空间结束
}
