//
//  MovVideoPlayer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "MovVideoPlayer.hpp"

namespace adapter_pattern {
MovVideoPlayer* MovVideoPlayer::create()
{
    MovVideoPlayer* ret = new MovVideoPlayer();
    return ret;
}

void MovVideoPlayer::play(kMediaType type, std::string fileName)
{
    switch (type) {
        case kMediaType::MOV:
            _playMovFile(fileName);
            break;
        default:
            printf("无法播放该类型的多媒体文件");
            break;
    }
}

void MovVideoPlayer::_playMovFile(std::string fileName)
{
    printf("播放mov格式的视频文件");
}
///命名空间结束
}
