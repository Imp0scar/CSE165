#ifndef CIRCLE_H
#define CIRCLE_H

#include "Sortable.h"
#include <iostream>

class Circle : public Sortable {
public:
    float radius;
    // Constructor with a default value for radius
    Circle(float r = 0) : radius(r) {}

    // Override the compare method for sorting
    bool compare(const Sortable* other) const override {
        const Circle* otherCircle = dynamic_cast<const Circle*>(other);
        if (otherCircle) {
            return this->radius < otherCircle->radius; // Sort Circles in ascending order of radius
        }
        return true; // Circles come before Participants
    }

    // Override the print method for printing
    void print() const override {
        std::cout << "Circle with radius: " << radius << std::endl;
    }
};

#endif
