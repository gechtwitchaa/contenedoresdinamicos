#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {

    auto cuadrado = [](int x) { return x * x; };


    auto numero = 5;
    auto resultado = cuadrado(numero);
    std::cout << "El cuadrado de " << numero << " es: " << resultado << std::endl;


    std::vector<int> miVector = {1, 2, 3, 4, 5};
    
    std::cout << "Cuadrados de los números en el vector: ";
    std::for_each(miVector.begin(), miVector.end(), [](int& x) { x = x * x; });

    for (auto val : miVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

