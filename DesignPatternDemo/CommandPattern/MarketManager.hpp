//
//  MarketManager.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/13.
//

#ifndef MarketManager_hpp
#define MarketManager_hpp

namespace command_pattern {
class MarketManager final {
public:
    static MarketManager* create();
    void release();
    void work();
    
private:
    MarketManager() = default;
    ~MarketManager() = default;
};
///命名空间结束
}

#endif /* MarketManager_hpp */
