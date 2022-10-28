//
//  OperateVisitor.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/28.
//

#ifndef OperateVisitor_hpp
#define OperateVisitor_hpp

#include "Visitor.hpp"

namespace visitor_pattern {
class OperateVisitor : public Visitor {
public:
    static OperateVisitor* create();
    virtual void visit(Keyboard* keyBoard) override;
    virtual void visit(Mouse* mouse) override;
    virtual void visit(Computer* computer) override;
    
private:
    OperateVisitor() = default;
    ~OperateVisitor() = default;
};
///命名空间结束
}

#endif /* OperateVisitor_hpp */
