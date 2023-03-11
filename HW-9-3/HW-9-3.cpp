#include <iostream>

using namespace std;

void multiplyMatrices(int firstArray[5][5], int secondArray[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int receivedValue = 0;
            for (int k = 0; k < 5; k++)
                receivedValue += firstArray[i][k] * secondArray[k][j];
            cout << receivedValue << " ";
        }
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
    multiplyMatrices(firstArray, secondArray);
    return 0;
}