#include <iostream>
#include <vector>
#include <array>

typedef std::array<double, 3> AtomCoord;
typedef std::vector<AtomCoord> Coordinates;

int main(void)
{
    AtomCoord coord = {1.0, 2.0, 3.0};
    /*
    coord[0] = 1.0;
    coord[2] = 2.0;
    coord[3] = 3.0;*/
    //std::vector<AtomCoord> coordinates; // replaced with typedef name
    Coordinates atomic_coordinates;
    atomic_coordinates.push_back(coord);

    //coordiantes[0][0] // coordinates.at(0).at(0) or any combo

    std::cout << "Coordinate: " << atomic_coordinates.at(0)[0] << std::endl;
    //std::cout << "Size: " << coord.size() << std::endl;

    //coord.at(3) = 1.0;
    
    std::array<double, 3> coord2 = coord;
    std::cout << coord2[0] << std::endl;


    return 0;
}