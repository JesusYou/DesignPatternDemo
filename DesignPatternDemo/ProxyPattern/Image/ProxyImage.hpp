//
//  ProxyImage.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef ProxyImage_hpp
#define ProxyImage_hpp

///C++标准库
#include <string>
///项目代码
#include "Image.hpp"
#include "RealImage.hpp"

namespace proxy_pattern {
class ProxyImage final : public Image {
public:
    static ProxyImage* create(std::string imageName);
    virtual void display() override;
    
private:
    ProxyImage() = default;
    ~ProxyImage() = default;
    void _init(std::string imageName);
    
private:
    RealImage* _realImage = nullptr;
};
///命名空间结束
}

#endif /* ProxyImage_hpp */
