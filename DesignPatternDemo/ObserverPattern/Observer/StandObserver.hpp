//
//  StandObserver.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef StandObserver_hpp
#define StandObserver_hpp

///项目代码
#include "Observer.hpp"

namespace observer_pattern {
class StandObserver final : public Observer {
public:
    static StandObserver* create();
    virtual void notify(kObjectState objectState) override;
    
private:
    StandObserver() = default;
    ~StandObserver() = default;
};
///命名空间结束
}

#endif /* StandObserver_hpp */
