//
//  Product.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Product_hpp
#define Product_hpp

///C++代码
#include <string>

namespace command_pattern {
class Product {
public:
    virtual void release();
    virtual void buy() final;
    virtual void sell() final;
    
protected:
    Product() = default;
    virtual ~Product() = default;
    
protected:
    std::string _name = "";
    
private:
    int _quantity = 0;
};
///命名空间结束
}

#endif /* Product_hpp */
