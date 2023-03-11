#include <iostream>
#include <map>

using namespace std;

void combinationsInArray(int *subArray, int lengthOfSubArray, int *array, int lengthOfArray) {
    map<int, int> amountOfNumbersInSubArray;
    for (int i = 0; i < lengthOfSubArray; i++)
        amountOfNumbersInSubArray[subArray[i]] = 0;
    for (int i = 0; i < lengthOfSubArray; i++)
        amountOfNumbersInSubArray[subArray[i]]++;
    for (int i = 0; i < lengthOfArray - lengthOfSubArray; i++) {
        map<int, int> amountOfNumbersInSubArrayInArray;
        for (int j = 0; j < lengthOfSubArray; j++)
            amountOfNumbersInSubArrayInArray[array[j + i]] = 0;
        for (int j = 0; j < lengthOfSubArray; j++)
            amountOfNumbersInSubArrayInArray[array[j + i]]++;
        int j = 0;
        while (j < lengthOfSubArray) {
            if (amountOfNumbersInSubArrayInArray[array[j + i]] != amountOfNumbersInSubArray[array[j + i]])
                break;
            else
                j++;
        }
        if (j == lengthOfSubArray)
            cout << "Yes, position: " << i << endl;
    }
}

int main() {
    const int lengthOfSubArray = 5, lengthOfArray = 25;
    int array[lengthOfArray], subArray[lengthOfSubArray];
    for (int i = 0; i < lengthOfSubArray; i++)
        cin >> subArray[i];
    for (int i = 0; i < lengthOfArray; i++)
        cin >> array[i];
    combinationsInArray(subArray, lengthOfSubArray, array, lengthOfArray);
    return 0;
}