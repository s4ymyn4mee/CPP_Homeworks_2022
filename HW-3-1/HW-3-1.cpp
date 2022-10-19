#include <iostream>

using namespace std;

int main() {
    int sizeOfArray, sumTemperature, countOfDays = 0, i;
    cin >> sizeOfArray;
    int arrayOfDays[sizeOfArray];
    for (i = 0; i < sizeOfArray; i++) {
        cin >> arrayOfDays[i];
        sumTemperature += arrayOfDays[i];
    }
    int averageTemperature = sumTemperature / sizeOfArray;
    for (i = 0; i < sizeOfArray; i++) {
        if (arrayOfDays[i] > averageTemperature)
            countOfDays++;
    }
    cout << countOfDays << endl;
    for (i = 0; i < sizeOfArray; i++)
        if (arrayOfDays[i] > averageTemperature)
            cout << i << " ";
    return 0;
}