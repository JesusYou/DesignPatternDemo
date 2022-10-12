//
//  Employee.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef Employee_hpp
#define Employee_hpp

///C++标准库
#include <string>
#include <vector>

namespace composite_pattern {
class Employee final {
public:
    static Employee* create(std::string name, int age, int salary, std::string dept);
    void release();
    void addSubordinate(Employee* employee);
    void setLeader(Employee* employee);
    void showEmployeeStructure();
    
private:
    Employee() = default;
    ~Employee() = default;
    void _init(std::string name, int age, int salary, std::string dept);
    
private:
    std::string _name = "";
    int _age = 0;
    int _salary = 0;
    std::string _dept = "";
    std::vector<Employee*> _subordinates;
    Employee* _leader = nullptr;
};
///命名空间结束
}

#endif /* Employee_hpp */
