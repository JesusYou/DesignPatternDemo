//
//  Bottle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Bottle_hpp
#define Bottle_hpp

///项目代码
#include "Packing.hpp"

namespace builder_pattern {
class Bottle final : public Packing {
public:
    static Bottle* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    
private:
    Bottle() = default;
    ~Bottle() = default;
};
///命名空间结束
}

#endif /* Bottle_hpp */
