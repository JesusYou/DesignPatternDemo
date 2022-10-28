//
//  Calculator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Calculator_hpp
#define Calculator_hpp

///项目代码
#include "Strategy/AlgorithmStrategy.hpp"

namespace strategy_pattern {
class Calculator final {
public:
    static Calculator* create();
    void release();
    void setFirstNum(int num);
    void setSecondNum(int num);
    int execStrategy(AlgorithmStrategy* algorithmStrategy);
    
private:
    Calculator() = default;
    ~Calculator() = default;
    
private:
    int _firstNum = 0;
    int _secondNum = 0;
};
///命名空间结束
}

#endif /* Calculator_hpp */
