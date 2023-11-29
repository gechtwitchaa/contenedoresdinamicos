#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> miVector = {14, 3, 7, 10, 1, 20};

    std::sort(miVector.begin(), miVector.end());

    std::cout << "Vector ordenado: ";
    for (const auto& num : miVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    auto maxElement = std::max_element(miVector.begin(), miVector.end());

    if (maxElement != miVector.end()) {
        std::cout << "El elemento más grande del vector es: " << *maxElement << std::endl;
    } else {
        std::cout << "El vector está vacío." << std::endl;
    }

    return 0;
}
