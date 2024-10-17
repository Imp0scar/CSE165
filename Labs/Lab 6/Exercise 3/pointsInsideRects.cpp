#include <iostream>
#include <vector>
#include "Rect.h"
#include "Vec.h"

using namespace std;

int main() {
    vector<Rect> rectangles;
    int increment = 0;

    for (int increment = 0; increment <= 4; increment++) {
    if (increment == 0) {
        cout << "Type 4 floats to define a rectangle: ";
        increment++;
    } else {
        cout << "Type 4 floats to define the next rectangle: ";
    }

    float x, y, width, height;
    cin >> x >> y >> width >> height;

    if (x < 0 && y < 0 && width < 0 && height < 0) {
        break;
    }

    Rect rect(x, y, width, height);
    rectangles.push_back(rect);
}
    float xPoint, yPoint;

    while (xPoint != -99.0f && yPoint != -99.0f) {
        cout << "Type 2 floats to define a point: ";
        cin >> xPoint >> yPoint;

        if (xPoint == -99.0f && yPoint == -99.0f) {
            break;
        }

        int i = 0;
for (const Rect& rect : rectangles) {
    const Vec point(xPoint, yPoint);

    cout << "The point is " << (rect.contains(point) ? "INSIDE" : "OUTSIDE") << " of rectangle " << i << endl;
    i++;
}

    }

    cout << "Finished!" << endl;

    return 0;
}

