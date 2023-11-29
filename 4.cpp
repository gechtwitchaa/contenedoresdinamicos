#include <iostream>
#include <valarray>

int main() {

    std::valarray<double> valArray1 = {1.5, 2.5, 3.5, 4.5};
    std::valarray<double> valArray2 = {0.5, 1.0, 1.5, 2.0};


    std::valarray<double> suma = valArray1 + valArray2;

    std::valarray<double> resta = valArray1 - valArray2;

    std::valarray<double> multiplicacion = valArray1 * valArray2;

    std::valarray<double> division = valArray1 / valArray2;


    std::cout << "Suma: ";
    for (auto val : suma) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (auto val : resta) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Multiplicacion: ";
    for (auto val : multiplicacion) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Division: ";
    for (auto val : division) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
