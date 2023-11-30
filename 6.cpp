#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena de números: ";
    std::cin >> cadena;

    try {
        int numero = boost::lexical_cast<int>(cadena);
        std::cout << "Número convertido: " << numero << std::endl;
    } catch (const boost::bad_lexical_cast &e) {
        std::cerr << "Error de conversión: " << e.what() << std::endl;
    }

    return 0;
}
