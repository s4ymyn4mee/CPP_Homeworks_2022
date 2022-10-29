#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    getline(cin, word);
    for (int i = 0; i < word.length() / 2 + word.length() % 2; i++){
        if (word[i] != word[word.length() - 1 - i]) {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}