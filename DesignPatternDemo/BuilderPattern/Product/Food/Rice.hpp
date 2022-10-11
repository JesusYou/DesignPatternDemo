//
//  Rice.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Rice_hpp
#define Rice_hpp

///项目代码
#include "../Product.hpp"

namespace builder_pattern {
class Rice final : public Product {
public:
    static Rice* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    virtual void packing() override;
    
private:
    Rice() = default;
    ~Rice() = default;
};
///命名空间结束
}

#endif /* Rice_hpp */
