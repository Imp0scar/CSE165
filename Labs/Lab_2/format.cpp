#include <iostream>

using namespace std;


void decimalToBinary(int n){
    int array[32]; //array for the binary number

    int i = 0;
    while (n > 0){

        array[i] = n % 2;
        n = n/2;
        i++;
    }

    for (int j = i -1; j >= 0; j--){

        cout << array[j];
    }

}

int main(){
    int num = 0;
    while (num >= 0){
        cout << "Input a positive number: ";
        cin >> num;
        int binary;
        
        cout << "The number in hexadecimal is: " << hex << num << endl;
        cout << "The number in binary is: ";
        decimalToBinary(num);
        cout << endl;

    }



    return 0;
}