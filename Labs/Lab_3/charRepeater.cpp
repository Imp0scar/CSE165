#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    char character;
        int num;
        cin >> character;
        cin >> num;
    while(num != -1){

   
    if (num == 0){
        cout << "\n";
    }
    else{
        for(int i = 0; i < num; ++i){
            cout << character;
            
        }
        cout << "\n";
    }
    cin >> character;
        cin >> num;
        

    }

    return 0;
}