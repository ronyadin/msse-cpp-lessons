#include <iostream>
#include <fstream>



int main(void)
{
    
    /*
    std::ofstream outfile("new_file.txt", std::fstream::app);
    outfile << "Hello, file!" << std::endl;
    outfile.precision(15);
    double pi = 3.141526512034536794094755;
    outfile << pi << std::endl;
    */

    std::ifstream infile ("input.txt");
    if(!infile.is_open())
    {
        std::cout << "Input file does note exist!" << std::endl;
    }

    int n;
    std::string name;
    double x, y, z;

    infile >> n >> y >> x >> y >> z;
    std::cout << "n = "  << n << std::endl;
    std::cout << "name = "  << name << std::endl;
    std::cout << "x,y,z = "  << x << " " << y << " " << z << std::endl;


    return 0;
}