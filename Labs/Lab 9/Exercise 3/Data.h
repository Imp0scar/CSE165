#ifndef DATA_H
#define DATA_H

#include <vector>
#include <iostream>
#include "Sortable.h"

class Data {
public:
    std::vector<Sortable*> data;

    void add(Sortable* sortable) {
        data.push_back(sortable);
    }

    void sort() {
    int n = data.size();
    for (int i = 1; i < n; i++) {
        Sortable* key = data[i];
        int j = i - 1;

        while (j >= 0 && !data[j]->compare(key)) {
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = key;
    }
}

    void print() {
        for (int i = 0; i < data.size(); i++) {
            data[i]->print();
            
        }
    }
};

#endif

