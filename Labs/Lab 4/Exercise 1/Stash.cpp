#include <iostream>
#include "Stash.h"

using namespace std;

int main() {
    int N;
    cin >> N;  
    Stash stash;  // Declare an instance of the Stash data structure

    // Initialize the Stash with doubles
    stash.initialize(sizeof(double));

    // Read N double values and add them to the Stash
    for (int i = 0; i < N; i++) {
        double value;
        cin >> value;
        stash.add(&value);  // Add the double value to the Stash
    }

    // Use a range-based for loop to print out the stored double values
    for (int i = 0; i < stash.count(); i++) {
        double* ptr = static_cast<double*>(stash.fetch(i));
        if (ptr != nullptr) {
            cout << *ptr << " ";
        }
    }

    // Free up the memory occupied by the Stash object
    cout << endl;
        stash.cleanup();

    return 0;
}

