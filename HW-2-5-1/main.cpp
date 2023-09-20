#include "RationalNumber.h"
#include <iostream>

int main() {
    RationalNumber firstFraction(5, -7);
    RationalNumber secondFraction(10, -8);
    RationalNumber sumOfFractions = firstFraction + secondFraction;
    sumOfFractions.Print();
    if (firstFraction == secondFraction)
        std::cout << "yes";
    else std::cout << "no";
    return 0;
}