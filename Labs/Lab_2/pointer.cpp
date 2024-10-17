#include <iostream>

using namespace std;

int main(){

    int x, y;
    cout << "input two numbers spaced out: ";
    cin >> x >> y;

    int *numx = &x;
    int* numy = &y;

    int addition = (*numx) + (*numy);
    int subtraction = (*numx) - (*numy);
    int multiplication = (*numx) * (*numy);
    float division = static_cast<float>(*numx) / (*numy);


    cout << "addition is: " << addition << endl;
    cout << "subtraction is: " << subtraction << endl;
    cout << "multiplication is: " << multiplication << endl;
    cout << "division is: " << division << endl;

    return 0;
}