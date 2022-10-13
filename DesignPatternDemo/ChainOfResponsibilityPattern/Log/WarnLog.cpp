//
//  WarnLog.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "WarnLog.hpp"
///C系统库
#include <stdio.h>

namespace chain_of_responsibility_pattern {
WarnLog* WarnLog::create(std::string logMessage)
{
    WarnLog* ret = new WarnLog();
    ret->_init(logMessage);
    return ret;
}

void WarnLog::_write()
{
    printf("警告日志：%s", _logMessage.c_str());
}

void WarnLog::_init(std::string logMessage)
{
    _type = kLogType::WARN;
    _logMessage = logMessage;
}
///命名空间结束
}
