//
//  ContainerTester.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef ContainerTester_hpp
#define ContainerTester_hpp

namespace iterator_pattern {
class ContainerTester final {
public:
    static ContainerTester* create();
    void release();
    void start();
    
private:
    ContainerTester() = default;
    ~ContainerTester() = default;
};
///命名空间结束
}

#endif /* ContainerTester_hpp */
