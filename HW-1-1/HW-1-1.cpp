#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float xLineFirst, xLineSecond, yLineFirst, yLineSecond, xPoint, yPoint;
    cin >> xLineFirst >> yLineFirst >> xLineSecond >> yLineSecond >> xPoint >> yPoint;
    float distance = (abs((yLineSecond - yLineFirst) * xPoint - (xLineSecond - xLineFirst) * yPoint + yLineFirst * xLineSecond - xLineFirst * yLineSecond)) / (sqrt((yLineSecond - yLineFirst) * (yLineSecond - yLineFirst) + (xLineSecond - xLineFirst) * (xLineSecond - xLineFirst)));
    float xCrossing = ((xLineFirst - xLineSecond) * (xLineFirst - xLineSecond) * xPoint + (xLineSecond - xLineFirst) * (yLineSecond - yLineFirst) * yPoint - (yLineFirst * xLineSecond - xLineFirst * yLineSecond) * (yLineSecond - yLineFirst)) / ((yLineSecond - yLineFirst) * (yLineSecond - yLineFirst) + (xLineSecond - xLineFirst) * (xLineSecond - xLineFirst));
    float yCrossing;
    if (yLineSecond != yLineFirst)
        yCrossing = ((xLineFirst - xLineSecond) * xCrossing + (yLineSecond - yLineFirst) * yPoint + (xLineSecond - xLineFirst) * xPoint) / (yLineSecond - yLineFirst);
    else
        yCrossing = yLineFirst;
    cout << distance << " " << xCrossing << " " << yCrossing;
    return 0;
}
