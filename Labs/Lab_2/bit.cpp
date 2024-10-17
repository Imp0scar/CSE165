#include <iostream>
#include <bitset>

using namespace std;

// Function to retrieve a bit at position "index" from a number "n" in binary format
int getBit(int n, int index) {
    return (n >> index) & 1;
}

// Function to set a bit at position "index" in a number "n"
int setBit(int n, int index) {
    return n | (1 << index);
}

// Function to clear a bit at position "index" in a number "n"
int clearBit(int n, int index) {
    return n & ~(1 << index);
}

int main() {
    int n, index;

    // Input: Decimal number and position
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Enter the position/index: ";
    cin >> index;

    // Convert the decimal number to binary and print it
    cout << "Binary representation of " << n << " is " << bitset<8>(n) << "\n";

    // Get the bit at the specified position
    int bitGot = getBit(n, index);
    cout << "Get bit at index " << index << ": " << bitGot<< "\n";

    // Set the bit at the specified position
    int bitSet = setBit(n, index);
    cout << "Binary number after setting bit at index " << index << ": " << bitset<8>(bitSet) << "\n";

    // Clear the bit at the specified position
    int bitClear = clearBit(n, index);
    cout << "Binary number after clearing bit at index " << index << ": " << bitset<8>(bitClear) << "\n";

    return 0;
}
