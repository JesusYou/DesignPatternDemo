//
//  AudioPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef AudioPlayer_hpp
#define AudioPlayer_hpp

///C++标准库
#include <string>
///项目代码
#include "MediaPlayer.hpp"

namespace adapter_pattern {
class AudioPlayer final : public MediaPlayer {
public:
    static AudioPlayer* create();
    virtual void play(kMediaType type, std::string fileName) override;
    
private:
    AudioPlayer() = default;
    ~AudioPlayer() = default;
    void _playMp3File(std::string fileName);
    void _playOggFile(std::string fileName);
};
///命名空间结束
}

#endif /* AudioPlayer_hpp */
