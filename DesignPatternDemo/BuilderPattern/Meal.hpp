//
//  Meal.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Meal_hpp
#define Meal_hpp

///C++标准库
#include <vector>
///项目代码
#include "Product/Product.hpp"

namespace builder_pattern {
class Meal final {
public:
    static Meal* create();
    void release();
    void addProduct(Product* product);
    void printProducts();
    
private:
    Meal() = default;
    ~Meal() = default;
    
private:
    std::vector<Product*> _products;
};
///命名空间结束
}

#endif /* Meal_hpp */
