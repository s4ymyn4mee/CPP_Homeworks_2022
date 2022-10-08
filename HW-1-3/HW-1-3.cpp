#include <iostream>

using namespace std;

int main(){
    float fullPrice, firstBorder, secondBorder, firstDiscount, secondDiscount;
    cin >> fullPrice >> firstBorder >> secondBorder >> firstDiscount >> secondDiscount;
    if (fullPrice > secondBorder)
        cout << fullPrice - fullPrice * secondDiscount / 100;
    else if (fullPrice > firstBorder)
        cout << fullPrice - fullPrice * firstDiscount / 100;
    else
        cout << fullPrice;
    return 0;
}
