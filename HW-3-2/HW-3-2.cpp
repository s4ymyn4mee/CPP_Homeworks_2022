#include <iostream>

using namespace std;

int main(){
    int hourPointer, minutePointer;
    cin >> hourPointer >> minutePointer;
    cout << (12 - hourPointer) % 12 << " " << (60 - minutePointer) % 60;
    return 0;
}