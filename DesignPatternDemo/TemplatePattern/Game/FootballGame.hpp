//
//  FootballGame.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef FootballGame_hpp
#define FootballGame_hpp

#include "Game.hpp"

namespace template_pattern {
class FootballGame final : public Game {
public:
    static FootballGame* create();
    virtual void initGame() override;
    virtual void startGame() override;
    virtual void endGame() override;
    
protected:
    FootballGame() = default;
    virtual ~FootballGame() = default;
};
///命名空间结束
}

#endif /* FootballGame_hpp */
