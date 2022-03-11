#include <iostream>
#include<limits>
using namespace std;
int main() {
	string name;//the string of thename of prodagonist
	string country;//the stgring of the counntry of prodagoniost
	int age = 100000;//the intigure of age
	cout << "Please,ender your name: ";//here the player has to add a name
	cin >> name;//here the computer will read the name
	cout << "Wellcome to Wittol," << name;//wellcome message for the player
	cout << "\nWhere are you from " << name << "?: ";//the player must complete where is from
	cin >> country;//the computer reads the country the player is from
	cout << "OMG i love " << country;
	bool validInput = false;//if the age is wrong 
	cout << "\nHow old are you?: ";//the age the player must submit 
	while (!validInput)// the loop for the age
	{
		if (cin >> age)
		{
			validInput = true;
			if (age >= 18 && age <= 100)//contition if age is bigger than 18
			{
				cout << "Big boy!\n";
				validInput = true;
			}
			else if (age > 0 && age < 18)//contition if age is less than 18
			{
				cout << "Smalle boye!\n";
				validInput = true;
			}
			else
			{
				validInput = false;//contition if player says wrong age
				cout << "Liar boye! Try again: ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		else
		{
			cout << "Invalid input! Try again: ";//codition if player says stupid word
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	string food;//we asking fav food
	string sport;
	cout << "\nWhat is your favorite food: ";
	cin >> food;
	cout << "OMG,i like " << food << " a lot, kinda spicy tho";
	cout << "\nSo,what is your favorite sport?: ";// we asking fav spor
	cin >> sport;
	cout << sport << " is very cool,i played a bit as well back in the day,not for long tho";
	cout << "\nIf you could travel somewhere,where would you like to go?: ";//we asking where the player likes to travel
	return 0;
}




