//
//  VideoAdapter.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef VideoAdapter_hpp
#define VideoAdapter_hpp

///C++标准库
#include <string>
#include <map>
///项目代码
#include "MediaPlayer/AdvanceVideoPlayer/AdvanceVideoPlayer.hpp"

namespace adapter_pattern {
class VideoAdapter final {
public:
    static VideoAdapter* create();
    void release();
    void play(kMediaType type, std::string fileName);
    
private:
    VideoAdapter() = default;
    ~VideoAdapter() = default;
    void _init();
    void _playMovFile(std::string fileName);
    void _playAviFile(std::string fileName);
    
private:
    std::map<kMediaType, AdvanceVideoPlayer*> _advanceVideoPlayerMap;
};
///命名空间结束
}

#endif /* VideoAdapter_hpp */
