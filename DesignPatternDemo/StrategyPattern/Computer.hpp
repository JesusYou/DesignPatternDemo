//
//  Computer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Computer_hpp
#define Computer_hpp

namespace strategy_pattern {
class Computer final {
public:
    static Computer* create();
    void release();
    void testCalculator();
    
private:
    Computer() = default;
    ~Computer() = default;
};
///命名空间结束
}

#endif /* Computer_hpp */
