#include "ram_h.h"
int buffer[8];
void write(int *incoming){
    for (int i = 0; i < 8; i++){
        *(buffer + i) = *(incoming + i);
    }
}
//read in array
void read(int *ptr){
    for (int i = 0; i < 8; i++){
        ptr[i] = *(buffer + i);
    }
}