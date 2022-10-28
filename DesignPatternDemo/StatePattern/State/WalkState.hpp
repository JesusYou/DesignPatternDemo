//
//  WalkState.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef WalkState_hpp
#define WalkState_hpp

#include "State.hpp"

namespace state_pattern {
class WalkState final : public State {
public:
    static WalkState* create();
    virtual void onEnter() override;
    virtual void onExit() override;
    
private:
    WalkState() = default;
    ~WalkState() = default;
};
///命名空间结束
}

#endif /* WalkState_hpp */
