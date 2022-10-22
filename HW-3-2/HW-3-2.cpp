#include <iostream>

using namespace std;

int main(){
    int hourPointer, minutePointer;
    cin >> hourPointer >> minutePointer;
    cout << (hourPointer - 2 * (hourPointer - 6)) % 12 << " ";
    cout << (minutePointer - 2 * (minutePointer - 30)) % 60;
    return 0;
}