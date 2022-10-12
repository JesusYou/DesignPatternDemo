//
//  DrawRedRectangleApi.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef DrawRedRectangleApi_hpp
#define DrawRedRectangleApi_hpp

///项目代码
#include "DrawApi.hpp"

namespace bridge_pattern {
class DrawRedRectangleApi : public DrawApi {
public:
    static DrawRedRectangleApi* create();
    virtual void drawCircle(int posX, int posY, int radius) override;
    virtual void drawSquare(int posX, int posY, int width, int height) override;
    
private:
    DrawRedRectangleApi() = default;
    ~DrawRedRectangleApi() = default;
};
///命名空间结束
}

#endif /* DrawRedRectangleApi_hpp */
