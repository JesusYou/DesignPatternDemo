//
//  Image.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "Image.hpp"
///C系统库
#include <stdio.h>

namespace proxy_pattern {
void Image::release()
{
    delete this;
}

void Image::printImageName()
{
    printf("图片名：%s\n", _imageName.c_str());
}
///命名空间结束
}
