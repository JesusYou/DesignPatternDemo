//
//  AviVideoPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef AviVideoPlayer_hpp
#define AviVideoPlayer_hpp

///C++标准库
#include <string>
///项目代码
#include "AdvanceVideoPlayer.hpp"

namespace adapter_pattern {
class AviVideoPlayer final : public AdvanceVideoPlayer {
public:
    static AviVideoPlayer* create();
    virtual void play(kMediaType type, std::string fileName) override;
    
private:
    AviVideoPlayer() = default;
    ~AviVideoPlayer() = default;
    void _playAviFile(std::string fileName);
};
///命名空间结束
}

#endif /* AviVideoPlayer_hpp */
