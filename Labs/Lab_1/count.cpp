#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int count() {
    string wordFile = "words.txt";
    ifstream inputFile(wordFile); // open the inputFile/ the words.txt
    int white_spaces = 0;
    string word;

    while (inputFile >> word) { //count the number of white spaces in the inputFile.
        white_spaces++;
    }

    inputFile.close();
    return white_spaces;
}

int main() {
    int wordCount = count();
    cout << wordCount << endl;

    return 0;
}

