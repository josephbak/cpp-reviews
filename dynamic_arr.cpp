#include <iostream>

int main(){

    size_t size{10};

    // different ways to allocate dynamic arrays

    double *p_salaries {new double[size]}; // contains garbage values

    int *p_students {new(std::nothrow) int[size]()}; // all values initialized to 0

    double *p_scores {new(std::nothrow) double[size]{1, 2, 3, 4, 5}}; // allocating memory space for an array of size double vars
                                                                    // First 5 will be initiallized with 1, 2, 3, 4, 5 , and the


    // std::cout << "Hey!";

    //nullptr check and use the allocated array
    if(p_scores){
        std::cout << "size of scores (it's a regular pointer): " << sizeof(p_scores) << std::endl;
        std::cout << "memory allocation success" << std::endl;
    }

    // print out elements. 
    for(size_t i{}; i < size; ++i){
        std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;


    std::cout << "==================================================" << std::endl;
    // static arrays vs dynamic arrays
    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // static array
    std::cout << "scores size : " << std::size(scores) << std::endl;
    for (auto s : scores){
        std::cout << "value: " << s << std::endl;
    }

    int* p_scores1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // dynamic array , lives on the heap

    // can't do std::size for dynamic array
    // std::cout << "scores size : " << std::size(p_scores1) << std::endl;

    // cant do range-based for loop
    // for (auto s : p_scores1){
    //     std::cout << "value: " << s << std::endl;
    // }

    return 0;
}