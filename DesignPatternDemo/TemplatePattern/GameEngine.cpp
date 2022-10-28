//
//  GameEngine.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#include "GameEngine.hpp"

namespace template_pattern {
GameEngine* GameEngine::create(Game* game)
{
    GameEngine* ret = new GameEngine();
    ret->_init(game);
    return ret;
}

void GameEngine::release()
{
    delete this;
}

void GameEngine::startGame()
{
    _game->startGame();
}

void GameEngine::endGame()
{
    _game->endGame();
}

void GameEngine::_init(Game* game)
{
    _game = game;
    _game->initGame();
}
///命名空间结束
}
