#include <iostream>

#include "src/factorizer.h"

int main() {
    std::vector<int> myVector = factorizer(100);
    std::cout<<std::boolalpha;
    std::cout<<"Is 100 prime? "<< isPrime(100) << std::endl;

    // Print elements using a range-based for loop
    std::cout<<"Here are the prime factors: "<< std::endl;
    for (const auto& element : myVector) {
        std::cout << element << " ,";
        std::cout<<"Is "<<element<<" prime? "<< isPrime(element) << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
