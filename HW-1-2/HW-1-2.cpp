#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float coefficientA, coefficientB, coefficientC;
    cin >> coefficientA >> coefficientB >> coefficientC;
    float discriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
    if (discriminant > 0)
        cout << (-coefficientB - sqrt(discriminant)) / (2 * coefficientA) << " " << (-coefficientB + sqrt(discriminant)) / (2 * coefficientA);
    else if (discriminant == 0)
        cout << -coefficientB / (2 * coefficientA);
    return 0;
}
