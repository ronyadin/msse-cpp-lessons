#include <iostream> // for std::cout, std::endl

double convert_F_to_C(double temp_F)
{
    return (temp_F - 32.0) * 5.0/9.0;
}


int main(void)
{
    // i++ is equivalent to i += 1
    for(int i=0; i < 100; i++)
    {
        double temperature = i * 10.0;
        std::cout << "Original Temperature (F) = " << temperature
                  << " Converted temperature (C) = " << convert_F_to_C(temperature) << std::endl;
    }

   
    return 0;
}