#include <iostream>


int main(){

    /*
    double d_val {12.34};
    double& ref_d_val {d_val}; // reference to double value
    double *p_d_val {&d_val}; // pointer to double value

    // reading
    std::cout << "d_val : " << d_val << std::endl;
    std::cout << "ref_d_val : " << ref_d_val << std::endl;
    std::cout << "p_d_val : " << p_d_val << std::endl;
    std::cout << "*p_d_val : " << *p_d_val << std::endl;
    */

    int ival {1};
    int & ref_ival {ival};
    int other_ival {2};

    std::cout << ival << std::endl;
    std::cout << ref_ival << std::endl;
    std::cout << other_ival << std::endl;

    std::cout << "====================================" << std::endl;
    ref_ival = other_ival;

    std::cout << ival << std::endl;
    std::cout << ref_ival << std::endl;
    std::cout << other_ival << std::endl;

    std::cout << "====================================" << std::endl;
    std::cout << &ival << std::endl;
    std::cout << &ref_ival << std::endl;
    std::cout << &other_ival << std::endl;

    return 0;
}