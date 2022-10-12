//
//  AdvanceVideoPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef AdvanceVideoPlayer_hpp
#define AdvanceVideoPlayer_hpp

///项目代码
#include "MediaPlayer.hpp"

namespace adapter_pattern {
class AdvanceVideoPlayer : public MediaPlayer {
public:
    virtual void play(kMediaType type, std::string fileName) = 0;
    
protected:
    AdvanceVideoPlayer() = default;
    virtual ~AdvanceVideoPlayer() = default;
};
///命名空间结束
}

#endif /* AdvanceVideoPlayer_hpp */
