#include <iostream>
#include "pc.h"

int main() {
    std::string action;
    while (action != "exit"){
        std::cout << "Enter action\n";
        std::cin >> action;
        if (action == "input"){
            input();
        }else if (action == "sum"){
            compute();
        }else if (action == "display"){
            display();
        }
    }
    return 0;
}
