#include <iostream>
#include<limits>
#include <string>
#include "vin.h"
#include "dim.h"

using namespace std;
int main() {
	string name;//the string of thename of prodagonist
	string country;//the stgring of the counntry of prodagoniost
	int age = 100000;//the intigure of age
	cout << "Please,ender your name: ";//here the player has to add a name
	cin >> name;//here the computer will read the name
	system("cls");
	cout << "Wellcome to Wittol," << name;//wellcome message for the player
	cout << "\nWhere are you from " << name << "?: ";//the player must complete where is from
	cin >> country;//the computer reads the country the player is from
	system("cls");
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
				system("cls");
				cout << "Big boy!\n";
				validInput = true;
			}
			else if (age > 0 && age < 18)//contition if age is less than 18
			{
				system("cls");
				cout << "Smalle boye!\n";
				validInput = true;
			}
			else
			{
				validInput = false;//contition if player says wrong age
				system("cls");
				cout << "Liar boye! Try again: ";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
		else
		{
			system("cls");
			cout << "Invalid input! Try again: ";//codition if player says stupid word
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	string food;//we asking fav food
	string sport;
	char choice;
	cout << "\nWhat is your favorite food: ";
	cin >> food;
	system("cls");
	cout << "OMG,i like " << food << " a lot, kinda spicy tho";
	cout << "\nSo,what is your favorite sport?: ";// we asking fav spor
	cin >> sport;
	system("cls");
	cout << sport << " is very cool,i played a bit as well back in the day,not for long tho";
	cout << "\nIf you could travel somewhere,where would you like to go?: ";//we asking where the player likes to travel
	cout << "\n1.Europe\n2.Africa\n3.Asia\n4.North America\n5.South America\n6.Oceania: ";//the pool between what the player can choose
	bool validchoice = false;
	while (validchoice == false) {
		cin >> choice;
		switch (choice) {
		case '1':
			system("cls");
			cout << "Excellent choice!\nEurope is amazing!";
			validchoice = true; break;// first choice
		case'2':
			system("cls");
			cout << "Excellent choice!\nAfrica is amazing!";
			validchoice = true; break;//second choice
		case'3':
			system("cls");
			cout << "Excellent choice!\nAsia is amazing!";
			validchoice = true; break;//third choice
		case'4':
			system("cls");
			cout << "Excellent choice!\nNorth America is amazing!";
			validchoice = true; break;//fourth choice
		case'5':
			system("cls");
			cout << "Excellent choice!\nSouth America is amazing!";
			validchoice = true; break;//fifth choice
		case'6':
			system("cls");
			cout << "Excellent choice!\nOceania is amazing!";
			validchoice = true; break;//sixth choice
		default:
			system("cls");
			cout << "Naaah you can't do that, TRY AGAIN: ";
			cout << "\n1.Europe\n2.Africa\n3.Asia\n4.North America\n5.South America\n6.Oceania: "; break;
		}
	}
	return 0;
}



