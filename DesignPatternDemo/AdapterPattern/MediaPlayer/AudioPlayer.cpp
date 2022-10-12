//
//  AudioPlayer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "AudioPlayer.hpp"
///C系统库
#include <stdio.h>

namespace adapter_pattern {
AudioPlayer* AudioPlayer::create()
{
    AudioPlayer* ret = new AudioPlayer();
    return ret;
}

void AudioPlayer::play(kMediaType type, std::string fileName)
{
    switch (type) {
        case kMediaType::MP3:
            _playMp3File(fileName);
            break;
        case kMediaType::OGG:
            _playOggFile(fileName);
            break;
        default:
            printf("无法播放该类型的多媒体文件");
            break;
    }
}

void AudioPlayer::_playMp3File(std::string fileName)
{
    printf("播放mp3格式的音频文件");
}

void AudioPlayer::_playOggFile(std::string fileName)
{
    printf("播放ogg格式的音频文件");
}
///命名空间结束
}
