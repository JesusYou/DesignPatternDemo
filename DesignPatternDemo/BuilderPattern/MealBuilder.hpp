//
//  MealBuilder.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef MealBuilder_hpp
#define MealBuilder_hpp

///项目代码
#include "Meal.hpp"

namespace builder_pattern {
class MealBuilder final {
public:
    static MealBuilder* create();
    void release();
    Meal* getNoodleMeal();
    Meal* getRiceMeal();
    
private:
    MealBuilder() = default;
    ~MealBuilder() = default;
};
///命名空间结束
}

#endif /* MealBuilder_hpp */
