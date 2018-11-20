// Amir K. Afshar
// 20 November 2018
// Recursive Functions Example: Factorial Functions

#include <iostream>
#include "Factorial.h"
using namespace std;

void main()
{
	int x;
	cout << "Enter an integer value to be evaluated by the factorial function: ";
	cin >> x;
	
	cout << endl << endl;
	
	factorialOut(x); 
	cout << factorial(x) << endl << endl;
}