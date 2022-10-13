//
//  OrderSystem.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "OrderSystem.hpp"

namespace command_pattern {
OrderSystem* OrderSystem::_instance = nullptr;

OrderSystem* OrderSystem::getInstance()
{
    if (_instance == nullptr) {
        _instance = new OrderSystem();
    }
    return _instance;
}

void OrderSystem::destoryInstance()
{
    if (_instance) {
        delete _instance;
        _instance = nullptr;
    }
}

void OrderSystem::addOrder(Order* order)
{
    _orders.push(order);
}

void OrderSystem::placeOrders()
{
    while (_orders.empty() == false) {
        Order* order = _orders.front();
        _orders.pop();
        order->exec();
        order->release();
    }
}
///命名空间结束
}
