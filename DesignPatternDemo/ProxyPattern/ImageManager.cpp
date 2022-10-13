//
//  ImageManager.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "ImageManager.hpp"

namespace proxy_pattern {
ImageManager* ImageManager::create()
{
    ImageManager* ret = new ImageManager();
    ret->_init();
    return ret;
}

void ImageManager::release()
{
    _proxyImage->release();
    delete this;
}

void ImageManager::display()
{
    _proxyImage->display();
}

void ImageManager::printImageName()
{
    _proxyImage->printImageName();
}

void ImageManager::_init()
{
    _proxyImage = ProxyImage::create("superHero.png");
}
///命名空间结束
}
