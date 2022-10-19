#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int hourPointer, minutePointer;
    cin >> hourPointer >> minutePointer;
    cout << (hourPointer + int(pow(-1, hourPointer >= 6)) * 2 * abs(hourPointer - 6)) % 12 << " ";
    cout << (minutePointer + int(pow(-1, minutePointer >= 30)) * 2 * abs(minutePointer - 30)) % 60;
    return 0;
}