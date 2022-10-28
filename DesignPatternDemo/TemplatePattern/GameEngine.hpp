//
//  GameEngine.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef GameEngine_hpp
#define GameEngine_hpp

///项目代码
#include "Game/Game.hpp"

namespace template_pattern {
class GameEngine final {
public:
    static GameEngine* create(Game* game);
    void release();
    void startGame();
    void endGame();
    
private:
    GameEngine() = default;
    ~GameEngine() = default;
    void _init(Game* game);
    
private:
    Game* _game = nullptr;
};
///命名空间结束
}

#endif /* GameEngine_hpp */
