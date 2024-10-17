#ifndef Rect_H
#define Rect_H

using namespace std;
#include "Vec.h"

class Rect{
public:
    float x, y, width, height;

//Default constructor
Rect() : x(0.0f), y(0.0f), width(0.0f), height(0.0f) {}

//Constructor from four floats
     Rect(float xNum, float yNum, float widthNum, float heightNum)  : x(xNum), y(yNum), width(widthNum), height(heightNum) {}

// Method to check if a Vec is inside the rectangle
bool contains(const Vec& point) {
    float rectRight = x + width;
    float rectBottom = y - height;

    return (point.x >= x && point.x <= rectRight && point.y <= y && point.y >= rectBottom);
}



};

#endif
