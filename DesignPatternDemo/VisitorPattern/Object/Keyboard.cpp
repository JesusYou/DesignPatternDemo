//
//  Keyboard.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Keyboard.hpp"
///C系统库
#include <stdio.h>


namespace visitor_pattern {
Keyboard* Keyboard::create()
{
    Keyboard* ret = new Keyboard();
    return ret;
}

void Keyboard::accept(Visitor* visitor)
{
    visitor->visit(this);
}

void Keyboard::doSomething()
{
    printf("执行键盘内部操作\n");
}
///命名空间结束
}
