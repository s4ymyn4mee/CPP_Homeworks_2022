#include <iostream>

using namespace std;

void insertSort(int *array) {
    for (int i = 1; i < 10; i++) {
        int j = i;
        while (array[j - 1] > array[j] && j - 1 >= 0) {
            int temporary = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temporary;
            j--;
        }
    }
}

int main() {
    int array[10];
    for (int i = 0; i < 10; i++)
        cin >> array[i];
    insertSort(array);
    for (int i = 0; i < 10; i++)
        cout << array[i] << " ";
    return 0;
}