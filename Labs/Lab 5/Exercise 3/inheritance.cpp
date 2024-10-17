#include <iostream>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "display.h"

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<Animal*> animalList;

    for (int i = 0; i < N; i++) {
        char type;
        string name;
        int age;
        cin >> type >> name >> age;

        if (type == 'A') {
            Animal* animal = new Animal();
            animal->setName(name);
            animal->setAge(age);
            animalList.push_back(animal);
        } else if (type == 'D') {
            Dog* dog = new Dog(name, age);
            animalList.push_back(dog);
        }
    }

    // Call the display function to print the names of all animals in the list
    display(animalList);

    // Clean up: Delete dynamically allocated objects
    for (Animal* animal : animalList) {
        delete animal;
    }

    return 0;
}
