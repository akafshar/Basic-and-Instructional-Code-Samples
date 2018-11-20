#include <iostream>
#include <string>
using namespace std;

int factorial(int x)				// Recursive Function Definition
{
	if (x == 0)						// Base case
		return 1;
	else
		return x*factorial(x - 1);	// Notice here that this function calls itself
}

void factorialOut(int x)
{
	cout << to_string(x) + " factorial: ";
	
	while (x >= 2)
	{
		cout << to_string(x) + "*";
		x = x - 1;
	}
	
	cout << "1 = ";
}