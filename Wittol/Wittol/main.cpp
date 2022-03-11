#include <iostream>
#include<limits>
using namespace std;
int main() {
	string name;
	string country;
	int age = 100000;
	cout << "Please,eneder your name: ";
	cin >> name;
	cout << "Wellcome to Wittol," << name;
	cout << "\nWhere are you from " << name << "?: ";
	cin >> country;
	cout << "OMG i love " << country;
	bool validInput = false;
	cout << "\nHow old are you?: ";
	while (!validInput)
	{
		if (cin >> age)
		{
			validInput = true;
			if (age >= 18 && age <= 100)
			{
				cout << "Big boy!\n";
				validInput = true;
			}
			else if (age > 0 && age < 18)
			{
				cout << "Smalle boye!\n";
				validInput = true;
			}
			else
			{
				validInput = false;
				cout << "Liar boye! Try again: ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		else
		{
			cout << "Invalid input! Try again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	string food;
	string sport;
	cout << "\nWhat is your favorite food: ";
	cin >> food;
	cout << "OMG,i like " << food << " a lot, kinda spicy tho";
	cout << "\nSo,what is your favorite sport?: ";
	cin >> sport;
	cout << sport << " is very cool,i played a bit as well back in the day,not for long tho";
	cout << "\nIf you could travel somewhere,where would you liek to go?: ";
	return 0;
}




