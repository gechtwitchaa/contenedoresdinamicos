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

 