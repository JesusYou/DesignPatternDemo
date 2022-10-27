//
//  Memento.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "Memento.hpp"

namespace memento_pattern {
Memento* Memento::create(std::string text)
{
    Memento* ret = new Memento();
    ret->_init(text);
    return ret;
}

void Memento::release()
{
    delete this;
}

std::string Memento::getText() const
{
    return _text;
}

void Memento::_init(std::string text)
{
    _text = text;
}
///命名空间结束
}
