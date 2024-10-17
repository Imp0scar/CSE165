#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<string>> V(10); // Initialize vector of vectors of strings

    string input;
    cout << "Enter the input: ";
    cin >> input;

    while (input != "quit") {
        int N = input.length();

        if (N >= 1 && N <= 10) { // Check for valid string length
            bool isDuplicate = false;

            // Check for duplicates
            for (size_t i = 0; i < V[N - 1].size(); ++i) {
                if (V[N - 1][i] == input) {
                    isDuplicate = true;
                    break;
                }
            }

            if (!isDuplicate) {
                V[N - 1].push_back(input);
            }
        }

        cout << "Enter the input: ";
        cin >> input;
    }

    // Output the contents of each V entry
    for (const vector<string>& entry : V) {
        if (!entry.empty()) {
            for (size_t i = 0; i < entry.size(); ++i) {
                cout << entry[i];
                if (i != entry.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        } else {
            // Output an empty line for empty entries
            cout << endl;
        }
    }

    return 0;
}
