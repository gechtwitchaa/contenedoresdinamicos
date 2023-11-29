#include <iostream>
#include <vector>

int main() {
    std::vector<int> miVector;

    miVector.push_back(5);
    miVector.push_back(10);
    miVector.push_back(15);
    miVector.push_back(20);
    
    std::cout << "Elementos del vector:" << std::endl;
    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
