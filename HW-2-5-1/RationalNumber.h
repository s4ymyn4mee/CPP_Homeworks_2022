#pragma once

#include <iostream>

class RationalNumber {
private:
    std::pair<int, int> fraction;

public:

    RationalNumber() :
            fraction(std::make_pair(0, 1)) {

    }

    RationalNumber(int numerator, int denominator) :
            fraction(std::make_pair(numerator, denominator)) {
        if (denominator <= 0) {
            std::cout << "Error" << std::endl;
            fraction.first = 0;
            fraction.second = 1;
        } else {
            ReduceFraction(fraction);
        }
    }

    void ReduceFraction(std::pair<int, int> &otherNumber) const {
        int nod = Nod(otherNumber.first, otherNumber.second);
        otherNumber.first /= nod;
        otherNumber.second /= nod;
    }

    int Nod(int firstNumber, int secondNumber) const {
        if (secondNumber == 0)
            return firstNumber;
        return Nod(secondNumber, firstNumber % secondNumber);
    }

    RationalNumber Add(const RationalNumber &otherNumber) {
        RationalNumber temporaryNumber(
                fraction.first * otherNumber.fraction.second + otherNumber.fraction.first * fraction.second,
                fraction.second * otherNumber.fraction.second);
        ReduceFraction(temporaryNumber.fraction);
        return temporaryNumber;
    }

    RationalNumber Subtract(const RationalNumber &otherNumber) {
        RationalNumber temporaryNumber(
                fraction.first * otherNumber.fraction.second - otherNumber.fraction.first * fraction.second,
                fraction.second * otherNumber.fraction.second);
        ReduceFraction(temporaryNumber.fraction);
        return temporaryNumber;
    }

    RationalNumber Multiply(const RationalNumber &otherNumber) {
        RationalNumber temporaryNumber(fraction.first * otherNumber.fraction.first,
                                       fraction.second * otherNumber.fraction.second);
        ReduceFraction(temporaryNumber.fraction);
        return temporaryNumber;
    }

    RationalNumber Divide(const RationalNumber &otherNumber) {
        RationalNumber temporaryNumber(fraction.first * otherNumber.fraction.second,
                                       fraction.second * otherNumber.fraction.first);
        ReduceFraction(temporaryNumber.fraction);
        return temporaryNumber;
    }

    RationalNumber operator+(const RationalNumber &otherNumber) {
        return Add(otherNumber);
    }

    RationalNumber operator-(const RationalNumber &otherNumber) {
        return Subtract(otherNumber);
    }

    RationalNumber operator*(const RationalNumber &otherNumber) {
        return Multiply(otherNumber);
    }

    RationalNumber operator/(const RationalNumber &otherNumber) {
        return Divide(otherNumber);
    }

    bool Equal(const RationalNumber &otherNumber) {
        if (fraction.first == otherNumber.fraction.first && fraction.second == otherNumber.fraction.second)
            return true;
        return false;
    }

    bool NotEqual(const RationalNumber &otherNumber) {
        if (fraction.first == otherNumber.fraction.first && fraction.second == otherNumber.fraction.second)
            return false;
        return true;
    }

    bool Greater(const RationalNumber &otherNumber) {
        if (fraction.first * otherNumber.fraction.second > otherNumber.fraction.first * fraction.second)
            return true;
        return false;
    }

    bool GreaterOrEqual(const RationalNumber &otherNumber) {
        if (fraction.first * otherNumber.fraction.second >= otherNumber.fraction.first * fraction.second)
            return true;
        return false;
    }

    bool Less(const RationalNumber &otherNumber) {
        if (fraction.first * otherNumber.fraction.second < otherNumber.fraction.first * fraction.second)
            return true;
        return false;
    }

    bool LessOrEqual(const RationalNumber &otherNumber) {
        if (fraction.first * otherNumber.fraction.second <= otherNumber.fraction.first * fraction.second)
            return true;
        return false;
    }

    bool operator==(const RationalNumber &otherNumber) {
        return Equal(otherNumber);
    }

    bool operator!=(const RationalNumber &otherNumber) {
        return NotEqual(otherNumber);
    }

    bool operator>(const RationalNumber &otherNumber) {
        return Greater(otherNumber);
    }

    bool operator>=(const RationalNumber &otherNumber) {
        return GreaterOrEqual(otherNumber);
    }

    bool operator<(const RationalNumber &otherNumber) {
        return Less(otherNumber);
    }

    bool operator<=(const RationalNumber &otherNumber) {
        return LessOrEqual(otherNumber);
    }

    void Print() {
        std::cout << fraction.first << "/" << fraction.second << std::endl;
    }
};