// Simple function to reverse a string inputted by user
// Written by Amir K. Afshar

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char temp; 

	cout << "Enter a sentence or a string of characters/numbers: ";
	cin >> str;
	int j = str.length();

	cout << "Your string: " << str << endl;

	for (int i = 0; i < ceil(j/2); i++)
	{
		temp = str[i];
		str[i] = str[j - i];
		str[j - i] = temp;
	}

	cout << "Your string reversed: " << str << endl << endl;
}