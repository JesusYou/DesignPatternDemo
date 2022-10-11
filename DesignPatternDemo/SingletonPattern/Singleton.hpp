//
//  Singleton.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#ifndef Singleton_hpp
#define Singleton_hpp

namespace singleton_pattern {
class Singleton final {
public:
    static Singleton* getInstance();
    static void destoryInstance();

private:
    Singleton() = default;
    ~Singleton() = default;

private:
    static Singleton* _instance;
};
///命名空间结束
}

#endif /* Singleton_hpp */
