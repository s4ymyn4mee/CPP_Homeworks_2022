#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x1, x2, x3, y1, y2, y3, xh, yh, distance;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    distance = (abs((y2 - y1) * x3 - (x2 - x1) * y3 + y1 * x2 - x1 * y2)) / (sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)));
    xh = ((x1-x2)*(x1-x2)*x3 + (x2-x1)*(y2-y1)*y3 - (y1*x2 - x1*y2)*(y2-y1))/((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
    if (y2!=y1) yh = ((x1-x2)*xh + (y2-y1)*y3 + (x2-x1)*x3)/(y2-y1);
    else yh = y1;
    cout << distance << " " << xh << " " << yh;
}
