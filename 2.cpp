#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<double> miLista = {3.14, 2.718, 1.414, 1.618};


    std::stack<double, std::list<double>> miPila(miLista);


    std::cout << "Contenido inicial de la pila:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    
        miPila.push(5.0);
        miPila.push(10.0);
        miPila.push(15.0);

