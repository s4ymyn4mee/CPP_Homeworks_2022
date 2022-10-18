#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    int fCounter = 0;
    for (int i = 0; i < line.length(); i++){
        if (line[i] == 'f'){
            fCounter++;
            if (fCounter == 2) {
                cout << i;
                break;
            }
        }
    }
    if (fCounter == 1)
        cout << -1;
    if (fCounter == 0)
        cout << -2;
    return 0;
}