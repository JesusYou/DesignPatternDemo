//
//  DrawRedCircleApi.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef DrawRedCircleApi_hpp
#define DrawRedCircleApi_hpp

///项目代码
#include "DrawApi.hpp"

namespace bridge_pattern {
class DrawRedCircleApi : public DrawApi {
public:
    static DrawRedCircleApi* create();
    virtual void drawCircle(int posX, int posY, int radius) override;
    virtual void drawSquare(int posX, int posY, int width, int height) override;
    
private:
    DrawRedCircleApi() = default;
    ~DrawRedCircleApi() = default;
};
///命名空间结束
}

#endif /* DrawRedCircleApi_hpp */
