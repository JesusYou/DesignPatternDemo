//
//  Blue.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Blue_hpp
#define Blue_hpp

///项目代码
#include "Color.hpp"

namespace abstract_factory_pattern {
class Blue : public Color {
public:
    static Blue* create();
    virtual void draw() override;
    
private:
    Blue() = default;
    ~Blue() = default;
};
///命名空间结束
}

#endif /* Blue_hpp */
