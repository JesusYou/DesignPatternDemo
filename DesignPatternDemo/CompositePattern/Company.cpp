//
//  Company.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "Company.hpp"

namespace composite_pattern {
Company* Company::create()
{
    Company* ret = new Company();
    ret->_init();
    return ret;
}

void Company::release()
{
    delete this;
}

void Company::showCompanyStructure()
{
    _ceo->showEmployeeStructure();
}

void Company::_init()
{
    _ceo = Employee::create("James", 51, 50000, "董事会");
    Employee* programLeader = Employee::create("Love", 45, 35000, "程序");
    Employee* artLeader = Employee::create("Grey", 37, 35000, "美术");
    Employee* clientProgrammer = Employee::create("Martin", 27, 20000, "程序");
    Employee* serverProgrammer = Employee::create("Joe", 30, 23000, "程序");
    Employee* animators = Employee::create("Diana", 33, 21000, "美术");
    Employee* painter = Employee::create("Caitlin", 31, 20000, "美术");
    _ceo->addSubordinate(programLeader);
    _ceo->addSubordinate(artLeader);
    programLeader->addSubordinate(clientProgrammer);
    programLeader->addSubordinate(serverProgrammer);
    artLeader->addSubordinate(animators);
    artLeader->addSubordinate(painter);
}
///命名空间结束
}
