//
//  main.cpp
//  DesignPatternDemo
//
//  Created by RedInfinity on 2022/10/11.
//

#include <iostream>
#include "BrigdePattern/Artist.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    bridge_pattern::Artist::create()->drawShapes();
    return 0;
}
