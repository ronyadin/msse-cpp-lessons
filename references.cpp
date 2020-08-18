#include <iostream>
#include <vector>
#include <array>
#include <string>

int main(void)
{
    std::string my_string = "Hello, world!";
    std::string & ref_string = my_string;

    std::cout << "String: " << my_string << std::endl;
    std::cout << "Ref String: " << ref_string << std::endl;

    std::cout << "String: " << &my_string << std::endl;
    std::cout << "Ref String: " << &ref_string << std::endl;

    std::string my_string2 = "bye, world!";
    ref_string = my_string2;
    std::cout << "String: " << ref_string << std::endl;
    std::cout << "String: " << my_string << std::endl;

    return 0;
}