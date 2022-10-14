//
//  Iterator.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/14.
//

#ifndef Iterator_hpp
#define Iterator_hpp

namespace iterator_pattern {
class Iterator final {
public:
    static Iterator* create(int* data, int index);
    void release();
    void next();
    bool isEqual(Iterator* iterator);
    void printValue();
    
private:
    Iterator() = default;
    ~Iterator() = default;
    void _init(int* data, int index);
    
private:
    int* _data = nullptr;
    int _index = 0;
};
///命名空间结束
}

#endif /* Iterator_hpp */
