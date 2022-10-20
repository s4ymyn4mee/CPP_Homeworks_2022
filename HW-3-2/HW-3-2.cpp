#include <iostream>

using namespace std;

int main(){
    int hourPointer, minutePointer;
    cin >> hourPointer >> minutePointer;
    if (hourPointer >= 6)
        cout << (hourPointer - 2 * abs(hourPointer - 6)) % 12 << " ";
    else
        cout << (hourPointer + 2 * abs(hourPointer - 6)) % 12 << " ";
    if (minutePointer >= 30)
        cout << (minutePointer - 2 * abs(minutePointer - 30)) % 60 << " ";
    else
        cout << (minutePointer + 2 * abs(minutePointer - 30)) % 60 << " ";
    return 0;
}