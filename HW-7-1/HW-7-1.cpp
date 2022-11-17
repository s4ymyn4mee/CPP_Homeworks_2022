#include <iostream>

using namespace std;

void bubbleSort(int *array) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temporary = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporary;
            }
        }
    }
}

int main() {
    int array[10];
    for (int i = 0; i < 10; i++)
        cin >> array[i];
    bubbleSort(array);
    for (int i = 0; i < 10; i++)
        cout << array[i] << " ";
    return 0;
}