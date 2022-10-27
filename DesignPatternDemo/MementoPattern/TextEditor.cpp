//
//  TextEditor.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/27.
//

#include "TextEditor.hpp"
///C系统库
#include <stdio.h>
///项目代码
#include "Memento.hpp"

namespace memento_pattern {
TextEditor* TextEditor::create()
{
    TextEditor* ret = new TextEditor();
    ret->_init();
    return ret;
}

void TextEditor::release()
{
    _mementoManager->release();
    delete this;
}

void TextEditor::addText(std::string text)
{
    _text.append(text);
    _printText();
    _save();
}

void TextEditor::deleteText(int count)
{
    if (count >= _text.size()) {
        _text.clear();
    } else {
        _text = _text.substr(0, _text.size() - count);
    }
    _printText();
    _save();
}

void TextEditor::withdrawOperation()
{
    Memento* memento = _mementoManager->getMemento();
    if (memento) {
        _text = memento->getText();
    } else {
        _text = "";
    }
    _printText();
}

void TextEditor::_init()
{
    _mementoManager = MementoManager::create();
}

void TextEditor::_save()
{
    Memento* memento = Memento::create(_text);
    _mementoManager->addMemento(memento);
}

void TextEditor::_printText()
{
    printf("文本内容：%s\n", _text.c_str());
}
///命名空间结束
}
