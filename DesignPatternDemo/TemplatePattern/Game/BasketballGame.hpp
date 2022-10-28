//
//  BasketballGame.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef BasketballGame_hpp
#define BasketballGame_hpp

#include "Game.hpp"

namespace template_pattern {
class BasketballGame final : public Game {
public:
    static BasketballGame* create();
    virtual void initGame() override;
    virtual void startGame() override;
    virtual void endGame() override;
    
private:
    BasketballGame() = default;
    virtual ~BasketballGame() = default;
};
///命名空间结束
}

#endif /* BasketballGame_hpp */
