#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string deleteWordsLessLength(string line, int lengthOfWord) {
    string newLine = "";
    int i = 0, countOfLetters = 0;
    while (i < line.length()) {
        newLine += ' ';
        countOfLetters = 0;
        for (int j = i + 1; j < line.length(); j++) {
            if (line[j] != ' ')
                countOfLetters++;
            else
                break;
        }
        if (countOfLetters >= lengthOfWord) {
            for (int j = 1; j <= countOfLetters; j++)
                newLine += line[i + j];
        }
        i += countOfLetters + 1;
    }
    return newLine;
}
string deleteExtraSpaces(string line) {
    string newLine = "";
    int flagOfStartSpaces = 0;
    int i = 0;
    while (i < line.length()) {
        if (line[i] != ' ') {
            newLine += line[i];
            flagOfStartSpaces = 1;
            i++;
        } else {
            if (flagOfStartSpaces == 0)
                i++;
            else {
                newLine += ' ';
                int countOfSpaces = 0, j = i;
                while (line[j] == ' ' && j < line.length()) {
                    countOfSpaces++;
                    j++;
                }
                i += countOfSpaces;
            }
        }
    }
    if (newLine[newLine.size() - 1] == ' ')
        newLine.erase(newLine.size() - 1);
    return newLine;
}
int main() {
    fstream fin("C:\\Users\\perpuk\\CLionProjects\\HW-5-3\\input.txt");
    ofstream fout("C:\\Users\\perpuk\\CLionProjects\\HW-5-3\\output.txt");
    string line;
    int lengthOfWord;
    fin >> lengthOfWord;
    getline(fin, line);
    fout << deleteExtraSpaces(deleteWordsLessLength(line, lengthOfWord));
    fin.close();
    fout.close();
    return 0;
}