#include <iostream>
#include <math.h>

using namespace std;

int recursiveFibonacci(int number) {
    if (number == 0 || number == 1)
        return number;
    return recursiveFibonacci(number - 1) + recursiveFibonacci(number - 2);
}

double constantFibonacci(int number) {
    return (pow(((1 + sqrt(5)) / 2), number) - pow(((1 - sqrt(5)) / 2), number)) / sqrt(5);
}

int main() {
    int number;
    cin >> number;
    cout << constantFibonacci(number) << endl;
    cout << recursiveFibonacci(number);
    return 0;
}