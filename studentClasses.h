// Simple Example of a Base Class and a Derived Class

// Written by Amir K. Afshar

#include <string>
#include <iostream>
using namespace std;

// "Parent" or "Base" Class: Students who are in lecture only
class studentInfo2
{
	public:

		// Public Data
		string name;
		string accessID;

		///////////////////////////////////////////////////////////

		// Mutators ("Setters")
		void setHWgrade(double x)
		{
			hwGrade = x;
		}

		void setMidtermgrade(double z)
		{
			midtermGrade = z;
		}

		void setFinalGrade(char m)
		{
			finalGrade = m;
		}

		void printGrade()
		{
			cout << endl << "Student Name: " << name << endl << "Student Access ID: " << accessID;
			cout << endl << "Final Grade: " << getFinalGrade() << endl << endl;
		}

		///////////////////////////////////////////////////////////

		// Accessors ("Getters")
		double getHWgrade()
		{
			return hwGrade;
		}

		double getMidtermGrade()
		{
			return midtermGrade;
		}

		char getFinalGrade()
		{
			return finalGrade;
		}

		// Default Constructor Prototype
		studentInfo2();

	protected:

		// Protected Data
		double hwGrade;
		double midtermGrade;
		char finalGrade;

};

// Default Constructor Definiton/Initialization
studentInfo2::studentInfo2()
{
	name = "Anonymous Student";
	accessID = "xxNNNN";
	hwGrade = 100;
	midtermGrade = 100;
	finalGrade = 'A';
}


///////////////////////////////////////////////////////////


// Derived Class: Students who attend both lecture and lab

// Everything from Parent class (functions, data) is "inherited"
// We can make modifications or add additional information/functions easily
// Simply add them in; nothing else will change!
class studentInfo : public studentInfo2
{

	public:

		// New (Added) Mutator
		void setLabGrade(double); // Setter function Prototype

		// New (Added) Accessor
		double getLabGrade(); // Getter function prototype

		// Updated printGrade function; notice the inclusion of Final Lab Grade
		void printGrade()
		{
			cout << endl << "Student Name: " << name << endl << "Student Access ID: " << accessID;
			cout << endl << "Final Lab Grade: " << getLabGrade();
			cout << endl << "Final Course Grade: " << getFinalGrade() << endl << endl;
		}
						 
		studentInfo()  // Default constructor; same as default constructor for studentInfo2 class, but added labGrade
		{
			labGrade = 100;
		}

	protected:

		// New (Added) Protected Data
		double labGrade;

};


// Definitions to function protoypes
void studentInfo::setLabGrade(double q)
{
	labGrade = q;
}


double studentInfo::getLabGrade()
{
	return labGrade;
}
