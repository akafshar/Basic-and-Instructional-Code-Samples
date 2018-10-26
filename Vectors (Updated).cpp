// Amir K. Afshar
// 24 October 2018

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Objects			// Class definition to use in vectors. Keep in mind that you can make vectors ANY data type -- built-in and user-defined.
{						// This file illustrates the latter; namely, vectors of a user-defined type (class objects).
	public:

		Objects()		// Default constructor; set all private values to 0
		{
			length = 0;
			width = 0;
			height = 0;
		};

		Objects value()
		{
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
			cout << "Height: " << height << endl << endl;

			return *this;	// An function whose type is a class instance must return something; the "this" pointer ensures this
							// This is technically the "value" of the whole class object (though there are several data in here).
		}

		// Mutators ("Setters")

		void setLength(double l)
		{
			length = l;
		}

		void setWidth(double w)
		{
			width = w;
		}

		void setHeight(double h)
		{
			height = h;
		}


	// Accessors ("Getters")	In the code below, we never actually use these because of the value() function above, 
	// which displays all of these, but you can use them instead if you prefer, or are not comfortable using the "this" pointer

		double getLength()
		{
			return length;
		}

		double getWidth()
		{
			return width;
		}

		double getHeight()
		{
			return height;
		}


	private:

		double length, width, height;
};

int main()
{
	vector<Objects> someObjects(3); // Declare (and initilize from default constructor) a vector of 3 instances of Objects class
									// They all initially have values of 0 for length, width and height, respectively

	someObjects[0].setHeight(3);	// Change some of their values, as desired
	someObjects[2].setWidth(17);	// Notice we use the mutators to do so, as these data are private and cannot be changed directly
	someObjects[1].setWidth(4);		// For example, someObjects1.width = 4; will result in an error 
	//someObjects.width = 4;		// Try it and see, if you like
	someObjects[2].setLength(5);

	for (int k = 0; k < 3; k++)
	{
		cout << "VECTOR ELEMENT (Class object)  #" << k+1 << ": " << endl;
		someObjects[k].value();		// This function displays the values in each vector index (from the this pointer)
	}

	// After displaying them:

	someObjects.pop_back();			// Delete 2 of them
	someObjects.pop_back();
	//someObjects.pop_back();		// <-- "Uncommenting" this last .pop_back() call will result in an output of Empty, because it will pop back (remove) the 3rd (last) element in the someObjects vector

	/* You may also use the .push_back() function to insert values into a vector. 
	
	For example:
	
	Objects extraObject;					// Declare a new instance of Objects class called extraObject
	someObjects.push_back(extraObject);		// Push extraObject into someObjects vector

	 // You can uncomment this block and see for yourself
	*/

	// Check to see if someObjects vector is empty
	if (someObjects.empty())
	{
		cout << "Empty." << endl << endl;
	}

	else
	{
		cout << "Not empty." << endl << endl;
	}

	system("pause");			// So the program doesn't close out right away

	return 0;
}