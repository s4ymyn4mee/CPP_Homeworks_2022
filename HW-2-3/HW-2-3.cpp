#include <iostream>
#include <string>

using namespace std;

int main(){
    int Number, scaleOfNotation;
    cin >> Number >> scaleOfNotation;
    string transferredNumber = "";
    while (Number > 0){
        transferredNumber = to_string(Number % scaleOfNotation) + transferredNumber;
        Number /= scaleOfNotation;
    }
    cout << transferredNumber;
}