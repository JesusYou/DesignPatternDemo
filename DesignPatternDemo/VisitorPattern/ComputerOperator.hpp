//
//  ComputerOperator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef ComputerOperator_hpp
#define ComputerOperator_hpp

namespace visitor_pattern {
class ComputerOperator final {
public:
    static ComputerOperator* create();
    void release();
    void work();
    
private:
    ComputerOperator() = default;
    ~ComputerOperator() = default;
};
///命名空间结束
}

#endif /* ComputerOperator_hpp */
