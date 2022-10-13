//
//  LogPrinter.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "LogPrinter.hpp"
///项目代码
#include "Log/NormalLog.hpp"
#include "Log/WarnLog.hpp"
#include "Log/ErrorLog.hpp"

namespace chain_of_responsibility_pattern {
LogPrinter* LogPrinter::create()
{
    LogPrinter* ret = new LogPrinter();
    return ret;
}

void LogPrinter::release()
{
    delete this;
}

void LogPrinter::printLog()
{
    Log* log = _getLog();
    log->printLogMessage(kLogType::NORMAL);
    log->printLogMessage(kLogType::WARN);
    log->printLogMessage(kLogType::ERROR);
}

Log* LogPrinter::_getLog()
{
    Log* ret = nullptr;
    ret = NormalLog::create("游戏启动\n");
    Log* log1 = NormalLog::create("开始初始化游戏\n");
    Log* log2 = WarnLog::create("存在音频文件初始化失败\n");
    Log* log3 = NormalLog::create("完成初始化游戏\n");
    Log* log4 = NormalLog::create("进入游戏关卡\n");
    Log* log5 = ErrorLog::create("缺少游戏关卡文件\n");
    Log* log6 = NormalLog::create("游戏退出\n");
    ret->setNextLog(log1);
    log1->setNextLog(log2);
    log2->setNextLog(log3);
    log3->setNextLog(log4);
    log4->setNextLog(log5);
    log5->setNextLog(log6);
    return ret;
}
///命名空间结束
}
