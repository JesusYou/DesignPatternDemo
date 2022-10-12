//
//  DrawGreenRectangleApi.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/12.
//

#ifndef DrawGreenRectangleApi_hpp
#define DrawGreenRectangleApi_hpp

///项目代码
#include "DrawApi.hpp"

namespace bridge_pattern {
class DrawGreenRectangleApi : public DrawApi {
public:
    static DrawGreenRectangleApi* create();
    virtual void drawCircle(int posX, int posY, int radius) override;
    virtual void drawSquare(int posX, int posY, int width, int height) override;
    
private:
    DrawGreenRectangleApi() = default;
    ~DrawGreenRectangleApi() = default;
};
///命名空间结束
}

#endif /* DrawGreenRectangleApi_hpp */
