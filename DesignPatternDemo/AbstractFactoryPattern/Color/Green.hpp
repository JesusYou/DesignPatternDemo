//
//  Green.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Green_hpp
#define Green_hpp

///项目代码
#include "Color.hpp"

namespace abstract_factory_pattern {
class Green: public Color {
public:
    static Green* create();
    virtual void draw() override;
    
private:
    Green() = default;
    ~Green() = default;
};
///命名空间结束
}

#endif /* Green_hpp */
