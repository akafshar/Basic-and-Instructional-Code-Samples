// Amir K. Afshar
// 13 February 2019
// Header File with Class Definition that creates and sorts a random vector
// of user-specified size. 
// Also includes a 'swap()' function

#include <iostream>
#include <vector>
using namespace std;

void swap(vector <int> &y, int m)
{
	int temp;
	
	if(y[m] > y[m + 1])
	{
		temp = y[m];
		y[m] = y[m + 1];
		y[m + 1] = temp;
	}
}

void BubbleSort(vector <int> &y)
{
		for (int k = 0; k < y.size(); k++)
		{
			for (int m = 0; m < y.size() - k - 1; m++)
			{
				swap(y,m);
			}
		}
}

class makeArrayThenSort
{
	public:

		void declareVector()
		{
			cout << "How many elements would you like in your random vector?: ";
			cin >> num;
		}

		int getNum()
		{
			return num;
		}

		makeArrayThenSort()
		{
			vector <int> x;
			declareVector();

			for (int i = 0; i < getNum(); i++)
			{
				x.push_back(rand() % 26);
			}

			cout << endl << "Your vector, unsorted: " << endl;

			for (int j = 0; j < getNum(); j++)
				cout << x.at(j) << " ";

			BubbleSort(x);

			cout << endl << endl << "Your vector, sorted: " << endl;

			for (int n = 0; n < getNum(); n++)
				cout << x.at(n) << " ";

			cout << endl;
		}

	private:

		int num;

};

