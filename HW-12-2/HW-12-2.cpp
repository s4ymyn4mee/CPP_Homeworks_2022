#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number) {
    if (number == 1)
        return false;
    for (int i = 2; i < int(sqrt(number)) + 1; i++)
        if (number % i == 0)
            return false;
    return true;
}

int sumOfNumbersFibonacci(int amountOfNumbers) {
    int sumOfPrimeNumbers = 0;
    int previousFirstNumber = 0, previousSecondNumber = 1;
    for (int i = 0; i < amountOfNumbers - 1; i++) {
        if (isPrime(previousSecondNumber))
            sumOfPrimeNumbers += previousSecondNumber;
        int temporary = previousFirstNumber;
        previousFirstNumber = previousSecondNumber;
        previousSecondNumber = temporary + previousFirstNumber;
    }
    return sumOfPrimeNumbers;
}

int main() {
    int amountOfNumbers;
    cin >> amountOfNumbers;
    cout << sumOfNumbersFibonacci(amountOfNumbers);
    return 0;
}