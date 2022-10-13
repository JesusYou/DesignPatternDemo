//
//  WarnLog.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef WarnLog_hpp
#define WarnLog_hpp

///C++标准库
#include <string>
///项目代码
#include "Log.hpp"

namespace chain_of_responsibility_pattern {
class WarnLog final : public Log {
public:
    static WarnLog* create(std::string logMessage);
    
private:
    WarnLog() = default;
    ~WarnLog() = default;
    virtual void _write() override;
    void _init(std::string logMessage);
};
///命名空间结束
}

#endif /* WarnLog_hpp */
