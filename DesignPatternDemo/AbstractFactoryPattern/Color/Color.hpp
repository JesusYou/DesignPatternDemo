//
//  Color.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Color_hpp
#define Color_hpp

namespace abstract_factory_pattern {
enum class kColorType {
    UNKNOW,     ///未知颜色
    RED,        ///红色
    GREEN,      ///绿色
    BLUE        ///蓝色
};

class Color {
public:
    static Color* create();
    virtual void release();
    virtual void draw();
    
protected:
    Color() = default;
    virtual ~Color() = default;
};
///命名空间结束
}

#endif /* Color_hpp */
