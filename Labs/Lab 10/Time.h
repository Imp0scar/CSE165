#ifndef TIME_H
#define TIME_H

#include <iostream>


class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time();
    Time(int h, int m, int s);

    ~Time();

    // Accessor methods
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    // Mutator methods
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    // Print method
    void print() const;

    // Overloaded addition operator
    Time operator+(const Time& other) const;

    // Overloaded increment operators
    Time operator++();    // Prefix increment
    Time operator++(int); // Postfix increment
};



#endif