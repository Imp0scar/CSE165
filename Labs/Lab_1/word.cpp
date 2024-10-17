#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For std::isalnum
#include <algorithm> 

using namespace std;

// Function to remove punctuation from a word
string removePunctuation(const string& word) {
    string cleanedWord;
    for (char c : word) {
        if (isalnum(c) || c == '\'') {
            // Keep alphanumeric characters and single apostrophes
            cleanedWord += c;
        }
    }
    return cleanedWord;
}

// Function to convert a string to lowercase using transform()
string toLowercase(const string& input) {
    string result = input;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

int wordCount(string targetword) {
    int count = 0;
    string word;
    ifstream inputFile("words.txt"); // Open the file for reading

    while (inputFile >> word) {
        string cleanedWord = removePunctuation(word); // Remove punctuation from the word
        if (toLowercase(cleanedWord) == toLowercase(targetword)) {
            count++;
        }
    }

    inputFile.close(); // Close the file
    return count;
}

int main() {
    cout << "Enter the word you want to count: ";
    string targetword;
    cin >> targetword;

    // Convert the target word to lowercase for case-insensitive comparison
    targetword = removePunctuation(targetword);

    int num = wordCount(targetword);
    cout << "The word '" << targetword << "' occurs " << num << " times in words.txt." << endl;

    return 0;
}

