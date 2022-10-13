//
//  ProxyImage.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "ProxyImage.hpp"
///C系统库
#include <stdio.h>

namespace proxy_pattern {
ProxyImage* ProxyImage::create(std::string imageName)
{
    ProxyImage* ret = new ProxyImage();
    ret->_init(imageName);
    return ret;
}

void ProxyImage::display()
{
    if (_realImage == nullptr) {
        _realImage = RealImage::create(_imageName);
    }
    _realImage->display();
}

void ProxyImage::_init(std::string imageName)
{
    _imageName = imageName;
}
///命名空间结束
}
