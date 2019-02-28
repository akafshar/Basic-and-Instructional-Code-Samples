#include <iostream>

using namespace std;

class Object
{
	public:
		
		int getXval()			// Accessor, or "Getter" for x value
		{
			return x;
		}	

		void setXval(int a)		// Mutator, or "Setter" for x value
		{
			x = a;
		}

		int getYval()			// Accessor, or "Getter" for y value
		{
			return y;
		}

		void setYval(int b)		// Mutator, or "Setter" for y value
		{
			y = b;
		}

		Object()				// Default constructor
		{
			x = 100;
			y = 200;
		}

		/*
		Object(Object & object)	// Copy constructor; lvalue reference; non-temporary
		{
			x = object.getXval();
			y = object.getYval();
		};	
		*/

		Object(Object &&){};	// Move constructor; rvalue reference; temporary

	private:

		int x, y;
};

