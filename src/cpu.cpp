#include <iostream>
#include "cpu.h"
#include "ram_h.h"
void compute(){
    int outArr[8] = {0};
    read(outArr);
    int sum = 0;
    for (int i : outArr){
        sum += i;
    }
    std::cout << "Summary number = " << sum << std::endl;
}
