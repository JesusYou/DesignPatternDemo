//
//  ComputerOperator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "ComputerOperator.hpp"
///项目代码
#include "Object/Computer.hpp"
#include "Visitor/OperateVisitor.hpp"

namespace visitor_pattern {
ComputerOperator* ComputerOperator::create()
{
    ComputerOperator* ret = new ComputerOperator();
    return ret;
}

void ComputerOperator::release()
{
    delete this;
}

void ComputerOperator::work()
{
    Computer* computer = Computer::create();
    OperateVisitor* operateVisitor = OperateVisitor::create();
    computer->accept(operateVisitor);
}
///命名空间结束
}
