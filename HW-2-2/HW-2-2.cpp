#include <iostream>
#include <string>

using namespace std;

int main(){
    string stringLine;
    getline(cin, stringLine);
    int fCounter = 0;
    for (int i = 0; i < stringLine.length(); i ++){
        if (stringLine[i] == 'f'){
            fCounter ++;
            if (fCounter == 2)
                cout << i;
        }
    }
    if (fCounter == 1)
        cout << -1;
    if (fCounter == 0)
        cout << -2;
    return 0;
}