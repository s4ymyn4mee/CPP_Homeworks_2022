#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(int firstElement, int nextElement) {
    return abs(firstElement) < abs(nextElement);
}

int main(){
    int lengthArray;
    int array[lengthArray];
    cin >> lengthArray;
    for (int i = 0; i < lengthArray; i++)
        cin >> array[i];
    sort (array, array + lengthArray, comparator);
    for (int i = 0; i < lengthArray; i++)
        cout << array[i] << " ";
    return 0;
}