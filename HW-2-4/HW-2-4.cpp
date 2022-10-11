#include <iostream>
#include <stdlib.h>

using namespace std;

int findMinCoordinate(int firstPoint, int secondPoint, int thirdPoint, int fourthPoint) {
    int minimalFirst = min(firstPoint, secondPoint);
    int minimalSecond = min(thirdPoint, fourthPoint);
    return min(minimalFirst, minimalSecond);
}

int findMaxCoordinate(int firstPoint, int secondPoint, int thirdPoint, int fourthPoint) {
    int maximumFirst = max(firstPoint, secondPoint);
    int maximumSecond = max(thirdPoint, fourthPoint);
    return max(maximumFirst, maximumSecond);
}

int main() {
    int firstRectangleFirstX, firstRectangleSecondX, firstRectangleThirdX, firstRectangleFourthX,
            firstRectangleFirstY, firstRectangleSecondY, firstRectangleThirdY, firstRectangleFourthY,
            secondRectangleFirstX, secondRectangleSecondX, secondRectangleThirdX, secondRectangleFourthX,
            secondRectangleFirstY, secondRectangleSecondY, secondRectangleThirdY, secondRectangleFourthY;
    cin >> firstRectangleFirstX >> firstRectangleFirstY >> firstRectangleSecondX >> firstRectangleSecondY
        >> firstRectangleThirdX >> firstRectangleThirdY >> firstRectangleFourthX >> firstRectangleFourthY
        >> secondRectangleFirstX >> secondRectangleFirstY >> secondRectangleSecondX >> secondRectangleSecondY
        >> secondRectangleThirdX >> secondRectangleThirdY >> secondRectangleFourthX >> secondRectangleFourthY;
    int firstRectangleMinimalX = findMinCoordinate(firstRectangleFirstX, firstRectangleSecondX, firstRectangleThirdX,
                                                      firstRectangleFourthX);
    int firstRectangleMinimalY = findMinCoordinate(firstRectangleFirstY, firstRectangleSecondY, firstRectangleThirdY,
                                                      firstRectangleFourthY);
    int secondRectangleMinimalX = findMinCoordinate(secondRectangleFirstX, secondRectangleSecondX,
                                                       secondRectangleThirdX, secondRectangleFourthX);
    int secondRectangleMinimalY = findMinCoordinate(secondRectangleFirstY, secondRectangleSecondY,
                                                       secondRectangleThirdY, secondRectangleFourthY);
    int firstRectangleMaximumX = findMaxCoordinate(firstRectangleFirstX, firstRectangleSecondX, firstRectangleThirdX,
                                                      firstRectangleFourthX);
    int firstRectangleMaximumY = findMaxCoordinate(firstRectangleFirstY, firstRectangleSecondY, firstRectangleThirdY,
                                                      firstRectangleFourthY);
    int secondRectangleMaximumX = findMaxCoordinate(secondRectangleFirstX, secondRectangleSecondX,
                                                       secondRectangleThirdX, secondRectangleFourthX);
    int secondRectangleMaximumY = findMaxCoordinate(secondRectangleFirstY, secondRectangleSecondY,
                                                       secondRectangleThirdY, secondRectangleFourthY);
    int xCrossing =
            min(firstRectangleMaximumX, secondRectangleMaximumX) - max(firstRectangleMinimalX, secondRectangleMinimalX);
    int yCrossing =
            min(firstRectangleMaximumY, secondRectangleMaximumY) - max(firstRectangleMinimalY, secondRectangleMinimalY);
    if ((xCrossing >= 0) && (yCrossing >= 0))
        cout << "YES" << " " << xCrossing * yCrossing;
    else
        cout << "NO";
}