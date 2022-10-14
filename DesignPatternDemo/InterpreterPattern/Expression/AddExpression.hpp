//
//  AddExpression.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef AddExpression_hpp
#define AddExpression_hpp

///项目代码
#include "Expression.hpp"

namespace interpreter_pattern {
class AddExpression final : public Expression {
public:
    static AddExpression* create(Expression* expression1, Expression* expression2);
    virtual void release() override;
    virtual int interpret() override;
    
private:
    AddExpression() = default;
    ~AddExpression() = default;
    void _init(Expression* expression1, Expression* expression2);
    
private:
    Expression* _expression1 = nullptr;
    Expression* _expression2 = nullptr;
};
///命名空间结束
}

#endif /* AddExpression_hpp */
