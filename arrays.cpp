#include <iostream>

int main(void)
{
    // Create an array of 10 doubles
    double arr[10] = {0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0, 18.0};
    // double arr2[10] = arr; this doesnt work

    for(int idx = 0; idx < 10; idx++)
    {
        std::cout << idx << " : " << arr[idx] << std::endl;
    }

    arr[10] = 20.0;

    return 0;
}