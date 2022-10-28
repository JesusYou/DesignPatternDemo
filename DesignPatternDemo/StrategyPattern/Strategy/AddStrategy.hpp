//
//  AddStrategy.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef AddStrategy_hpp
#define AddStrategy_hpp

///项目代码
#include "AlgorithmStrategy.hpp"

namespace strategy_pattern {
class AddStrategy final : public AlgorithmStrategy {
public:
    static AddStrategy* create();
    virtual int doWork(int firstNum, int secondNum) override;
    
private:
    AddStrategy() = default;
    ~AddStrategy() = default;
};
///命名空间结束
}

#endif /* AddStrategy_hpp */
