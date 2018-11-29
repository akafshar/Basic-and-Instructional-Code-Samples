// Introduction to Queues
// Amir K. Afshar
// 29 November 2018

#include <queue>
#include <iostream>

using namespace std;

void main()
{
	queue<int> Queue1;

	Queue1.push(1);	// Push first element into queue
	Queue1.push(2);
	Queue1.push(3);
	Queue1.push(4);	// Push last element into queue
	cout << "First Element: " << Queue1.front() << endl;
	
	Queue1.pop();	// Pops first element in queue

	cout << "First Element, after pop: " << Queue1.front() << endl;
	cout << "Last Element: " << Queue1.back() << endl;
}