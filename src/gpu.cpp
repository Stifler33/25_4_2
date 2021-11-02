#include <iostream>
#include "gpu.h"
#include "ram_h.h"
void display(){
    int arr[8] = {0};
    read(arr);
    std::cout << "numbers in ram ";
    for (int i : arr){
        std::cout << i << " ";
    }
    std::cout <<std::endl;
}
