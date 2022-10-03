#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float A, B, C, Disc;
    cin >> A >> B >> C;
    Disc = B*B - 4*A*C;
    if (Disc>0) cout << (-B-sqrt(Disc))/2/A << " " << (-B+sqrt(Disc))/2/A;
    else if (Disc==0) cout << -B/2/A;
    return 0;
}
