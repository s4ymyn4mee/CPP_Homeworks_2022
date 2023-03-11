#include <iostream>

using namespace std;

void sumMatrices(int firstArray[5][5], int secondArray[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << firstArray[i][j] + secondArray[i][j] << " ";
        cout << endl;
    }
}

int main() {
    const int lengthArray = 5;
    int firstArray[lengthArray][lengthArray], secondArray[lengthArray][lengthArray];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> firstArray[i][j];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> secondArray[i][j];
    sumMatrices(firstArray, secondArray);
    return 0;
}