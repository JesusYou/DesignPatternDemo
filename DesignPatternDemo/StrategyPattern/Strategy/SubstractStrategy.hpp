//
//  SubstractStrategy.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef SubstractStrategy_hpp
#define SubstractStrategy_hpp

///项目代码
#include "AlgorithmStrategy.hpp"

namespace strategy_pattern {
class SubstractStrategy final : public AlgorithmStrategy {
public:
    static SubstractStrategy* create();
    virtual int doWork(int firstNum, int secondNum) override;
    
private:
    SubstractStrategy() = default;
    ~SubstractStrategy() = default;
};
///命名空间结束
}

#endif /* SubstractStrategy_hpp */
