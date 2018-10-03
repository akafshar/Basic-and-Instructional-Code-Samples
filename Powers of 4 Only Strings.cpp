// Program that only accepts binary strings representing powers of 4
// Written by Amir K. Afshar

#include <iostream>
#include <string>
using namespace std;

// Function to convert integer to binary
void decimalToBinary(int num)
{
	cout << "Your original number, in decimal form: " << num << endl;

	// Index initialization for counter and array to store binary number 
	int i = 0, backwardsBinaryNum[1000];

	// Counter for binary array 
	while (num > 0) {

		// Store remainder in binary array 
		backwardsBinaryNum[i] = num % 2;
		num = num / 2;
		i++;
	}

	cout << "Your number in binary: ";
	// Print binary array in reverse order 
	for (int j = i - 1; j >= 0; j--)
	{
		cout << backwardsBinaryNum[j];
	}

	cout << endl;
}

string validate(int n)
{
	if (n == 0)
	{
		return "This string is not a power of 4; thus, it is NOT accepted.";
	}

	while (n != 1)
	{
		if (n % 4 != 0)
		{
			return "This string is not a power of four; thus, it is NOT accepted.";
		}
		
		n = n / 4;
	}
	
	return "This string is a power of four; thus it IS accepted.";
}

void convertAndValidate(int z)
{
	decimalToBinary(z);
	cout << validate(z);
}


void main()
{
	// Initialize some values to check
	int num1 = pow(4, 3), num2 = pow(4, 6), num3 = pow(2, 3), num4 = pow(5, 3), num5 = pow(6, 2), num6 = pow(9, 2);

	convertAndValidate(num1);
	cout << endl << endl;
	convertAndValidate(num2);
	cout << endl << endl;
	convertAndValidate(num3);
	cout << endl << endl;
	convertAndValidate(num4);
	cout << endl << endl;
	convertAndValidate(num5);
	cout << endl << endl;
	convertAndValidate(num6);
	cout << endl << endl;
}
