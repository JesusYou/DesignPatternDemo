//
//  Computer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Computer.hpp"
///C系统库
#include <stdio.h>
///项目代码
#include "Keyboard.hpp"
#include "Mouse.hpp"

namespace visitor_pattern {
Computer* Computer::create()
{
    Computer* ret = new Computer();
    ret->_init();
    return ret;
}

void Computer::accept(Visitor* visitor)
{
    for (Object* object : _components) {
        object->accept(visitor);
    }
    visitor->visit(this);
}

void Computer::doSomething()
{
    printf("执行电脑内部操作\n");
}

void Computer::_init()
{
    Keyboard* keyboard = Keyboard::create();
    _components.push_back(keyboard);
    Mouse* mouse = Mouse::create();
    _components.push_back(mouse);
}
///命名空间结束
}
