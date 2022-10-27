//
//  TextEditor.hpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#ifndef TextEditor_hpp
#define TextEditor_hpp

///C++标准库
#include <string>
///项目代码
#include "MementoManager.hpp"

namespace memento_pattern {
class TextEditor final {
public:
    static TextEditor* create();
    void release();
    void addText(std::string text);
    void deleteText(int count);
    void withdrawOperation();
    
private:
    TextEditor() = default;
    ~TextEditor() = default;
    void _init();
    void _save();
    void _printText();
    
private:
    std::string _text = "";
    MementoManager* _mementoManager = nullptr;
};
///命名空间结束
}

#endif /* TextEditor_hpp */
