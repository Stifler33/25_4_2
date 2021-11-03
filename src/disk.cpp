#include <fstream>
#include <iostream>
#include "ram_h.h"
void save(){
   std::ofstream saveFile("data.txt", std::ios::trunc);
   if (!saveFile.is_open()){
       std::cerr << "Open file error\n";
       return;
   }
   int arr[8] = {0};
   read(arr);
   for (int i : arr){
       saveFile << i;
       saveFile << " ";
   }
   std::cout << "File save!\n";
}
void load(){
    std::ifstream loadFile("data.txt");
    int arr[8] = {0};
    for (int & i : arr){
        loadFile >> i;
    }
    write(arr);
    std::cout << "File load\n";
}
