//
//  SubExpression.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef SubExpression_hpp
#define SubExpression_hpp

///项目代码
#include "Expression.hpp"

namespace interpreter_pattern {
class SubExpression final : public Expression {
public:
    static SubExpression* create(Expression* expression1, Expression* expression2);
    virtual void release() override;
    virtual int interpret() override;
    
private:
    SubExpression() = default;
    ~SubExpression() = default;
    void _init(Expression* expression1, Expression* expression2);
    
private:
    Expression* _expression1 = nullptr;
    Expression* _expression2 = nullptr;
};
///命名空间结束
}

#endif /* SubExpression_hpp */
