// lvalues and rvalues
// Amir K. Afshar
// 20 February 2019

#include <iostream>
#include <string>

using namespace std;

void main()
{
	// Pointer Variable storing p at &q
	int p = 4;
	int *q;

	q = &p; // Assigning q to point to memory location of p

	// Reference variable referencing the dereferenced q (*q, which is actually p)
	int & ref = *q;	// Giving *q a reference or alias, namely "ref"
	// ref is a what is called a "reference variable"

	cout << "Reference value: " << ref << endl;
	p += p;

	cout << "After adding p to itself, the reference value: " << ref << endl << endl;

	// Notice that p and q and ref can appear on either side of an assignment
	// This means that each are lvalues
	// Whereas the 4 is a pure rvalue, as it can never appear on the left side of an assignment
	// Only lvalues can appear on the LHS of an assignment (but possibly both)
	// An rvalue cannot

	system("pause");
}