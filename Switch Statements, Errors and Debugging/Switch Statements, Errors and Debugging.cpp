// Switch Statements, Errors and Debugging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int option = 2;

	switch (option)
	{
	case 1:
		cout << "Option 1 selected";
		break;
	case 2:
		cout << "Option 2 selected";
		break;
	case 3:
		cout << "Option 3 selected";
		break;
	default:
		cout << "Invalid option selected";
		break;
	}

	enum DayOfWeek
	{
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	DayOfWeek today = Wednesday;
	if (today == Wednesday)
	{
		cout << "Today is Wednesday" << endl;
	}
	else
	{
		cout << "Today is not Wednesday" << endl;
	}

enum gameState
{
mainMenu,
playing,
gameOver
};

gameState currentGameState = mainMenu;

switch (currentGameState)
{
    case mainMenu:
	{
		showMainMenu();
		break;
	}
	case playing:
	{
		runGameLogic();
		break;
	}
	case gameOver:
	{
		showGameOverScreen();
		break;
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
