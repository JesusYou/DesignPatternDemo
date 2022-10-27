//
//  CrouchObserver.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef CrouchObserver_hpp
#define CrouchObserver_hpp

///项目代码
#include "Observer.hpp"

namespace observer_pattern {
class CrouchObserver final : public Observer {
public:
    static CrouchObserver* create();
    virtual void notify(kObjectState objectState) override;
    
private:
    CrouchObserver() = default;
    ~CrouchObserver() = default;
};
///命名空间结束
}

#endif /* CrouchObserver_hpp */
