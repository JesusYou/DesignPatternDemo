//
//  Visitor.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef Visitor_hpp
#define Visitor_hpp

namespace visitor_pattern {
class Keyboard;
class Mouse;
class Computer;
class Visitor {
public:
    virtual void release() { delete this; }
    virtual void visit(Keyboard* keyBoard) = 0;
    virtual void visit(Mouse* mouse) = 0;
    virtual void visit(Computer* computer) = 0;
    
protected:
    Visitor() = default;
    virtual ~Visitor() = default;
};
///命名空间结束
}

#endif /* Visitor_hpp */
