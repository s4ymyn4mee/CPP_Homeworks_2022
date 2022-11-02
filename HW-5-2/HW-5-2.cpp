#include <iostream>
#include <string>

using namespace std;

string deleteExtraSpaces(string line){
    string newLine = "";
    int flagOfStartSpaces = 0;
    int i = 0;
    while (i < line.length()){
        if (line[i] != ' ') {
            newLine += line[i];
            flagOfStartSpaces = 1;
            i++;
        }
        else {
            if (flagOfStartSpaces == 0)
                i++;
            else{
                newLine += ' ';
                int countOfSpaces = 0, j = i;
                while (line[j] == ' ' && j < line.length()){
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
int main(){
    string line;
    getline(cin, line);
    cout << deleteExtraSpaces(line);
    return 0;
}
