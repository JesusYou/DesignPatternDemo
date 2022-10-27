//
//  WalkObserver.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef WalkObserver_hpp
#define WalkObserver_hpp

///项目代码
#include "Observer.hpp"

namespace observer_pattern {
class WalkObserver final : public Observer {
public:
    static WalkObserver* create();
    virtual void notify(kObjectState objectState) override;
    
private:
    WalkObserver() = default;
    ~WalkObserver() = default;
};
///命名空间结束
}

#endif /* WalkObserver_hpp */
