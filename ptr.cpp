#include <iostream>

int main()
{

    /*
    int number {22}; // stack
    int *p_number = &number;
    std::cout << number << std::endl;
    std::cout << p_number << std::endl;
    std::cout << &number << std::endl;
    std::cout << *p_number << std::endl;


    int *p_number1;
    int number1 {12};
    p_number1 = &number1;

    std::cout << *p_number1 << std::endl;
    */

    int *p5 {new int};
    int *p6 {new int (22)};
    int *p7 {new int {22}};

    std::cout << p5 << std::endl;
    std::cout << *p5 << std::endl;
    std::cout << p6 << std::endl;
    std::cout << *p6 << std::endl;
    std::cout << p7 << std::endl;
    std::cout << *p7 << std::endl;


    delete p5;
    p5 = nullptr;
    delete p6;
    p6 = nullptr;
    delete p7;
    p7 = nullptr;

    // can reuse pointers
    p5 = new int(81);
    std::cout << p5 << std::endl;
    std::cout << *p5 << std::endl;

    delete p5;
    p5 = nullptr;

    std::cout << "Program is ending well" << std::endl;
    return 0;
}
