//
//  AlgorithmStrategy.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef AlgorithmStrategy_hpp
#define AlgorithmStrategy_hpp

namespace strategy_pattern {
class AlgorithmStrategy {
public:
    virtual void release() { delete this; }
    virtual int doWork(int firstNum, int secondNum) = 0;
    
protected:
    AlgorithmStrategy() = default;
    virtual ~AlgorithmStrategy() = default;
};
///命名空间结束
}

#endif /* AlgorithmStrategy_hpp */
