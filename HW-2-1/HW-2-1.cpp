#include <iostream>

using namespace std;

int main(){
    string firstString, secondString, thirdString, minimalString;
    cin >> firstString >> secondString >> thirdString;
    if (firstString < secondString){
        if (firstString < thirdString)
            minimalString = firstString;
        else
            minimalString = thirdString;
    }
    else{
        if (secondString < thirdString)
            minimalString = secondString;
        else
            minimalString = thirdString;
    }
    cout << minimalString;
    return 0;
}