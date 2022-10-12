//
//  MovVideoPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef MovVideoPlayer_hpp
#define MovVideoPlayer_hpp

///C++标准库
#include <string>
///项目代码
#include "AdvanceVideoPlayer.hpp"

namespace adapter_pattern {
class MovVideoPlayer final : public AdvanceVideoPlayer {
public:
    static MovVideoPlayer* create();
    virtual void play(kMediaType type, std::string fileName) override;
    
private:
    MovVideoPlayer() = default;
    ~MovVideoPlayer() = default;
    void _playMovFile(std::string fileName);
};
///命名空间结束
}

#endif /* MovVideoPlayer_hpp */
