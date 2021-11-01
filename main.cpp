#include <iostream>
#include "ram_h.h"

int main() {
    int arr[8] = {3,5,9,4,2,1,4,7};
    write(arr);
    int Barr[8] = {0};
    read(Barr);
    for (int x : Barr){
        std::cout << x;
    }
    return 0;
}
