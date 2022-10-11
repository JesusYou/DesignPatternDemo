//
//  Bowl.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Bowl_hpp
#define Bowl_hpp

///项目代码
#include "Packing.hpp"

namespace builder_pattern {
class Bowl final : public Packing {
public:
    static Bowl* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    
private:
    Bowl() = default;
    ~Bowl() = default;
};
///命名空间结束
}

#endif /* Bowl_hpp */
