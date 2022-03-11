#include "vin.h"
#include <iostream>
using namespace std;

string askGender()
{
	string gender;
	while (!(cin >> gender)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input! Try again!";
	}
	return gender;
}