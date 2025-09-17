#include <iostream>
#include "player.h"


int main(){

    Player p1("basketball");
    std::cout << "player : "  << p1 << std::endl;

    std::cout << "====================================================================" << std::endl;

    // p1.set_first_name("John");
    // p1.set_last_name("Snow");

    // std::cout << "player : "  << p1 << std::endl;
    return 0;
}