//
//  RunState.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef RunState_hpp
#define RunState_hpp

#include "State.hpp"

namespace state_pattern {
class RunState final : public State {
public:
    static RunState* create();
    virtual void onEnter() override;
    virtual void onExit() override;
    
private:
    RunState() = default;
    ~RunState() = default;
};
///命名空间结束
}

#endif /* RunState_hpp */
