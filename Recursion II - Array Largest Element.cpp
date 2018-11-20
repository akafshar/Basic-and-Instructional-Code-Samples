// Amir K. Afshar
// 20 November 2018
// Recursive Functions Example II: Largest Element

#include <iostream>
#include "Largest.h";
using namespace std;

void main()
{
	int *x, size, index = 0, i = 0;
	//int x[10] = { 1, 3, 2, 7, 5, 4, 6, 18, 9, 8 }; // Example array

	cout << "How many elements would you like in your array?: ";
	cin >> size;

	x = new int[size];

	cout << endl << "Let us fill your array. Enter the values. Integers only, please." << endl << endl;
	while (index < size)
	{
		cout << "Element " << index+1 << ": ";
		cin >> x[index];
		cout << endl;
		index = index + 1;
	}

	cout << "Your array: ";
	
	while (i < size)
	{
		cout << x[i] << " ";
		i++;
	}
	cout << endl << "The largest element in your array: " << largest(x, 0, size-1) << endl << endl;
}