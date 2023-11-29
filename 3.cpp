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

