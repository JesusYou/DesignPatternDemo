//
//  Employee.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Employee.hpp"
///C系统库
#include <stdio.h>

namespace composite_pattern {
Employee* Employee::create(std::string name, int age, int salary, std::string dept)
{
    Employee* ret = new Employee();
    ret->_init(name, age, salary, dept);
    return ret;
}

void Employee::release()
{
    auto iter = _subordinates.begin();
    while (iter != _subordinates.end()) {
        Employee* employee = (*iter);
        iter = _subordinates.erase(iter);
        employee->release();
    }
    delete this;
}

void Employee::addSubordinate(Employee* employee)
{
    _subordinates.push_back(employee);
    employee->setLeader(this);
}

void Employee::setLeader(Employee* employee)
{
    _leader = employee;
}

void Employee::showEmployeeStructure()
{
    printf("姓名：%s，年龄：%d，薪资：%d，部门：%s\n", _name.c_str(), _age, _salary, _dept.c_str());
    for (Employee* subordinate : _subordinates) {
        subordinate->showEmployeeStructure();
    }
}

void Employee::_init(std::string name, int age, int salary, std::string dept)
{
    _name = "";
    _age = age;
    _salary = salary;
    _dept = dept;
}
///命名空间结束
}
