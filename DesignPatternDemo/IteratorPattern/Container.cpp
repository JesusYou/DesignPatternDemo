//
//  Container.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "Container.hpp"

namespace iterator_pattern {
Container* Container::create()
{
    Container* ret = new Container();
    ret->_init();
    return ret;
}

void Container::release()
{
    delete [] _data;
    delete this;
}

void Container::pushBack(int num)
{
    _containerIndex += 1;
    if (_containerIndex == _containerSize - 1) {
        _updateContainerSize();
    }
    _data[_containerIndex] = num;
}

Iterator* Container::begin() const
{
    return Iterator::create(_data, 0);
}

Iterator* Container::end() const
{
    return Iterator::create(_data, _containerIndex + 1);
}

void Container::_init()
{
    _data = new int[_containerSize];
}

void Container::_updateContainerSize()
{
    _containerSize = _containerSize * 2;
    int* newData = new int[_containerSize];
    for (int i = 0; i < _containerIndex; ++i) {
        newData[i] = _data[i];
    }
    delete [] _data;
    _data = newData;
}
///命名空间结束
}
