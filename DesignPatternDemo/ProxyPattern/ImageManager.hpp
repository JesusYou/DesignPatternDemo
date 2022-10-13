//
//  ImageManager.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef ImageManager_hpp
#define ImageManager_hpp

///项目代码
#include "Image/ProxyImage.hpp"

namespace proxy_pattern {
class ImageManager final {
public:
    static ImageManager* create();
    void release();
    void display();
    void printImageName();
    
private:
    ImageManager() = default;
    ~ImageManager() = default;
    void _init();
    
private:
    ProxyImage* _proxyImage = nullptr;
};
///命名空间结束
}

#endif /* ImageManager_hpp */
