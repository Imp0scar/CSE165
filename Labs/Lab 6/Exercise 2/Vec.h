#ifndef VEC_H
#define VEC_H

using namespace std;

class Vec{

public:
    float x;
    float y;

//Default constructor
    Vec() : x(0.0f), y(0.0f) {}

    //Constructor from two floats
    Vec(float xNum, float yNum) : x(xNum), y(yNum) {}



 //Set method
    void set(float xNum, float yNum){
        x = xNum;
        y = yNum;
    }

    //Add method
    void add(const Vec &other){
        x += other.x;
        y += other.y;
    }

    //Print method
    void print(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

#endif
