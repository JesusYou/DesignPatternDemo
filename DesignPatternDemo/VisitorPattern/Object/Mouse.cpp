//
//  Mouse.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "Mouse.hpp"
///C系统库
#include <stdio.h>

namespace visitor_pattern {
Mouse* Mouse::create()
{
    Mouse* ret = new Mouse();
    return ret;
}

void Mouse::accept(Visitor* visitor)
{
    visitor->visit(this);
}

void Mouse::doSomething()
{
    printf("执行鼠标内部操作\n");
}
///命名空间结束
}
