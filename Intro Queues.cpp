// Introduction to Queues
// Amir K. Afshar
// 29 November 2018

#include <queue>
#include <iostream>
#include <string>

using namespace std;

void main()
{
	queue<int> Queue1;
	queue<char> Queue2;

	string str = "Hello";

	Queue1.push(1);	// Push first element into queue
	Queue1.push(2);
	Queue1.push(3);
	Queue1.push(4);	// Push last element into queue
	cout << "Queue 1 First Element: " << Queue1.front() << endl;
	
	Queue1.pop();	// Pops first element in queue

	cout << "Queue 1 First Element, after pop: " << Queue1.front() << endl;
	cout << "Queue 1 Last Element: " << Queue1.back() << endl;

	Queue2.push(str[0]);	// Push first element into queue
	Queue2.push(str[1]);
	Queue2.push(str[2]);
	Queue2.push(str[3]);
	Queue2.push(str[4]);

	cout << "Queue 2 First Element: " << Queue2.front() << endl;
	cout << "Queue 2 Last Element: " << Queue2.back() << endl;

	cout << endl << "Is Queue2 Empty?:" << endl;
	
	if (Queue2.empty())
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not Empty." << endl;
	}


}