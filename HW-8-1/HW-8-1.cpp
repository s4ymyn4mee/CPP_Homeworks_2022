#include <iostream>

using namespace std;

void inputArray(string *array, size_t lengthArray){
    for (int i = 0; i < lengthArray; i++)
        cin >> array[i];
}

void stringArrayToInt(string *array, int *intArray, size_t lengthArray){
    for (int i = 0; i < lengthArray; i++)
        intArray[i] = stoi(array[i]);
}

string joinArray(string *array, size_t lengthArray, char separator){
    string line = "";
    for (int i = 0; i < lengthArray - 1; i++)
        line += array[i] + separator;
    return line + array[lengthArray - 1];
}

void outputArray(string *array, size_t lengthArray){
    for (int i = 0; i < lengthArray; i++)
        cout << array[i] << " ";
}

int main(){
    int const lengthArray = 10;
    string array[lengthArray];
    inputArray(array, lengthArray);
    for (int i = 0; i < lengthArray; i++)
        cout << array[i] << " ";
    cout << endl;
    int intArray[lengthArray];
    stringArrayToInt(array, intArray, lengthArray);
    for (int i = 0; i < lengthArray; i++)
        cout << intArray[i] << " ";
    cout << endl;
    char separator = '&';
    cout << joinArray(array, lengthArray, separator) << endl;
    outputArray(array, lengthArray);
    return 0;
}
