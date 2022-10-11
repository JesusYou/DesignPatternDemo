//
//  Packing.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Packing_hpp
#define Packing_hpp

///C++标准库
#include <string>

namespace builder_pattern {
class Packing {
public:
    virtual void release() { delete this; }
    virtual std::string getName() = 0;
    virtual float getPrice() = 0;

protected:
    Packing() = default;
    virtual ~Packing() = default;
};
///命名空间结束
}

#endif /* Packing_hpp */
