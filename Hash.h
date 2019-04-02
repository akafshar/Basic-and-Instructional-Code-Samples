#define HASTABLE_H_
#include <string>
#include <iostream>
using namespace std;

class HashTable
{

public:
	HashTable();
	~HashTable();

	int hash(string key, const int TABLE_SIZE); // Returns the hash value for the given key, the ASCII values of each character % the table size
	void addItem(string title, string author, long long isbn); // Inserts a new item into the table, calls has function on the key title to determine the correct bucket
	int numItemsAtIndex(int index); //Helper function to printTable, counts # of items in each bucket
	void printTable(); //Prints first item of each bucket, includes number of items stored at that bucket

private:
	struct Node
	{
		string title;
		string author;
		int isbn;
		Node* next;
		Node() : title(""), author(""), isbn(0), next(NULL) {}
		Node(string ntitle, string nauthor, int nisbn) : title(ntitle), author(nauthor), isbn(nisbn), next(NULL) {}
	};

	typedef struct Node* Nodeptr;
	static const int TABLE_SIZE = 3;
	Nodeptr Table[TABLE_SIZE];
};

	
struct Node
{
	string title;
	string author;
	long long isbn;
	Node* next;
	Node() : title(""), author(""), isbn(0), next(NULL) {}
	Node(string ntitle, string nauthor, long long nisbn) : title(ntitle), author(nauthor), isbn(nisbn), next(NULL) {}
};



HashTable::HashTable()
{
	for (int i = 0; i < TABLE_SIZE; i++) Table[i] = NULL;
}

HashTable::~HashTable()
{
	Nodeptr cur, temp;
	for (size_t i = 0; i < TABLE_SIZE; i++)
	{
		if (Table[i] != NULL)
		{
			cur = Table[i];
			while (cur != NULL)
			{
				temp = cur;
				cur = cur->next;
				delete (temp);
			}
		}
	}
}

int HashTable::hash(string key, const int TABLE_SIZE)
{
	int index, sum = 0;
	for (int i = 0; i < key.length(); i++) sum += key[i];
	index = sum % TABLE_SIZE;
	return index;
}

void HashTable::addItem(string title, string author, long long isbn)
{
	Nodeptr newNode = new Node(title, author, isbn);
	int index = hash(title, TABLE_SIZE);
	if (Table[index] == NULL) Table[index] = newNode;
	else
	{
		Nodeptr tempNode = Table[index];
		while (tempNode->next != NULL) tempNode = tempNode->next;
		tempNode->next = newNode;
	}
}

int HashTable::numItemsAtIndex(int index)
{
	Nodeptr temp = Table[index];
	int counter = 0;
	if (temp == NULL) return counter;
	else
	{
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
	}
	return counter;
}

void HashTable::printTable()
{
	Nodeptr temp;
	cout << "Book Hash Table:" << endl;
	cout << "--------------------------" << endl;
	for (int x = 0; x < TABLE_SIZE; x++)
	{
		temp = Table[x];
		if (temp != NULL)
		{
			cout << "Index: " << x << endl;
			cout << "Title: " << temp->title << endl;
			cout << "Author: " << temp->author << endl;
			cout << "ISBN: " << temp->isbn << endl;
			cout << "Number of Values at this Index: " << numItemsAtIndex(x);
			cout << endl << endl;
		}
	}
}