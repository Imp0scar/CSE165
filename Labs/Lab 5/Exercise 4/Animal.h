#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal {
protected:
	string name;
	int age;
	static int count;

public:
	Animal() {
		cout << "Creating Generic Animal" << endl;
		name = "Generic Animal";
		age = 0;
		count++;
	}
	
	~Animal() {
		cout << "Deleting Generic Animal" << endl;
		count--;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	void feed() {
		cout << "Some food, please!" << endl;
	}
	 static int getCount() {
        return count;
    }
};
