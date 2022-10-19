#include <iostream>
#include <string>

using namespace std;

int main(){
    int number, scaleOfNotation;
    cin >> number >> scaleOfNotation;
    string transferredNumber = "";
    if (number != 0){
        while (number > 0) {
            transferredNumber = to_string(number % scaleOfNotation) + transferredNumber;
            number /= scaleOfNotation;
        }
        cout << transferredNumber;
    }
    else
        cout << 0;
    return 0;
}