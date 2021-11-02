#include <iostream>
#include "ram_h.h"
#include "kbd.h"
void input(){
    std::cout << "Enter 8 number\n";
    int inArr[8] = {0};
    for (int i = 0; i < 8; i++){
       std::cin >> inArr[i];
    }
    write(inArr);
}

