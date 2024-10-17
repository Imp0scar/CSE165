#include <iostream>
#include <string>
#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main() {
    Data myData;

    char action;
    while (action != 'q' || action != 'Q') {
        cout << "Enter action (C for Circle, T for Participant, S to Sort, P to Print, Q to Quit): ";
        cin >> action;

        if (action == 'q' || action == 'Q') {
            break;
        } else if (action == 'c' || action == 'C') {
            float radius;
            cout << "Enter the radius for the Circle: ";
            cin >> radius;
            myData.add(new Circle(radius));
            cout << "Circle added" << endl;
        } else if (action == 't' || action == 'T') {
            string name;
            int age;
            double score;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
            cout << "Enter score: ";
            cin >> score;

            myData.add(new Participant(name, age, score));
            cout << "Participant added" << endl;
        } else if (action == 's' || action == 'S') {
            myData.sort();
            cout << "Data sorted" << endl;
        } else if (action == 'p' || action == 'P') {
            myData.print();
        } else {
            cout << "Wrong input, try again!" << endl;
        }
    }

    return 0;
}
