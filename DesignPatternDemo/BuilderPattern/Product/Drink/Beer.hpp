//
//  Beer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Beer_hpp
#define Beer_hpp

///项目代码
#include "../Product.hpp"

namespace builder_pattern {
class Beer final : public Product {
public:
    static Beer* create();
    virtual std::string getName() override;
    virtual float getPrice() override;
    virtual void packing() override;
    
private:
    Beer() = default;
    ~Beer() = default;
};
///命名空间结束
}

#endif /* Beer_hpp */
