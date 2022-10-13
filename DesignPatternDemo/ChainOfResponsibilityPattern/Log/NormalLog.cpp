//
//  NormalLog.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "NormalLog.hpp"
///C系统库
#include <stdio.h>

namespace chain_of_responsibility_pattern {
NormalLog* NormalLog::create(std::string logMessage)
{
    NormalLog* ret = new NormalLog();
    ret->_init(logMessage);
    return ret;
}

void NormalLog::_write()
{
    printf("普通日志：%s", _logMessage.c_str());
}

void NormalLog::_init(std::string logMessage)
{
    _type = kLogType::NORMAL;
    _logMessage = logMessage;
}
///命名空间结束
}
