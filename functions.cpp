#include <iostream>
#include <vector>
#include <stdexcept>
/*
void say_something(void)
{
    std::cout << "Something!" << std::endl;
    return; // returns nothing. like void,
}


int main(void)
{
    const double pi = 3.1415;
    double pi2 = 2.0 * pi;
    std::cout << pi2 << std::endl;
    return 0;
}

int main(void) 
{
    const double pi = 3.1415;
    const double & rpi = pi;

    //double & rpi2 = pi; // this doesn't work
    //double * rpi2 = &pi; // pointers don't work either
    const double & rpi2 = pi;
    std::cout << pi << std::endl << rpi << std::endl << rpi2 << std::endl; 
    return 0;
}


void convert_ftoc(const double & temperature)
{
    temperature = (temperature - 32.0)*(5.0/9.0);
    std::cout << "Temperature in function: " << &temperature << std::endl;
}


void convert_ftoc(double * temperature)
{
    *temperature = (*temperature - 32.0)*(5.0/9.0);
    std::cout << "Temperature in function: " << temperature << std::endl;
}
*/
std::vector<double> convert_ftoc_vec(std::vector<double> temps)
{
    // Loop over temps, covert them, store them in another vector
    std::vector<double> new_temps;
    for (size_t i = 0; i < temps.size(); i++)
    {
        double new_temp = (temps[i] - 32) * (5.0/9.0);
        new_temps.push_back(new_temp);
    }
return new_temps;
}


double convert_ftoc( double temperature)
{
    const double absolute_zero = -459.67;
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!");
    }
    return (temperature - 32.0)*(5.0/9.0);
}

int main(void)
{
    /*const double temperature = 68.1;
    double new_temperature = convert_ftoc(temperature);
    std::cout << "New temperature: " << new_temperature << std::endl;
    
    std::vector<double> temperatures;
    temperatures.push_back(212.0);
    temperatures.push_back(32.0);
    temperatures.push_back(-40.0);
    std::vector<double> new_temps = convert_ftoc_vec(temperatures);
    std::cout << new_temps[1] << std::endl;
    */
    try {
        std::cout << convert_ftoc(-600.0) << std::endl;
    }
    catch(std::exception & ex)
    {
        std::cout << "Program encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;
        return 1;
    }
    return 0;
}