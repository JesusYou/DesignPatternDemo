//
//  ErrorLog.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef ErrorLog_hpp
#define ErrorLog_hpp

///C++标准库
#include <string>
///项目代码
#include "Log.hpp"

namespace chain_of_responsibility_pattern {
class ErrorLog final : public Log {
public:
    static ErrorLog* create(std::string logMessage);
    
private:
    ErrorLog() = default;
    ~ErrorLog() = default;
    virtual void _write() override;
    void _init(std::string logMessage);
};
///命名空间结束
}

#endif /* ErrorLog_hpp */
