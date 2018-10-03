#include <iostream>
using namespace std;

int main()
{
	int *p, q = 5;	// Declare integers *p and q; initialize q with value of 5.
	p = new int;	// Allocate memory for pointer p, which points to the memory location at which *p is stored
					// Note that *p has not been initialized yet

	p = &q;			// Assigns to pointer p the memory location of q 
	
	*p = 7;			// Initialize *p to 7. This overwrites whatever is stored at the location to which p points
					// with the value 7. As a consequence, q is overwritten (5 becomes 7), since p points to the 
					// memory location which currently contains q.

	cout << "*p: " << *p << '\t' << "q: " << q << endl; // This line illustrates that *p and q are now both 7.
}