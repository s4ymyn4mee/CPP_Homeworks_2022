#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float xPointLineFirst, xPointLineSecond, yLineFirst, yLineSecond, xPoint, yPoint;
    cin >> xPointLineFirst >> yLineFirst >> xPointLineSecond >> yLineSecond >> xPoint >> yPoint;
    float distance = (abs((yLineSecond - yLineFirst) * xPoint - (xPointLineSecond - xPointLineFirst) * yPoint +
                          yLineFirst * xPointLineSecond - xPointLineFirst * yLineSecond)) /
                     (sqrt((yLineSecond - yLineFirst) * (yLineSecond - yLineFirst) +
                           (xPointLineSecond - xPointLineFirst) * (xPointLineSecond - xPointLineFirst)));
    float xCrossing = ((xPointLineFirst - xPointLineSecond) * (xPointLineFirst - xPointLineSecond) * xPoint +
                       (xPointLineSecond - xPointLineFirst) * (yLineSecond - yLineFirst) * yPoint -
                       (yLineFirst * xPointLineSecond - xPointLineFirst * yLineSecond) * (yLineSecond - yLineFirst)) /
                      ((yLineSecond - yLineFirst) * (yLineSecond - yLineFirst) +
                       (xPointLineSecond - xPointLineFirst) * (xPointLineSecond - xPointLineFirst));
    float yCrossing;
    if (yLineSecond != yLineFirst)
        yCrossing = ((xPointLineFirst - xPointLineSecond) * xCrossing + (yLineSecond - yLineFirst) * yPoint +
                     (xPointLineSecond - xPointLineFirst) * xPoint) / (yLineSecond - yLineFirst);
    else
        yCrossing = yLineFirst;
    cout << distance << " " << xCrossing << " " << yCrossing;
    return 0;
}
