//
//  OrderSystem.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef OrderSystem_hpp
#define OrderSystem_hpp

///C++标准库
#include <queue>
///项目代码
#include "Order/Order.hpp"

namespace command_pattern {
class OrderSystem final {
public:
    static OrderSystem* getInstance();
    static void destoryInstance();
    void addOrder(Order* order);
    void placeOrders();
    
private:
    OrderSystem() = default;
    ~OrderSystem() = default;
    
private:
    static OrderSystem* _instance;
    std::queue<Order*> _orders;
};
///命名空间结束
}

#endif /* OrderSystem_hpp */
