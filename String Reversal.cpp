// Simple function to reverse a string inputted by user
// Written by Amir K. Afshar

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char temp;
	string str;

	cout << "Enter a sentence or a string containing letters, numbers or special characters: ";
	getline(cin, str);
	
	int j = str.length()-1; // Since index starts at zero, we must intilize index j to (length - 1)

	cout << endl << "Your string: " << str << endl;

	for (int i = 0; i <= (int)(j / 2); i++)
	{
		temp = str[i];
		str[i] = str[j - i];
		str[j - i] = temp;
	}

	cout << endl << "Your string reversed: " << str << endl << endl;
}