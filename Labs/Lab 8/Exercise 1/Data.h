#ifndef DATA_H
#define DATA_H

#include <vector>

class Data {
public:
    std::vector<int> data;

    void add(int number) {
        data.push_back(number);
    }

    void sort() {
        int n = data.size();
        for (int i = 1; i < n; i++) {
            int key = data[i];
            int j = i - 1;

            while (j >= 0 && data[j] > key) {
                data[j + 1] = data[j];
                j = j - 1;
            }
            data[j + 1] = key;
        }
    }

    void print() {
        for (int i = 0; i < data.size(); i++) {
            std::cout << data[i];
            if (i < data.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};

#endif

