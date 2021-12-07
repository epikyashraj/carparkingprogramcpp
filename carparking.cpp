#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int number; 

	cout << "How Many Car Do You Have: ";

	cin >> number;
	cin.ignore();

	string* pCars = new string[number];

	for (int i = 0; i < number; i++)
	{
		cout << "Enter The Car #" << i + 1 << " ";
		getline(cin, pCars[i]);
	}

	for (int i = 0; i < number; i++)
	{
		cout << "Parked " << pCars[i] << " At " << i + 1 << " Spot " << endl;
	}

	cout << endl;
}
