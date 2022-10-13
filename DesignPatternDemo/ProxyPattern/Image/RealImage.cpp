//
//  RealImage.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "RealImage.hpp"
///C系统库
#include <stdio.h>

namespace proxy_pattern {
RealImage* RealImage::create(std::string imageName)
{
    RealImage* ret = new RealImage();
    ret->_init(imageName);
    return ret;
}

void RealImage::display()
{
    printf("绘制图片：%s\n", _imageName.c_str());
}

void RealImage::_init(std::string imageName)
{
    _imageName = imageName;
    _loadImage();
}

void RealImage::_loadImage()
{
    printf("将图片：%s加载至内存\n", _imageName.c_str());
}
///命名空间结束
}
