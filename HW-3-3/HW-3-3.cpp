#include <iostream>

using namespace std;

int main() {
    int sortedArrayOfNumbers[10];
    int sumOfTwoNumbers;
    bool bFlag = 1;
    for (int i = 0; i < 10; i++)
        cin >> sortedArrayOfNumbers[i];
    cin >> sumOfTwoNumbers;
    for (int i = 0; i < 9; i++) {
        for (int j = 9; j > i; j--){
            if (sortedArrayOfNumbers[i] + sortedArrayOfNumbers[j] < sumOfTwoNumbers)
                break;
            else if (sortedArrayOfNumbers[i] + sortedArrayOfNumbers[j] == sumOfTwoNumbers) {
                cout << sortedArrayOfNumbers[i] << " " << sortedArrayOfNumbers[j];
                bFlag = 0;
                break;
            }
        }
    }
    if (bFlag)
        cout << 0;
    return 0;
}