//
//  Log.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Log.hpp"

namespace chain_of_responsibility_pattern {
void Log::release()
{
    delete this;
}

void Log::printLogMessage(kLogType type)
{
    if (_type == type) {
        _write();
    }
    if (_nextLog) {
        _nextLog->printLogMessage(type);
    }
}

void Log::setNextLog(Log* nextLog)
{
    _nextLog = nextLog;
}
///命名空间结束
}
