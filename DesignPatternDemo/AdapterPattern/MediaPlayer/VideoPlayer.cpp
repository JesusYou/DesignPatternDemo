//
//  VideoPlayer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "VideoPlayer.hpp"
///C系统库
#include <stdio.h>

namespace adapter_pattern {
VideoPlayer* VideoPlayer::create()
{
    VideoPlayer* ret = new VideoPlayer();
    ret->_init();
    return ret;
}

void VideoPlayer::release()
{
    _videoAdapter->release();
    delete this;
}

void VideoPlayer::play(kMediaType type, std::string fileName)
{
    switch (type) {
        case kMediaType::MP4:
            _playMp4File(fileName);
            break;
        case kMediaType::DAT:
            _playDatFile(fileName);
            break;
        default:
            _videoAdapter->play(type, fileName);
            break;
    }
}

void VideoPlayer::_init()
{
    _videoAdapter = VideoAdapter::create();
}

void VideoPlayer::_playMp4File(std::string fileName)
{
    printf("播放mp4格式的视频文件\n");
}

void VideoPlayer::_playDatFile(std::string fileName)
{
    printf("播放dat格式的视频文件\n");
}
///命名空间结束
}
