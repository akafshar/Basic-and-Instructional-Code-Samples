// Simple example illustrating the utilization of a copy constructor
// Written by Amir K. Afshar

#include <iostream>
#include <string>
using namespace std;

class Ball
{
	public: 

		void setVol(double x)
		{
			vol = x;
		}
		double getVol()
		{
			return vol;
		}

		Ball()					// Default constructor
		{
			vol = 0;
		}

		Ball(Ball& otherObject)	// Copy constructor
		{
			vol = otherObject.getVol(); // Assigns to the new declared Ball object the volume of "otherObject," which is another Ball object
		}

	private:

		double vol;

};


int main()
{
	Ball ball1; // ball1 is declared and initialized with the default constructor
	Ball ball2(ball1); // ball2 is constructed via the copy contructor applied to ball1

	cout << "ball1 Volume: " << ball1.getVol() << endl;
	cout << "ball2 Volume: " << ball2.getVol() << endl;

}