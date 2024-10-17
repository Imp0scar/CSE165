#pragma once

class Circle {
private:
    double x;
    double y;
    double r;

public:
    // Default constructor
    Circle() : x(0.0), y(0.0), r(1.0) {}

    // Constructor with arguments
    Circle(double centerX, double centerY, double radius) : x(centerX), y(centerY), r(radius) {}

    // Getters and setters for x, y, and r
    double getX() const {
        return x;
    }

    void setX(double newX) {
        x = newX;
    }

    double getY() const {
        return y;
    }

    void setY(double newY) {
        y = newY;
    }

    double getR() const {
        return r;
    }

    void setR(double newRadius) {
        r = newRadius;
    }

    // Calculate and return the area of the circle
    double getArea() const {
        return 3.14159 * r * r;
    }
};
