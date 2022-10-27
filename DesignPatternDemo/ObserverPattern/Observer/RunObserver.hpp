//
//  RunObserver.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef RunObserver_hpp
#define RunObserver_hpp

///项目代码
#include "Observer.hpp"

namespace observer_pattern {
class RunObserver final : public Observer {
public:
    static RunObserver* create();
    virtual void notify(kObjectState objectState) override;
    
private:
    RunObserver() = default;
    ~RunObserver() = default;
};
///命名空间结束
}

#endif /* RunObserver_hpp */
