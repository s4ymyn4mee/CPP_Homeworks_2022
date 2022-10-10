#include <iostream>
#include <stdlib.h>

using namespace std;

int findingMinCoordinate(int a, int b, int c, int d) {
    int min1 = min(a, b);
    int min2 = min(c, d);
    return min(min1, min2);
}

int findingMaxCoordinate(int a, int b, int c, int d) {
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
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
    int firstRectangleMinimalX = findingMinCoordinate(firstRectangleFirstX, firstRectangleSecondX, firstRectangleThirdX,
                                                      firstRectangleFourthX);
    int firstRectangleMinimalY = findingMinCoordinate(firstRectangleFirstY, firstRectangleSecondY, firstRectangleThirdY,
                                                      firstRectangleFourthY);
    int secondRectangleMinimalX = findingMinCoordinate(secondRectangleFirstX, secondRectangleSecondX,
                                                       secondRectangleThirdX, secondRectangleFourthX);
    int secondRectangleMinimalY = findingMinCoordinate(secondRectangleFirstY, secondRectangleSecondY,
                                                       secondRectangleThirdY, secondRectangleFourthY);
    int firstRectangleMaximumX = findingMaxCoordinate(firstRectangleFirstX, firstRectangleSecondX, firstRectangleThirdX,
                                                      firstRectangleFourthX);
    int firstRectangleMaximumY = findingMaxCoordinate(firstRectangleFirstY, firstRectangleSecondY, firstRectangleThirdY,
                                                      firstRectangleFourthY);
    int secondRectangleMaximumX = findingMaxCoordinate(secondRectangleFirstX, secondRectangleSecondX,
                                                       secondRectangleThirdX, secondRectangleFourthX);
    int secondRectangleMaximumY = findingMaxCoordinate(secondRectangleFirstY, secondRectangleSecondY,
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
