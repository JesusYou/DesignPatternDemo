//
//  ErrorLog.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "ErrorLog.hpp"
///C系统库
#include <stdio.h>

namespace chain_of_responsibility_pattern {
ErrorLog* ErrorLog::create(std::string logMessage)
{
    ErrorLog* ret = new ErrorLog();
    ret->_init(logMessage);
    return ret;
}

void ErrorLog::_write()
{
    printf("错误日志：%s", _logMessage.c_str());
}

void ErrorLog::_init(std::string logMessage)
{
    _type = kLogType::WARN;
    _logMessage = logMessage;
}
///命名空间结束
}
