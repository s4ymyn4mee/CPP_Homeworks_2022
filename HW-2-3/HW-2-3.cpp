#include <iostream>
#include <string>

using namespace std;

int main(){
    int number, scaleOfNotation;
    cin >> number >> scaleOfNotation;
    string transferredNumber = "";
    while (number > 0){
        transferredNumber = to_string(number % scaleOfNotation) + transferredNumber;
        number /= scaleOfNotation;
    }
    cout << transferredNumber;
    return 0;
}