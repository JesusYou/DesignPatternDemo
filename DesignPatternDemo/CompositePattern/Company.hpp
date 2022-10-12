//
//  Company.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Company_hpp
#define Company_hpp

#include "Employee.hpp"

namespace composite_pattern {
class Company final {
public:
    static Company* create();
    void release();
    void showCompanyStructure();
    
private:
    Company() = default;
    ~Company() = default;
    void _init();
    
private:
    Employee* _ceo = nullptr;
};
///命名空间结束
}

#endif /* Company_hpp */
