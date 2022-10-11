//
//  Product.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Product_hpp
#define Product_hpp

///C++标准库
#include <string>
///项目代码
#include "../Packing/Packing.hpp"

namespace builder_pattern {
class Product {
public:
    virtual void release();
    virtual std::string getName() = 0;
    virtual float getPrice() = 0;
    virtual void packing() = 0;
    virtual std::string getPackingName() final;
    virtual float getPackingPrice() final;
    
protected:
    Product() = default;
    virtual ~Product() = default;
    
protected:
    Packing* _packing = nullptr;
};
///命名空间结束
}

#endif /* Product_hpp */
