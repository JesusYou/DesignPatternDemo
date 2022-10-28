//
//  Game.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Game_hpp
#define Game_hpp

namespace template_pattern {
class Game {
public:
    virtual void release() { delete this; }
    virtual void initGame() = 0;
    virtual void startGame() = 0;
    virtual void endGame() = 0;
    
protected:
    Game() = default;
    virtual ~Game() = default;
};
///命名空间结束
}

#endif /* Game_hpp */
