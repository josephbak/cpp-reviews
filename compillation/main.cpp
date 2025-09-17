#include <iostream>
// #include "compare.h" // preprocessor copies this, include directives

int incr_mult(int a, int b){
    return (a++) * (++b);
}


int main(){
    // int maxval = max(34, 56);
    // std::cout << "max : " << maxval << std::endl;

    // int minval = min(146, 23);
    // std::cout << "min : " << minval << std::endl;


    // 4 * 5 = 20
    // 4 * 6 = 24 <--
    // 5 * 5 = 25
    // 5 * 6 = 30

    int x{4}; 
    int y{5};

    int result = incr_mult(x, y);

    std::cout << "result : " << result << std::endl;

    return 0;
}