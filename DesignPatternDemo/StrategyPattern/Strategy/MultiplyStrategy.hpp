//
//  MultiplyStrategy.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef MultiplyStrategy_hpp
#define MultiplyStrategy_hpp

///项目代码
#include "AlgorithmStrategy.hpp"

namespace strategy_pattern {
class MultiplyStrategy final : public AlgorithmStrategy {
public:
    static MultiplyStrategy* create();
    virtual int doWork(int firstNum, int secondNum) override;
    
private:
    MultiplyStrategy() = default;
    ~MultiplyStrategy() = default;
};
///命名空间结束
}

#endif /* MultiplyStrategy_hpp */
