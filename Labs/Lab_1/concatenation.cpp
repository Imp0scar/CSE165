#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	ifstream in("code.cpp");
	string line;
    string concatenation = "";
	
	while( getline( in, line ) ) // getline returns true if read successfully
		v.push_back( line ); // add the line to the end of v

	// add line numbers:
	for (int i = 0; i < v.size(); i++)
        concatenation += v[i] +"\n"; // concatenates the code in code.cpp into the concatenation string from the vector v without the numbers in each line.
        cout << concatenation << endl;
}