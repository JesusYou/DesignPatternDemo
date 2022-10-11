//
//  Mike.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Mike_hpp
#define Mike_hpp

///项目代码
#include "../Product.hpp"

namespace builder_pattern {
class Mike final : public Product {
public:
    static Mike* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    virtual void packing() override;
    
private:
    Mike() = default;
    ~Mike() = default;
};
///命名空间结束
}

#endif /* Mike_hpp */
