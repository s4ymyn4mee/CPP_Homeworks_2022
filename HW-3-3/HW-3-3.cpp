#include <iostream>

using namespace std;

int main() {
    int sortedArrayOfNumbers[10];
    int sumOfTwoNumbers;
    for (int i = 0; i < 10; i++)
        cin >> sortedArrayOfNumbers[i];
    cin >> sumOfTwoNumbers;
    int i = 0, j = 9;
    while (i != j) {
        if (sortedArrayOfNumbers[i] + sortedArrayOfNumbers[j] < sumOfTwoNumbers)
            i++;
        else if (sortedArrayOfNumbers[i] + sortedArrayOfNumbers[j] > sumOfTwoNumbers)
            j--;
        else {
            cout << sortedArrayOfNumbers[i] << " " << sortedArrayOfNumbers[j];
            return 0;
        }
    }
    cout << 0;
    return 0;
}