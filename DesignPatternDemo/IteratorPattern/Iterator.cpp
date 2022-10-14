//
//  Iterator.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#include "Iterator.hpp"
///C系统库
#include <stdio.h>

namespace iterator_pattern {
Iterator* Iterator::create(int* data, int index)
{
    Iterator* ret = new Iterator();
    ret->_init(data, index);
    return ret;
}

void Iterator::release()
{
    delete this;
}

void Iterator::next()
{
    _index += 1;
}

bool Iterator::isEqual(Iterator* iterator)
{
    bool ret = false;
    if ((_data == iterator->_data) && (_index == iterator->_index)) {
        ret = true;
    }
    return ret;
}

void Iterator::printValue()
{
    printf("迭代器所指向的值为：%d\n", _data[_index]);
}

void Iterator::_init(int* data, int index)
{
    _data = data;
    _index = index;
}
///命名空间结束
}
