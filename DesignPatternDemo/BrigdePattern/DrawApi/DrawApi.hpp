//
//  DrawApi.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef DrawApi_hpp
#define DrawApi_hpp

namespace bridge_pattern {
class DrawApi {
public:
    virtual void release() { delete this; }
    virtual void drawCircle(int posX, int posY, int radius) = 0;
    virtual void drawSquare(int posX, int posY, int width, int height) = 0;
    
protected:
    DrawApi() = default;
    virtual ~DrawApi() = default;
};
///命名空间结束
}

#endif /* DrawApi_hpp */
