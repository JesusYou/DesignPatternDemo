//
//  Memento.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef Memento_hpp
#define Memento_hpp

///C++标准库
#include <string>

namespace memento_pattern {
class Memento final {
public:
    static Memento* create(std::string text);
    void release();
    std::string getText() const;
    
private:
    Memento() = default;
    ~Memento() = default;
    void _init(std::string text);
    
private:
    std::string _text = "";
};
///命名空间结束
}

#endif /* Memento_hpp */
