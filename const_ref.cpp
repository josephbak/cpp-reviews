#include <iostream>

int main(){
    int age{30};
    const int& ref_age{age};

    std::cout << age << std::endl;
    std::cout << ref_age << std::endl;

    age = 31;
    // ref_age = 31; <- not possible

    std::cout << age << std::endl;
    std::cout << ref_age << std::endl;
}