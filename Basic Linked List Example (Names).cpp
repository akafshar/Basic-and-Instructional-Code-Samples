// Basic Linked List example with string data at nodes

// Written by Amir K. Afshar

#include <iostream>
#include <string>
using namespace std;

class nodeType
{
	public:
		string name;
		nodeType *link;
};

int main()
{

	// (Declared linked list nodes)
	nodeType *head, *name1, *name2, *name3, *name4, *current;

	head = new nodeType;
	name1 = new nodeType;
	name2 = new nodeType;
	name3 = new nodeType;
	name4 = new nodeType;

	// Node initializations

	head -> link = name1;		// 'head' (first, or initial pointer in the linked list) points to the location of name1

	name1 -> name = "John";
	name1 -> link = name2;
	
	name2 -> name = "Amanda";
	name2 -> link = name3;
	
	name3 -> name = "Garrett";
	name3 -> link = name4;

	name4 -> name = "Anisha";
	name4 -> link = nullptr;	// Final node in linked list is assigned the null pointer

	current = head;				// Temporary pointer that traverses the linked list 
								// (Sequentially, as connected above)

	while (current != nullptr)	// Traverse the linked list and print the name stored at each node.
	{
		if (current -> name != "") // Checks whether node has associated name data (the empty string); if not, do not print
		{
			cout << current->name << endl << endl;
		}
		
		current = current -> link; // Redirect 'current' pointer to next address in linked list
	}

}