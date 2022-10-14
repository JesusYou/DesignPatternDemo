//
//  SubExpression.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "SubExpression.hpp"

namespace interpreter_pattern {
SubExpression* SubExpression::create(Expression* expression1, Expression* expression2)
{
    SubExpression* ret = new SubExpression();
    ret->_init(expression1, expression2);
    return ret;
}

void SubExpression::release()
{
    _expression1->release();
    _expression2->release();
    delete this;
}

int SubExpression::interpret()
{
    return (_expression1->interpret() - _expression2->interpret());
}

void SubExpression::_init(Expression* expression1, Expression* expression2)
{
    _expression1 = expression1;
    _expression2 = expression2;
}
///命名空间结束
}
