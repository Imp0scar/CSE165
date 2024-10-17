#ifndef OBJECT_H
#define OBJECT_H

class Object {
public:
    Object() {
        count++; // Increment count when an Object is created.
    }

    Object(const Object& other) {
        count++; // Increment count when a copy of an Object is created.
    }


    static int count; // Static member variable to keep track of the count.

};

#endif
