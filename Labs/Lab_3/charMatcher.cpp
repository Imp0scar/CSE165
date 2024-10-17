#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;

string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main(){

    vector<string> Strings;
    bool match = true;
    while(match == true){
        string input;
        cin >> input;

        if (input != "quit"){
            if (input.length() > 1){
                Strings.push_back(input);
            }
            else if(input.length() == 1){
                char character = toLower(input)[0];
                for (const string& storedStrings : Strings){
                    if(toLower(storedStrings)[0] == character){
                        cout << storedStrings << endl;
                    }
                }
            }

        }
        else{
            match == false;

        }


    }





    return 0;
}