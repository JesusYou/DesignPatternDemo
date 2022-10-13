//
//  LogPrinter.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef LogPrinter_hpp
#define LogPrinter_hpp

///项目代码
#include "Log/Log.hpp"

namespace chain_of_responsibility_pattern {
class LogPrinter final {
public:
    static LogPrinter* create();
    void release();
    void printLog();
    
private:
    LogPrinter() = default;
    ~LogPrinter() = default;
    Log* _getLog();
};
///命名空间结束
}

#endif /* LogPrinter_hpp */
