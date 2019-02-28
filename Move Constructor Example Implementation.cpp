#include "Move Constructor Example Header.h"

void main()
{
	Object object1;				// An instance of Object class, initialized with the default constructor
	Object object2(object1);	// Invoke move constructor
	object1.setXval(10);		// Change x and y values in object1
	object1.setYval(20);

	cout << "object1 x and y values: " << endl << object1.getXval() << endl;
	cout << object1.getYval() << endl << endl;
	cout << "object2 x and y values: " << endl << object2.getXval() << endl;
	cout << object2.getYval() << endl;
}