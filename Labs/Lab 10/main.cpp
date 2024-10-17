// Time.cpp
#include "Time.h"
#include <iostream>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::~Time() {}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds;
}

void Time::setHours(int h) {
    hours = h;
}

void Time::setMinutes(int m) {
    minutes = m;
}

void Time::setSeconds(int s) {
    seconds = s;
}

void Time::print() const {
    std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
}

Time Time::operator+(const Time& other) const {
    Time result;
    result.seconds = seconds + other.seconds;
    result.minutes = minutes + other.minutes + result.seconds / 60;
    result.hours = hours + other.hours + result.minutes / 60;

    // Adjusting values to be within valid ranges
    result.seconds %= 60;
    result.minutes %= 60;
    result.hours %= 24;

    return result;
}

Time Time::operator++() {
    // Prefix increment
    ++hours;
    hours %= 24;
    return *this;
}

Time Time::operator++(int) {
    // Postfix increment
    Time temp(*this);
    ++(*this);
    return temp;
}

