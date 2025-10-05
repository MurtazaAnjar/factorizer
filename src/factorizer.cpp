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

