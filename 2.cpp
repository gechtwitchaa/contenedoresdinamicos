#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<double> miLista = {3.14, 2.718, 1.414, 1.618};


    std::stack<double, std::list<double>> miPila(miLista);

   