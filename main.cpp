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
        }else if (action == "save"){
            save();
        }else if (action == "load"){
            load();
        }else std::cout << "no correct action\n";
    }
    return 0;
}
