//CONSOLE GAME PROJECT BETA VERSION BT DIMI AND VIN
#include <iostream>
#include<limits>
#include <string>
#include "vin.h"
#include "dim.h"

using namespace std;
int main() {
	string name;
	string country;
	int age = 100000;
	cout << "Please,enter your name: ";
	cin >> name;
	system("cls");
	cout << "Wellcome to Wittol," << name;
	cout << "\n\nWhere are you from, " << name << "?: ";
	cin >> country;
	system("cls");
	cout << "OMG i love " << country;
	bool validInput = false;//if the age is wrong 
	cout << "\n\nHow old are you?: ";
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
	cout << "\nWhat is your favorite food " << name << "?: ";
	cin >> food;
	system("cls");
	cout << "OMG,i like " << food << " a lot, kinda spicy tho";
	cout << "\n\nSo,what is your favorite sport?: ";// we asking fav spor
	cin >> sport;
	system("cls");
	cout << sport << " is very cool,i played a bit as well back in the day,not for long tho";
	cout << "\n\nIf you could travel somewhere,where would you like to go," << name << "?: ";//we asking where the player likes to travel
	cout << "\n\n1.Europe\n2.Africa\n3.Asia\n4.North America\n5.South America\n6.Oceania: ";//the pool between what the player can choose
	bool validchoice = false;
	while (validchoice == false) {
		cin >> choice;
		switch (choice) {
		case '1':
			system("cls");
			int Europe;
			Europe = 100;
			cout << "Excellent choice!\nEurope is amazing!\n\n";
			cout << "So,where in Europe whould you like to go?\n";
			cout << "1.Portugal\n2.Greece\n3.Hungary\n4.Netherlands\n5.Australia: ";
		case'2':
			system("cls");
			cout << "Excellent choice!\nAfrica is amazing!\n\n";
			cout << "1.Nigeria\n2.Egypt\n3.Zimbambue\n4.Cameroon\n5.Canada: ";
			validchoice = true; break;//second choice
		case'3':
			system("cls");
			cout << "Excellent choice!\nAsia is amazing!\n\n";
			cout << "1.Japan\n2.South Korea\n3.China\n4.Nepal\n5.Argentina: ";
			validchoice = true; break;//third choice
		case'4':
			system("cls");
			cout << "Excellent choice!\nNorth America is amazing!\n\n";
			cout << "1.USA\n2.Canada\n3.Mexico\n4.Cuba\n5.Cyprus: ";
			validchoice = true; break;//fourth choice
		case'5':
			system("cls");
			cout << "Excellent choice!\nSouth America is amazing!\n\n";
			cout << "1.Bolivia\n2.Argentina\n3.Brasil\n4.Guiana\n5.Spain: ";
			validchoice = true; break;//fifth choice
		case'6':
			system("cls");
			cout << "Excellent choice!\nOceania is amazing!\n\n";
			cout << "1.Australia\n2.New Ziland\n3.Indonesia\n4.Papua New Guinea\n5.Spain: ";
			validchoice = true; break;//sixth choice
		default:
			system("cls");
			cout << "Naaah you can't do that, TRY AGAIN: ";
			cout << "\n1.Europe\n2.Africa\n3.Asia\n4.North America\n5.South America\n6.Oceania: "; break;
		}
	}
	return 0;
}

