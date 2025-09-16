#include <iostream>

int main(){
    // int int_val {45};
    // double double_val {33.65};

    // int& ref_int_val1 {int_val}; // assign through initialization
    // int& ref_int_val2 = int_val; // assign through assignment 
    // double& reference_double_val {double_val};

    // you have to declare and initialize in one statement
    // int& some_ref; // this is an error

    int i_data{100};
    double d_data{11.1};

    //references
    int& ref_i_data {i_data};
    double& ref_d_data {d_data};

    // print
    std::cout << "i_data : " << i_data << std::endl;
    std::cout << "&i_data : " << &i_data << std::endl;
    std::cout << "d_data : " << d_data << std::endl;
    std::cout << "&d_data : " << &d_data << std::endl;

    std::cout << "======================================" << std::endl;

    std::cout << "ref_i_data : " << ref_i_data << std::endl;
    std::cout << "&ref_i_data : " << &ref_i_data << std::endl;
    std::cout << "ref_d_data : " << ref_d_data << std::endl;
    std::cout << "&ref_d_data : " << &ref_d_data << std::endl;

    std::cout << std::endl;
    std::cout << "***************************************" << std::endl << std::endl;

    i_data = 200;
    d_data = 22.2;

    std::cout << "i_data : " << i_data << std::endl;
    std::cout << "&i_data : " << &i_data << std::endl;
    std::cout << "d_data : " << d_data << std::endl;
    std::cout << "&d_data : " << &d_data << std::endl;

    std::cout << "======================================" << std::endl;

    std::cout << "ref_i_data : " << ref_i_data << std::endl;
    std::cout << "&ref_i_data : " << &ref_i_data << std::endl;
    std::cout << "ref_d_data : " << ref_d_data << std::endl;
    std::cout << "&ref_d_data : " << &ref_d_data << std::endl;

    // std::cout << std::endl;
    ref_i_data = 300;
    ref_d_data = 33.3;

    std::cout << std::endl;
    std::cout << "***************************************" << std::endl << std::endl;

    std::cout << "i_data : " << i_data << std::endl;
    std::cout << "&i_data : " << &i_data << std::endl;
    std::cout << "d_data : " << d_data << std::endl;
    std::cout << "&d_data : " << &d_data << std::endl;

    std::cout << "======================================" << std::endl;

    std::cout << "ref_i_data : " << ref_i_data << std::endl;
    std::cout << "&ref_i_data : " << &ref_i_data << std::endl;
    std::cout << "ref_d_data : " << ref_d_data << std::endl;
    std::cout << "&ref_d_data : " << &ref_d_data << std::endl;


    return 0;
}