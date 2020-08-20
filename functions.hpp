
#pragma once

#include <vector>

/*! \brief Converts a temperature in fahrenheit to celsius
 *
 * Converts a temperature in degrees Fahrenheit to degrees Celsius.
 * 
 *  \throw std::runtime_error when temperature is below absoulte zero (in fahrenheit).
 *
 * \param [in] temperature a temperature in farhenheit
 * \return the temperature \p temperaure in Celsius
*/
double convert_ftoc( double temperature);

std::vector<double> convert_ftoc_vec(std::vector<double> temps);