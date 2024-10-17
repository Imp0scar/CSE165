#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "Sortable.h"
#include <vector>
#include <iostream>
#include <string>

class Participant : public Sortable {
public:
    std::string name;
    int age;
    double score;

    // Constructor
    Participant(const std::string& n, int a, double s) : name(n), age(a), score(s) {}

    static bool (*comp_cb)(const Participant*, const Participant*);


    // Override the compare method for sorting
    bool compare(const Sortable* other) const override {
        const Participant* otherParticipant = dynamic_cast<const Participant*>(other);
        if (otherParticipant) {
            return comp_cb(this, otherParticipant);
            
        }
        return false; // Handle error condition
    }

    // Override the print method for printing
    void print() const override {
        std::cout << name << "\t" << age << "\t" << score << std::endl;
        
    }
    
};

#endif
