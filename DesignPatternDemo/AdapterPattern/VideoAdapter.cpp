//
//  VideoAdapter.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "VideoAdapter.hpp"
///项目代码
#include "MediaPlayer/AdvanceVideoPlayer/MovVideoPlayer.hpp"
#include "MediaPlayer/AdvanceVideoPlayer/AviVideoPlayer.hpp"

namespace adapter_pattern {
VideoAdapter* VideoAdapter::create()
{
    VideoAdapter* ret = new VideoAdapter();
    ret->_init();
    return ret;
}

void VideoAdapter::release()
{
    auto iter = _advanceVideoPlayerMap.begin();
    while (iter != _advanceVideoPlayerMap.end()) {
        AdvanceVideoPlayer* advanceVideoPlayer = iter->second;
        iter = _advanceVideoPlayerMap.erase(iter);
        advanceVideoPlayer->release();
    }
    delete this;
}

void VideoAdapter::play(kMediaType type, std::string fileName)
{
    switch (type) {
        case kMediaType::MOV:
            _playMovFile(fileName);
            break;
        case kMediaType::AVI:
            _playAviFile(fileName);
            break;
        default:
            printf("无法播放该类型的多媒体文件\n");
            break;
    };
}

void VideoAdapter::_init()
{
    MovVideoPlayer* movVideoPlayer = MovVideoPlayer::create();
    _advanceVideoPlayerMap.emplace(kMediaType::MOV, movVideoPlayer);
    AviVideoPlayer* aviVideoPlayer = AviVideoPlayer::create();
    _advanceVideoPlayerMap.emplace(kMediaType::AVI, aviVideoPlayer);
}

void VideoAdapter::_playMovFile(std::string fileName)
{
    if (_advanceVideoPlayerMap.find(kMediaType::MOV) != _advanceVideoPlayerMap.end()) {
        AdvanceVideoPlayer* advanceVideoPlayer = _advanceVideoPlayerMap.at(kMediaType::MOV);
        advanceVideoPlayer->play(kMediaType::MOV, fileName);
    } else {
        printf("无法播放该类型的多媒体文件\n");
    }
}

void VideoAdapter::_playAviFile(std::string fileName)
{
    if (_advanceVideoPlayerMap.find(kMediaType::AVI) != _advanceVideoPlayerMap.end()) {
        AdvanceVideoPlayer* advanceVideoPlayer = _advanceVideoPlayerMap.at(kMediaType::AVI);
        advanceVideoPlayer->play(kMediaType::AVI, fileName);
    } else {
        printf("无法播放该类型的多媒体文件\n");
    }
}
///命名空间结束
}
