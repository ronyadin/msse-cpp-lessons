#include <iostream>

int main(void)
{
    int i = 1234;
    std::cout << "Value of i " << i << std::endl;
    std::cout << "Address of i " << &i << std::endl;
    
    int * pi = &i;
    //*pi = 5678;
    std::cout << "Value of pi " << pi << std::endl;
    std::cout << "Value of *pi " << *pi << std::endl;
    
    int * point = nullptr;
    std::cout << *point << std::endl;
    return 0;
}