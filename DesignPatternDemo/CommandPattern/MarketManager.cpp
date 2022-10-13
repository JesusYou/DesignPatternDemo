//
//  MarketManager.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#include "MarketManager.hpp"
///项目代码
#include "Product/Bread.hpp"
#include "Product/Mike.hpp"
#include "Order/BuyOrder.hpp"
#include "Order/SellOrder.hpp"
#include "OrderSystem.hpp"

namespace command_pattern {
MarketManager* MarketManager::create()
{
    MarketManager* ret = new MarketManager();
    return ret;
}

void MarketManager::release()
{
    delete this;
}

void MarketManager::work()
{
    Bread* bread = Bread::create();
    Mike* mike = Mike::create();
    BuyOrder* buyOrder1 = BuyOrder::create(bread);
    OrderSystem::getInstance()->addOrder(buyOrder1);
    BuyOrder* buyOrder2 = BuyOrder::create(bread);
    OrderSystem::getInstance()->addOrder(buyOrder2);
    BuyOrder* buyOrder3 = BuyOrder::create(mike);
    OrderSystem::getInstance()->addOrder(buyOrder3);
    SellOrder* sellOrder1 = SellOrder::create(bread);
    OrderSystem::getInstance()->addOrder(sellOrder1);
    OrderSystem::getInstance()->placeOrders();
}
///命名空间结束
}
