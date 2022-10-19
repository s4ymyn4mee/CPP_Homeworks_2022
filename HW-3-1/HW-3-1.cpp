#include <iostream>

using namespace std;

int main() {
    int sizeOfArray, sumTemperature = 0, countOfDays = 0;
    cin >> sizeOfArray;
    int arrayOfDays[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        cin >> arrayOfDays[i];
        sumTemperature += arrayOfDays[i];
    }
    int averageTemperature = sumTemperature / sizeOfArray;
    for (int i = 0; i < sizeOfArray; i++) {
        if (arrayOfDays[i] > averageTemperature)
            countOfDays++;
    }
    cout << countOfDays << endl;
    for (int i = 0; i < sizeOfArray; i++)
        if (arrayOfDays[i] > averageTemperature)
            cout << i << " ";
    return 0;
}