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

    // Override the compare method for sorting
    bool compare(const Sortable* other) const override {
        const Participant* otherParticipant = dynamic_cast<const Participant*>(other);
        if (otherParticipant) {
            if (this->score != otherParticipant->score) {
                return this->score > otherParticipant->score; // Sort by score (highest to lowest)
            }
            if (this->age != otherParticipant->age) {
                return this->age < otherParticipant->age; // Sort by age (youngest to oldest)
            }
            return this->name < otherParticipant->name; // Sort alphabetically by name
        }
        return false; // Handle error condition
    }

    // Override the print method for printing
    void print() const override {
        std::cout << name << "\t" << age << "\t" << score << std::endl;
    }
};

#endif
