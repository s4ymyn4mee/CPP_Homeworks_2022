#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float quadratic, linear, freeTerm;
    cin >> quadratic >> linear >> freeTerm;
    float discriminant = linear * linear - 4 * quadratic * freeTerm;
    if (discriminant > 0)
        cout << (-linear - sqrt(discriminant)) / (2 * quadratic) << " " << (-linear + sqrt(discriminant)) / (2 * quadratic);
    else if (discriminant == 0)
        cout << -linear / (2 * quadratic);
    return 0;
}
