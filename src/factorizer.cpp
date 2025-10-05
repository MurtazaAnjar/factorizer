#include "factorizer.h"
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> factorizer::primeFactors(int val) {
    std::vector<int> result = {};
    if (val <= 1) {
        return result;
    }

    while (val % 2 == 0) {
        result.push_back(2);
        val = val/2;
    }

    for (int i = 3; i <= sqrt(val); i += 2) {
        while (val % i == 0) {
            result.push_back(i);
            val = val/i;
        }
    }

    if (val > 2) {
        result.push_back(val);
    }
    return result;
}

bool factorizer::isPrime(const int val) {
    return (primeFactors(val) == std::vector<int>{val})? true : false;
}

bool factorizer::isComposite(const int val) {
    return (!isPrime(val) && val!=1)? true : false;
}

std::string factorizer::reduceFraction(int numerator, int denominator) {
    if (numerator%denominator == 0) {
        return std::to_string(numerator/denominator);
    }

    std::vector<int> numFactors = primeFactors(numerator);
    std::vector<int> denomFactors = primeFactors(denominator);
    int lenNum = numFactors.size();
    int lenDen = denomFactors.size();

    for (int i=0; i<lenNum; i++) {
        bool match = false;
        for (int j=0; j<lenDen && !match; j++) {
            if (numFactors[i] == denomFactors[j]) {
                numFactors.erase(numFactors.begin()+i);
                denomFactors.erase(denomFactors.begin()+j);
                i--;
                j--;
                match = true;
            }
        }
    }
    int simpleNum = 1;
    for (int element:numFactors) {
        simpleNum *= element;
    }
    int simpleDenom = 1;
    for (int element:denomFactors) {
        simpleDenom *= element;
    }
    return std::to_string(simpleNum) + "/" + std::to_string(simpleDenom);
}