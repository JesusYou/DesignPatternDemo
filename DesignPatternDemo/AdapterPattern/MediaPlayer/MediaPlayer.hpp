//
//  MediaPlayer.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef MediaPlayer_hpp
#define MediaPlayer_hpp

///项目代码
#include <string>

namespace adapter_pattern {
enum class kMediaType {
    MP3,    ///mp3音频格式
    OGG,    ///mp3音频格式
    MP4,    ///mp4视频格式
    DAT,    ///dat视频格式
    MOV,    ///mov视频格式
    AVI     ///avi视频格式
};

class MediaPlayer {
public:
    virtual void release();
    virtual void play(kMediaType type, std::string fileName) = 0;
    
protected:
    MediaPlayer() = default;
    virtual ~MediaPlayer() = default;
};
///命名空间结束
}

#endif /* MediaPlayer_hpp */
