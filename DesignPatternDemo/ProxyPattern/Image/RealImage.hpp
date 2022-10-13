//
//  RealImage.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef RealImage_hpp
#define RealImage_hpp

///C++标准库
#include <string>
///项目代码
#include "Image.hpp"

namespace proxy_pattern {
class RealImage final : public Image {
public:
    static RealImage* create(std::string imageName);
    virtual void display() override;
    
private:
    RealImage() = default;
    ~RealImage() = default;
    void _init(std::string imageName);
    void _loadImage();
};
///命名空间结束
}

#endif /* RealImage_hpp */
