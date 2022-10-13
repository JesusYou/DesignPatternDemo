//
//  Log.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Log_hpp
#define Log_hpp

///C++标准库
#include <string>

namespace chain_of_responsibility_pattern {
enum class kLogType {
    UNKNOW,     ///未知类型
    NORMAL,     ///普通日志
    WARN,       ///警告日志
    ERROR       ///错误日志
};

class Log {
public:
    virtual void release();
    virtual void printLogMessage(kLogType type) final;
    virtual void setNextLog(Log* nextLog) final;
    
protected:
    Log() = default;
    virtual ~Log() = default;
    virtual void _write() = 0;
    
protected:
    kLogType _type = kLogType::UNKNOW;
    std::string _logMessage = "";
    
private:
    Log* _nextLog = nullptr;
};
///命名空间结束
}

#endif /* Log_hpp */
