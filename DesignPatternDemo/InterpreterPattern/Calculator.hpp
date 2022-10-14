//
//  Calculator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef Calculator_hpp
#define Calculator_hpp

///项目代码
#include "Expression/Expression.hpp"

namespace interpreter_pattern {
class Calculator final {
public:
    static Calculator* create();
    void release();
    void work();
    
private:
    Calculator() = default;
    ~Calculator() = default;
    Expression* _getExpression();
    
private:
    static Calculator* _instance;
};
///命名空间结束
}

#endif /* Calculator_hpp */
