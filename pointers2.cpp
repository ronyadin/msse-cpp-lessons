#include <iostream>
#include <vector>

int main(void)
{
    /*
    int ndoubles = 100;

    double * pd = new double [ndoubles];

    pd[0] = 3.1415;
    pd[1] = 2*pd[0];

    std::cout << pd[0] << " " << pd[1]<< std::endl ;
    delete [] pd;
    */

    int ndoubles = 100;

    std::vector<double> dvec;
    dvec.resize(ndoubles);
    
    for(size_t i = 0; i < dvec.size(); i++) // code for iterating over a vector
    {
        dvec[i] = 0.0;
    }

    //dvec.push_back(3.1415);
    std::cout << "Size: " << dvec.size() << std::endl;
    //dvec.pop_back(); // removes the last element from the list

    //std::cout << "Value: " << dvec[0] << std::endl;
    //std::cout << "Value: " << dvec.at(1) << std::endl;

    dvec.at(50) = 66.789;
    std::cout << "Value: " << dvec.at(50) << std::endl;
    //dvec.clear();
    std::cout << "Size: " << dvec.size() << std::endl;
    
    

    return 0;
}