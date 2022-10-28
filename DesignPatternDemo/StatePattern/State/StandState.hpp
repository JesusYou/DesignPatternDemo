//
//  StandState.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef StandState_hpp
#define StandState_hpp

#include "State.hpp"

namespace state_pattern {
class StandState final : public State {
public:
    static StandState* create();
    virtual void onEnter() override;
    virtual void onExit() override;
    
private:
    StandState() = default;
    ~StandState() = default;
};
///命名空间结束
}

#endif /* StandState_hpp */
