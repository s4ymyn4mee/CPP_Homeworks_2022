#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string clearString(string line) {
    string newLine = "";
    int countOfAts = 0;
    int i = 0;
    while (i < line.length()) {
        if (line[i] != '@')
            newLine += line[i++];
        else {
            countOfAts = 0;
            for (int j = i; j < line.length(); j++) {
                if (line[j] == '@') {
                    countOfAts++;
                    newLine.erase(newLine.size() - 1);
                } else
                    break;
            }
            i += countOfAts;
        }
    }
    return newLine;
}

int main() {
    fstream fin("C:\\Users\\perpuk\\CLionProjects\\HW-5-1\\input.txt");
    ofstream fout("C:\\Users\\perpuk\\CLionProjects\\HW-5-1\\output.txt");
    string line;
    fin >> line;
    fout << clearString(line);
    fin.close();
    fout.close();
    return 0;
}