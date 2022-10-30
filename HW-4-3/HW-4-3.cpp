#include <iostream>
#include <string>

using namespace std;

int main(){
    string line, editedLine, substring = "";
    getline(cin, line);
    int i = 0, flagOfClosingBracket, flagOfLastClosingBracket = 1;
    while (i < line.length()){
        if (line[i] == '(') {
            flagOfClosingBracket = 1;
            for (int j = i; j < line.length(); j++){
                if (line[j] != ')')
                    substring += line[j];
                else{
                    for (int q = j; q < line.length(); q++){
                        if (line[q] == ')')
                            flagOfLastClosingBracket = 1;
                    }
                    if (flagOfLastClosingBracket == 0) {
                        substring = "";
                        i = j + 1;
                        flagOfClosingBracket = 0;
                        break;
                    }
                }
            }
            if (flagOfClosingBracket == 1)
                editedLine += substring;
            flagOfClosingBracket = 1;
        }
        else {
            editedLine += line[i];
            i++;
        }
    }
    cout << editedLine;
}