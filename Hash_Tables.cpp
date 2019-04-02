#include <iostream>
#include "Hash.h"
using namespace std;

void main()
{
	HashTable table1;
	
	table1.addItem("C++ Text", "John Smith", 00231374230);
	table1.addItem("Java Text", "John Doe", 00237654230);
	table1.addItem("Python Text", "Jane Johnson", 00231351230);

	table1.printTable();
}