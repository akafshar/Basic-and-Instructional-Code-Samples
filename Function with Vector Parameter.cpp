// Amir K. Afshar
// 24 October 2018

#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> x[])	// Print function that takes a vector of integers as a parameter
{
	for (int i = 0; i < x->size(); i++)
	{
		cout << "Vector Element " << i+1 << ": " << x->at(i) << endl;	// Prints the value at each index
	}
}

int main()
{
	vector <int> x[10];			// Declare a vector of 10 integers
	
	for (int i = 0; i < 10; i++)
	{
		x->push_back(i + 1);	// Initialize vector values to be 1 through 10
	}

	print(x);					// Call print() function; display vector values at each index

	cout << endl;
	
	system("pause");
}