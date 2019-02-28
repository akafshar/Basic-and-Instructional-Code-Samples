#include <iostream>

using namespace std;

void main()
{
	int arr[101];
	arr[0] = 0;

	for (int i = 1; i < 101; i++)
	{
		arr[i] = -1;
	}

	for (int j = 1; j < 101; j++)								// Outer loop; Start with index 0 and make 100 passes
	{
		for (int k = j; k < 101; k = k + j)						// After each outer pass, increment the counting index by j+1
		{
			arr[k] = arr[k] * -1;								// Toggle the door at index k
		}
	}

	cout << "100 Doors Problem (-1 means closed, 1 means open.)" << endl << endl;

	for (int n = 1; n < 101; n++)
		cout << "Door #" << n << ": " << arr[n] << endl;		// We see that the doors indexed by perfect squares remain open

	cout << endl;

}