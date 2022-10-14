//
//  ContainerTester.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "ContainerTester.hpp"
///项目代码
#include "Container.hpp"

namespace iterator_pattern {
ContainerTester* ContainerTester::create()
{
    ContainerTester* ret = new ContainerTester();
    return ret;
}

void ContainerTester::release()
{
    delete this;
}

void ContainerTester::start()
{
    Container* container = Container::create();
    container->pushBack(1);
    container->pushBack(2);
    container->pushBack(3);
    container->pushBack(5);
    container->pushBack(8);
    container->pushBack(13);
    container->pushBack(21);
    container->pushBack(34);
    container->pushBack(55);
    container->pushBack(89);
    container->pushBack(144);
    container->pushBack(233);
    for (Iterator* iter = container->begin(); iter->isEqual(container->end()) == false; iter->next()) {
        iter->printValue();
    }
}
///命名空间结束
}
