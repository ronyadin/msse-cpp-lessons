#include <iostream>
#include <vector>
#include <stdexcept>
#include "functions.hpp"

std::vector<double> convert_ftoc_vec(std::vector<double> temps)
{
    // Loop over temps, covert them, store them in another vector
    std::vector<double> new_temps;
    for (size_t i = 0; i < temps.size(); i++)
    {
        
        //double new_temp = (temps[i] - 32) * (5.0/9.0);
        double t = convert_ftoc(temps[i]);
        //new_temps.push_back(new_temp);
        new_temps.push_back(t);
    }
return new_temps;
}

double convert_ftoc(double temperature)
{
    const double absolute_zero = -459.67;
    if(temperature < absolute_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!");
    }
    return (temperature - 32.0)*(5.0/9.0);
}

