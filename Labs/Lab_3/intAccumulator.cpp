#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // for abs function
#include <algorithm>


using namespace std;

int main(){
    vector<int> num;

    while (true){
        int input;
        cin >> input;

        if (input > 0){
            num.push_back(input);
        }
        else if(input == 0){
            int sum = 0;
            for (int numbers : num){
                sum += numbers;
            }
            cout << num.size() << " " << sum << endl;
        }
        else{ //input num is negative 
            int absInput = abs(input);
            num.erase(remove_if(num.begin(), num.end(), [absInput](int x) 
            {
             return abs(x) == absInput; }), num.end());
        }


    }


return 0;
}