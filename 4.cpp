#include <iostream>
#include <valarray>

int main() {

    std::valarray<double> valArray1 = {1.5, 2.5, 3.5, 4.5};
    std::valarray<double> valArray2 = {0.5, 1.0, 1.5, 2.0};

    
    std::valarray<double> suma = valArray1 + valArray2;


    std::valarray<double> resta = valArray1 - valArray2;
