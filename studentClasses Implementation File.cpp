// A couple of instances of each class from header file

// Written by Amir K. Afshar

#include "studentClasses.h"
using namespace std;

int main()
{
	studentInfo Jane;
	Jane.printGrade(); // Jane's data has not been initialized; default constructor is invoked

	studentInfo2 John; // Some of John's data is initialized here
	John.name = "John Smith";
	John.accessID = "cs1101";
	John.setFinalGrade('B');

	John.printGrade(); // We see John's data
	John.getMidtermGrade(); // The values not displayed by printGrade() (like midterm grade) will be assigned by the default constructor

	studentInfo Steve; // An example of a student who attends both lecture and lab. His data is initialized by default constructor
	Professor.printGrade();
}