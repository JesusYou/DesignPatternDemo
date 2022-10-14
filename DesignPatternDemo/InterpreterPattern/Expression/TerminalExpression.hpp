//
//  TerminalExpression.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef TerminalExpression_hpp
#define TerminalExpression_hpp

///项目代码
#include "Expression.hpp"

namespace interpreter_pattern {
class TerminalExpression final : public Expression {
public:
    static TerminalExpression* create(int data);
    virtual int interpret() override;
    
private:
    TerminalExpression() = default;
    ~TerminalExpression() = default;
    void _init(int data);
    
private:
    int _data = 0;
};
///命名空间结束
}

#endif /* TerminalExpression_hpp */
