#include <iostream>
#include <map>

using namespace std;

string rationalToDecimal(int numerator, int denominator) {
    string decimalNumber = "0.";
    int lastModulo = numerator % denominator;
    while (numerator != 0) {
        numerator *= 10;
        if (lastModulo == numerator % denominator) {
            decimalNumber += "(" + to_string(numerator / denominator) + ")";
            break;
        } else {
            decimalNumber += to_string(numerator / denominator);
            lastModulo = numerator % denominator;
            numerator %= denominator;
        }
    }
    return decimalNumber;
}

int main() {
    int numerator, denominator;
    cin >> numerator >> denominator;
    cout << rationalToDecimal(numerator, denominator);
    return 0;
}
