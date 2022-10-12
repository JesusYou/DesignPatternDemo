//
//  AviVideoPlayer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "AviVideoPlayer.hpp"

namespace adapter_pattern {
AviVideoPlayer* AviVideoPlayer::create()
{
    AviVideoPlayer* ret = new AviVideoPlayer();
    return ret;
}

void AviVideoPlayer::play(kMediaType type, std::string fileName)
{
    switch (type) {
        case kMediaType::AVI:
            _playAviFile(fileName);
            break;
        default:
            printf("无法播放该类型的多媒体文件");
            break;
    }
}

void AviVideoPlayer::_playAviFile(std::string fileName)
{
    printf("播放avi格式的视频文件");
}
///命名空间结束
}
