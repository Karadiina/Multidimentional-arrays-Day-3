
#include <iostream>

int main()
{
    
    int multiply[11][11] = {};

    for (int i = 1; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            multiply[i][j] = i * j;
        }

    }
    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            std::cout << multiply[i][j] << " " << std::flush;
        }

        std::cout << std::endl;

    }

}