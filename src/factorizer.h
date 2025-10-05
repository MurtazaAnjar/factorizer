#pragma once
#include <string>
#include <vector>

class factorizer {
    public:
        std::vector<int> primeFactors(int val);
        bool isPrime(int val);
        bool isComposite(int val);
        //std::string reduceFraction(int numerator, int denominator);
};




