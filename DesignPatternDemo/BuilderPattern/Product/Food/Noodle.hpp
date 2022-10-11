//
//  Noodle.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Noodle_hpp
#define Noodle_hpp

///项目代码
#include "../Product.hpp"

namespace builder_pattern {
class Noodle final : public Product {
public:
    static Noodle* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    virtual void packing() override;
    
private:
    Noodle() = default;
    ~Noodle() = default;
};
///命名空间结束
}

#endif /* Noodle_hpp */
