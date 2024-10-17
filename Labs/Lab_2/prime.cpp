#include <iostream>

using namespace std;

bool Prime(int num){
    if (num == 0 || num == 1){  
        return false;
    }
    for (int i = 2; i < num -1; i++){
 
        if (num % i == 0){
            return false;
        }
        
    }
    return true;


}

int main(){
    int N;
    cout << "Enter the number you want to find prime numbers up to: ";
    cin >> N;

    for (int j = 2; j < N-1; j++){
        if (Prime(j)){
            cout << j << endl;

        }

    }





    return 0;
}