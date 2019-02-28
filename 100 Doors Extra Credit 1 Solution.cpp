#include <iostream>

using namespace std;

void main()
{
	int arr[100];												// Declare array with 100 elements

	for (int i = 1; i < 101; i++)
	{
		arr[i] = -1;											// Initialize all elements to -1 ("closed door")
	}

	for (int j = 0; j < 100; j++)								// Outer loop; Start with index 0 and make 100 passes
	{
		for (int k = j; k < 100; k = k + j + 1)					// After each outer pass, increment the counting index by j+1
		{
			arr[k] = arr[k] * -1;								// Toggle the door at index k
		}
	}

	cout << "100 Doors Problem (-1 means closed, 1 means open)" << endl << endl;

	for (int n = 0; n < 100; n++)
		cout << "Door #" << n+1 << ": " << arr[n] << endl;		// We see that the doors indexed by perfect squares remain open

	cout << endl;

}