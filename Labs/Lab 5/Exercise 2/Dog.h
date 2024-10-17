#pragma once

#include "Animal.h"

class Dog : public Animal {
public:
    Dog(const string& name, int age) : Animal() {
        this->name = name;
        this->age = age;
        cout << "Creating Dog" << endl;
    }

    ~Dog() {
        cout << "Deleting Dog" << endl;
    }

    void feed() {
        cout << "Dog food, please!" << endl;
    }
};
