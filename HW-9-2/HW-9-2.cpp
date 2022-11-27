#include <iostream>

using namespace std;

int main() {
    int firstArray[5][5], secondArray[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> firstArray[i][j];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> secondArray[i][j];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << firstArray[i][j] + secondArray[i][j] << " ";
        cout << endl;
    }
    return 0;
}