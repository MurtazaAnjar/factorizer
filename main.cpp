#include <iostream>

#include "src/factorizer.h"

int main() {
    factorizer driver;
    std::vector<int> myVector = driver.primeFactors(100);
    std::cout<<std::boolalpha;
    std::cout<<"Is 100 prime? "<< driver.isPrime(100) << "\t";
    std::cout<<"Is 100 composite? "<< driver.isComposite(100) << std::endl;

    // Print elements using a range-based for loop
    std::cout<<"Here are the prime factors: "<< std::endl;
    for (const int& element : myVector) {
        std::cout << element << " ,";
        std::cout<<"Is "<<element<<" prime? "<< driver.isPrime(element) << "\t";
        std::cout<<"Is "<<element<<" Composite? "<< driver.isComposite(element) << std::endl;
    }
    std::cout << std::endl;

    std::cout<<"Simplify 122/14: "<< driver.reduceFraction(122,14) << std::endl;

    return 0;
}
