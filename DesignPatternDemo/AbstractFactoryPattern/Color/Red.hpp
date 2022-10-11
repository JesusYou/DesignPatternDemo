//
//  Red.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Red_hpp
#define Red_hpp

///项目代码
#include "Color.hpp"

namespace abstract_factory_pattern {
class Red : public Color {
public:
    static Red* create();
    virtual void draw() override;
    
private:
    Red() = default;
    ~Red() = default;
};
///命名空间结束
}

#endif /* Red_hpp */
