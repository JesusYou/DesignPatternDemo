//
//  Expression.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef Expression_hpp
#define Expression_hpp

namespace interpreter_pattern {
class Expression {
public:
    virtual void release() { delete this; }
    virtual int interpret() = 0;
    
protected:
    Expression() = default;
    virtual ~Expression() = default;
};
///命名空间结束
}

#endif /* Expression_hpp */
