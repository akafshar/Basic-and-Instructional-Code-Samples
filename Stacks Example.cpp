// Reversing a string using a simple stack

// Written by Amir K. Afshar

#include <vector>
#include <stack>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{

	string A = "Amir Afshar";
	stack<char>Amir;

	cout << "Amir:" << endl;

	for(int i = 0; i < A.length(); i++)
	{
		Amir.push(A[i]);
		cout << Amir.top();
	}
	
	cout << endl << endl;

	cout << "rimA:" << endl;
	
	for(int i = 0; i < A.length(); i++)
	{
		cout << Amir.top();
		Amir.pop();
	}

	cout << endl << Amir.empty();

	cout << endl << endl;
}