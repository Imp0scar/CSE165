#include <iostream>

#include "Data.h"
#include "Circle.h"

using namespace std;

int main()
{
	Data myData;

	myData.add( new Circle() );
	myData.add( new Circle( 3 ) );
	myData.add( new Circle( 2 ) );
	myData.add( new Circle( 4 ) );
	myData.add( new Circle( 1 ) );

	myData.print();
	myData.sort();
	cout << endl;
	myData.print();

	return 0;
}
