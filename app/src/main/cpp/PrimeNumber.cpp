//
// Created by PhanVanLinh on 13/04/2018.
// phanvanlinh.94vn@gmail.com
//

#include "PrimeNumber.h"

PrimeNumber::PrimeNumber(int num) {
    PrimeNumber::number = num;
}

bool PrimeNumber::isPrime() {
    bool isPrime = true;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        } else {
            isPrime = true;
        }
    }
    return isPrime;
}