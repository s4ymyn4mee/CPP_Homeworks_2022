#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> setOfWords;
    int amountOfWords;
    cin >> amountOfWords;
    for (int i = 0; i < amountOfWords; i++) {
        string element;
        cin >> element;
        setOfWords.insert(element);
    }
    cout << setOfWords.size();
    return 0;
}