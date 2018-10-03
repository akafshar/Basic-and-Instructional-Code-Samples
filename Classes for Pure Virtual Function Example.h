#include <string>
#include <iostream>
using namespace std;

class Student
{
	public:

		Student(){};
		
		// Pure virtual function
		virtual void printGrade() = 0;
		
		// Mutators
		void setGrade(double x)
		{
			grade = x;
		}

		void setName(string n)
		{
			name = n;
		}

		// Accessors
		double getGrade()
		{
			return grade;
		}

		string getName()
		{
			return name;
		}

	private:

		double grade;
		string name;

};

class studentAndGrade : public Student
{
	public:

		studentAndGrade()
		{
			string x;
			double n;

			cout << "Enter the student's name: ";
			getline(cin,x);
			setName(x);
			
			cout << endl << "Enter the student's final grade: ";
			cin >> n;
			setGrade(n);
		}

		void printGrade()
		{
			cout << endl << endl << "Student Name: " << getName() << endl;
			cout << "Student Grade: " << getGrade() << endl << endl;
		}

};


