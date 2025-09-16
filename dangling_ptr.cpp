#include <iostream>

int main(){
    int *p = {new int{1}};

    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    // release memory
    delete p;
    // p still holds the old address
    std::cout << p << std::endl;

    // p holds null address?? most of time it's 0x0 but not guarunteed.
    p = nullptr;
    std::cout << p << std::endl;
    return 0;
}