// Program that allows user to choose number of elements
// in an array and initialize the value at each index

// Written by Amir K. Afshar

#include <iostream>
using namespace std;

int main()
{
	int *p, size, value;

	cout << "How many elements would you like in your array?: ";
	cin >> size;
	p = new int[size];

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "What integer value would you like to store in the location of element " << i + 1 << "?: ";
		cin >> value;
		p[i] = value;
		cout << endl;
	}

	cout << endl << endl;

	cout << "Your array: " << endl << endl;
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		cout << p[i];
		if (i < size-1)
		{
			cout << ", ";
		}
	}
	
	cout << "]" << endl << endl;
}