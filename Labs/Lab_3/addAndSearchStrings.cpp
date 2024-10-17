#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    vector<string> strings;
    vector<string> outputStrings;

    while (true) {
        string input;
        cin >> input;

        if (input == "quit") {
            break;
        }

        if (input.length() >= 4) {
            strings.push_back(input);
        } else if (input.length() <= 3) {
            for (const string& str : strings) {
                if (str.find(input) == 0) {
                    outputStrings.push_back(str);
                }
            }
        }
    }

    // Print the stored output strings after "quit" is entered
    for (const string& str : outputStrings) {
        cout << str << endl;
    }

    return 0;
}



