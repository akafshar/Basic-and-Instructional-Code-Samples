// Pointers, Deep and Shallow Copies

// Written by Amir K. Afshar

#include <iostream>
using namespace std;

int main()
{

	int *A;										// Declare pointer variable A of type int
	A = new int[5];								// Allocate 5 contiguous (and currently empty or whose contents are unknown)
												// memory locations to which A point
	
	// Initialize each element of the array to which A points
	cout << endl << "Your array, 'A':" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		A[i] = i+1;
		cout << A[i] << " ";
	}

	cout << endl << endl;

	int *B;										// Declare pointer variable A of type int
	B = new int[5];								// Allocate 5 contiguous (and currently empty or whose contents are unknown)
												// memory locations to which B point

	B = A;										// B has been 'directed' to point to whatever it is A points


	cout << "-------------------------------------------" << endl;


	// Initialize each element of the array to which B points
	cout << "Your shallow copy of array 'A,' array 'B':" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		B[i] = i + 1;
		cout << B[i] << " ";
	}

	cout << endl << endl << "-------------------------------------------" << endl;

	cout << "Memory location of the first element in 'A':" << endl << endl << &A[0] << endl << endl;
	
	
	cout << "-------------------------------------------";
	
	
	cout << endl << "Memory location of the first element in 'B':" << endl << endl << &B[0] << endl << endl;


	cout << "-------------------------------------------";


	int temp;
	
	// Switched order of values in integer array pointed to by A
	cout << endl << "Your array, 'A,' reversed:" << endl;
	for (int j = 0; j < 2; j++)
	{
		temp = A[j];
		A[j] = A[4 - j];
		A[4 - j] = temp;
	}

	cout << endl;

	for (int k = 0; k < 5; k++)
	{
		cout << A[k] << " ";
	}

	cout << endl << endl << "-------------------------------------------" << endl;
	//Print values pointed to by B
	cout << "Array 'B,' after reversing array 'A,' (though 'B' was untouched directly):" << endl << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << B[k] << " ";
	}

	cout << endl << endl << "-------------------------------------------" << endl;

	cout << endl << "Your array, 'B,' reversed:" << endl;
	for (int j = 0; j < 2; j++)
	{
		temp = B[j];
		B[j] = B[4 - j];
		B[4 - j] = temp;
	}

	cout << endl;

	for (int k = 0; k < 5; k++)
	{
		cout << B[k] << " ";
	}

	cout << endl << "-------------------------------------------" << endl;

	cout << "Array 'A,' after reversing array 'B,' (though 'A' was untouched directly):" << endl << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << A[k] << " ";
	}

	cout << endl << endl;

	cout << "Notice that altering 'A' will alter 'B' AND vice versa." << endl;
	cout << "'A' and 'B' are pointers that point to the same things;" << endl;
	cout << "Thus, changing a value at a memory location pointed to" << endl; 
	cout << "by one of the pointers will be evident when utilizing the other pointer." << endl << endl;

}