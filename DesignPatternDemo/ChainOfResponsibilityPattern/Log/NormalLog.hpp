//
//  NormalLog.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef NormalLog_hpp
#define NormalLog_hpp

///C++标准库
#include <string>
///项目代码
#include "Log.hpp"

namespace chain_of_responsibility_pattern {
class NormalLog final : public Log {
public:
    static NormalLog* create(std::string logMessage);
    
private:
    NormalLog() = default;
    ~NormalLog() = default;
    virtual void _write() override;
    void _init(std::string logMessage);
};
///命名空间结束
}

#endif /* NormalLog_hpp */
