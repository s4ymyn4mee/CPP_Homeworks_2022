#include <iostream>
#include <string>

using namespace std;

int main() {
    string word, palindromeLengthTwo, palindromeLengthThree;
    getline(cin, word);
    string minimalPalindromeLengthTwo = "~~~~";
    string minimalPalindromeLengthThree = "~~~~";
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == word[i + 1]) {
            palindromeLengthTwo = word[i];
            palindromeLengthTwo += word[i + 1];
            if (palindromeLengthTwo < minimalPalindromeLengthTwo)
                minimalPalindromeLengthTwo = palindromeLengthTwo;
        }
        if (word[i] == word[i + 2]) {
            palindromeLengthThree = word[i];
            palindromeLengthThree += word[i + 1];
            palindromeLengthThree += word[i + 2];
            if (palindromeLengthThree < minimalPalindromeLengthThree)
                minimalPalindromeLengthThree = palindromeLengthThree;
        }
    }
    if (minimalPalindromeLengthTwo != "~~~~")
        cout << minimalPalindromeLengthTwo;
    else if (minimalPalindromeLengthThree != "~~~~")
        cout << minimalPalindromeLengthThree;
    else
        cout << "There is no palindrome in the word, bro";
    return 0;
}