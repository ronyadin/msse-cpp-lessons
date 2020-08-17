#include <iostream>
#include <string>
#include <map>

void say_hello(std::string name)
{
    std::cout << "Hello, " << name;

    if(name == "Dr. Pritchard" || name == "Dr. Nash")
    {
        std::cout << " (from MolSSI)" << std::endl;
    }
    else if(name == "Dr. Johansen")
    {
        std::cout << " (from Berkeley)" << std::endl;
    }
    else if(name == "Ron")
    {
        std::cout << " (from Berkeley)" << std::endl;
    }
    else
    {
        std::cout << " (from parts unknown)" << std::endl;
    }
}



int main(void)
{
    say_hello("Dr. Pritchard");
    say_hello("Dr. Johansen");
    say_hello("Ron");
    say_hello("Dr. Nash");
    return 0;
}