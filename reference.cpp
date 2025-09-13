#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int* value)
{
    (*value)++;
}

void Inc(int& value)
{
    value++;
}

int main()
{
    int a = 5;

    // int* b = &a;

    Increment(&a);

    // here & is a part of type
    // int& ref = a;

    // ref = 2;

    LOG(a);


    Inc(a);
    LOG(a);


    return 0;
}