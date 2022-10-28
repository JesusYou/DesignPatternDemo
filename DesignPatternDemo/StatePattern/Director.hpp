//
//  Director.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Director_hpp
#define Director_hpp

namespace state_pattern {
class Director final {
public:
    static Director* create();
    void release();
    void createObject();
    
private:
    Director() = default;
    ~Director() = default;
};
///命名空间结束
}

#endif /* Director_hpp */
