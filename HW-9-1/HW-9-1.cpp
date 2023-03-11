#include <iostream>
#include <map>

using namespace std;

int RomanToArabLetters(string romanNumber) {
    map<char, int> dictionaryOfRomanToArabLetters = {{'I', 1},
                                                     {'V', 5},
                                                     {'X', 10},
                                                     {'L', 50},
                                                     {'C', 100},
                                                     {'D', 500},
                                                     {'M', 1000}};
    int arabNumber = 0, i = 0;
    while (i < romanNumber.length() - 1) {
        if (dictionaryOfRomanToArabLetters[romanNumber[i]] >= dictionaryOfRomanToArabLetters[romanNumber[i + 1]])
            arabNumber += dictionaryOfRomanToArabLetters[romanNumber[i++]];
        else {
            arabNumber +=
                    dictionaryOfRomanToArabLetters[romanNumber[i + 1]] - dictionaryOfRomanToArabLetters[romanNumber[i]];
            i += 2;
        }
    }
    if (dictionaryOfRomanToArabLetters[romanNumber[romanNumber.length() - 2]] >=
        dictionaryOfRomanToArabLetters[romanNumber[romanNumber.length() - 1]])
        arabNumber += dictionaryOfRomanToArabLetters[romanNumber[romanNumber.length() - 1]];
    return arabNumber;
}

string ArabToRomanLetters(int arabNumber) {
    string romanNumber = "";
    if (arabNumber >= 1000)
        for (int i = 0; i < arabNumber / 1000; i++)
            romanNumber += "M";
    arabNumber %= 1000;
    if (arabNumber >= 900)
        romanNumber += "CM";
    else if (arabNumber >= 500) {
        romanNumber += "D";
        for (int i = 0; i < arabNumber / 100 - 5; i++)
            romanNumber += "C";
    } else if (arabNumber >= 400)
        romanNumber += "CD";
    else if (arabNumber >= 100) {
        for (int i = 0; i < arabNumber / 100; i++)
            romanNumber += "C";
    }
    arabNumber %= 100;
    if (arabNumber >= 90)
        romanNumber += "XC";
    else if (arabNumber >= 50) {
        romanNumber += "L";
        for (int i = 0; i < arabNumber / 10 - 5; i++)
            romanNumber += "X";
    } else if (arabNumber >= 40)
        romanNumber += "XL";
    else if (arabNumber >= 10) {
        for (int i = 0; i < arabNumber / 10; i++)
            romanNumber += "X";
    }
    arabNumber %= 10;
    if (arabNumber == 9)
        romanNumber += "IX";
    else if (arabNumber >= 5) {
        romanNumber += "V";
        for (int i = 0; i < arabNumber - 5; i++)
            romanNumber += "I";
    } else if (arabNumber == 4)
        romanNumber += "IV";
    else if (arabNumber >= 1) {
        for (int i = 0; i < arabNumber; i++)
            romanNumber += "I";
    }
    return romanNumber;
}

int main() {
    string romanNumber, scaleOfNotation;
    int arabNumber;
    cin >> scaleOfNotation;
    if (scaleOfNotation == "rim") {
        cin >> romanNumber;
        cout << RomanToArabLetters(romanNumber);
    } else if (scaleOfNotation == "arab") {
        cin >> arabNumber;
        cout << ArabToRomanLetters(arabNumber);
    }
    return 0;
}