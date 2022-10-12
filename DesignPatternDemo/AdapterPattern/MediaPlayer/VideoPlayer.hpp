//
//  VideoPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef VideoPlayer_hpp
#define VideoPlayer_hpp

///C++标准库
#include <string>
///项目代码
#include "MediaPlayer.hpp"
#include "../VideoAdapter.hpp"

namespace adapter_pattern {
class VideoPlayer final : public MediaPlayer {
public:
    static VideoPlayer* create();
    void release() override;
    virtual void play(kMediaType type, std::string fileName) override;
    
private:
    VideoPlayer() = default;
    ~VideoPlayer() = default;
    void _init();
    void _playMp4File(std::string fileName);
    void _playDatFile(std::string fileName);
    
private:
    VideoAdapter* _videoAdapter = nullptr;
};
///命名空间结束
}

#endif /* VideoPlayer_hpp */
