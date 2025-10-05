#include <iostream>

#include "src/factorizer.h"

int main() {
    std::vector<int> myVector = factorizer(17);

    // Print elements using a range-based for loop
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
