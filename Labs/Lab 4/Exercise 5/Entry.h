#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

struct Entry {
private:
    std::string firstName;
    std::string lastName;
    std::string emailAddress;

public:
    Entry() {}

    void setName(const std::string& name) {
        firstName = name;
    }

    std::string getName() const {
        return firstName;
    }

    void setLastname(const std::string& name) {
                lastName = name;
    }

    std::string getLastName() const {
        return lastName;
    }

    void setEmail(const std::string& email) {
        emailAddress = email;
    }

    std::string getEmail() const {
        return emailAddress;
    }

    void print() const {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "Email Address: " << emailAddress << std::endl;
    }
};

#endif
