#include <iostream>
#include "Stack.h"

using namespace std; 

int main() {
    int N;
    cin >> N; 

    Stack stack; 

    stack.initialize();

    for (int i = 0; i < N; i++) {
        double value;
        cin >> value;
        double* ptrValue = new double(value);  
        stack.push(ptrValue);  
    }

    double* ptrValue = static_cast<double*>(stack.pop());
    while (ptrValue != nullptr) {
        cout << *ptrValue << endl;
        ptrValue = static_cast<double*>(stack.pop()); 
    }

    stack.cleanup();

    return 0;
}

