//
//  OperateVisitor.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "OperateVisitor.hpp"
///C系统库
#include <stdio.h>
///项目代码
#include "../Object/Keyboard.hpp"
#include "../Object/Mouse.hpp"
#include "../Object/Computer.hpp"

namespace visitor_pattern {
OperateVisitor* OperateVisitor::create()
{
    OperateVisitor* ret = new OperateVisitor();
    return ret;
}

void OperateVisitor::visit(Keyboard* keyboard)
{
    printf("执行键盘外部操作\n");
    keyboard->doSomething();
}

void OperateVisitor::visit(Mouse* mouse)
{
    printf("执行鼠标外部操作\n");
    mouse->doSomething();
}

void OperateVisitor::visit(Computer* computer)
{
    printf("执行电脑外部操作\n");
    computer->doSomething();
}
///命名空间结束
}
