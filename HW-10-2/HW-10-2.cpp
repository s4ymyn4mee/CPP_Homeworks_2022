#include <iostream>

using namespace std;

void shiftArray(int *array, int lengthOfArray, int amountOfPositions) {
    amountOfPositions %= lengthOfArray;
    for (int i = 0; i < amountOfPositions; i++) {
        int temporary = array[0];
        for (int j = 0; j < lengthOfArray; j++) {
            array[j] = array[j + 1];
        }
        array[lengthOfArray - 1] = temporary;
    }
    for (int i = 0; i < lengthOfArray; i++)
        cout << array[i] << " ";
}

int main() {
    const int lengthOfArray = 10;
    int array[lengthOfArray];
    for (int i = 0; i < lengthOfArray; i++)
        cin >> array[i];
    int amountOfPositions;
    cin >> amountOfPositions;
    shiftArray(array, lengthOfArray, amountOfPositions);
    return 0;
}