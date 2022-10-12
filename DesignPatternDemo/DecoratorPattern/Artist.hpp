//
//  Artist.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Artist_hpp
#define Artist_hpp

namespace decorator_pattern {
class Artist final {
public:
    static Artist* create();
    void release();
    void drawShapes();
    
private:
    Artist() = default;
    ~Artist() = default;
};
///命名空间结束
}

#endif /* Artist_hpp */
