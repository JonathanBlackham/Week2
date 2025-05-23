// Drinks Machine Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function to display the drink options
void displayDrink() 
{
	cout << "Welcome, choose your drink" << endl;
	cout << "1. Coke" << endl;
	cout << "2. Fanta" << endl;
	cout << "3. Sprite" << endl;
	cout << "4. Water" << endl;
	cout << "5. Lemonade" << endl;
	cout << "Enter number" << endl;
}



bool showSelection(int number) {
	switch (number) {
	case 1:
		cout << "You have chosen Coke" << endl;
		return true;
	case 2:
		cout << "You have chosen Fanta" << endl;
		return true;
	case 3:
		cout << "You have chosen Sprite" << endl;
		return true;
	case 4:
		cout << "You have chosen Water" << endl;
		return true;
	case 5:
		cout << "You have chosen Lemonade" << endl;
		return true;
	default:
		cout << "Invalid choice, please choose a number between 1 and 5" << endl;
		return false;
	}
}

void tryGetDrink()
{
	int number;

	displayDrink();
	cin >> number;

	bool result = showSelection(number);

	if (result == false)
	{
		tryGetDrink();
	}
}
int main()
{
	tryGetDrink();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
