//
//  Image.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef Image_hpp
#define Image_hpp

///C++标准库
#include <string>

namespace proxy_pattern {
class Image {
public:
    virtual void release();
    virtual void display() = 0;
    virtual void printImageName() final;
    
protected:
    Image() = default;
    virtual ~Image() = default;
    
protected:
    std::string _imageName = "";
};
///命名空间结束
}

#endif /* Image_hpp */
