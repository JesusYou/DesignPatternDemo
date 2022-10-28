//
//  State.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef State_hpp
#define State_hpp

namespace state_pattern {
class State {
public:
    void release() { delete this; }
    virtual void onEnter() = 0;
    virtual void onExit() = 0;
    
protected:
    State() = default;
    virtual ~State() = default;
};
///命名空间结束
}

#endif /* State_hpp */
