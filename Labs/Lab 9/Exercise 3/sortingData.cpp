#include <iostream>
#include <string>

#include "Data.h"
#include "Circle.h"
#include "Participant.h"

using namespace std;

int main( int argc, const char* argv[] )
{
	Data myData;
	
	myData.add( new Participant( "Waymond", 24, 100 ) );
	myData.add( new Circle() );
	myData.add( new Participant( "Mary", 27, 96 ) );
	myData.add( new Circle( 3 ) );
	myData.add( new Participant( "John", 32, 100 ) );
	myData.add( new Circle( 2 ) );
	myData.add( new Participant( "Eliza", 21, 105 ) );
	myData.add( new Circle( 4 ) );
	myData.add( new Participant( "Ezekiel", 27, 96 ) );
	myData.add( new Circle( 1 ) );
	myData.add( new Participant( "Alex", 20, 101 ) );
	cout << endl;

	myData.print();
	
	myData.sort();
	cout << endl;
	myData.print();

	return 0;
}