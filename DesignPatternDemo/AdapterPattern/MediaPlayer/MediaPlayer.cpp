//
//  MediaPlayer.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#include "MediaPlayer.hpp"

namespace adapter_pattern {
void MediaPlayer::release()
{
    delete this;
}
///命名空间结束
}
