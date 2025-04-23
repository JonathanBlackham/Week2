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
	{
		cout << "Option 1 selected";
		break;
	}
	case 2:
	{
		cout << "Option 2 selected";
		break;
	}
	case 3:
	{
		cout << "Option 3 selected";
		break;
	}
	default:
	{
		cout << "Invalid option selected";
		return 0;
	}

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
	default:
	{
		cout << "Unknown game state";
		return 0;
	}
	}


	int playerHealth = 100;
	int damageTaken;
	string gameState = "Playing";

	cout << "Enter damage taken: ";
	cin >> damageTaken;

	if (damageTaken > 0 && damageTaken < playerHealth)
	{
		playerHealth = playerHealth - damageTaken;
	}
	else if (damageTaken >= playerHealth)
	{
		gameState = "Game Over";
		playerHealth = 0;
	}

	if (playerHealth > 0)
	{
		gameState = "Game Over";
	}


	cout << "Player health: " << playerHealth << endl;
	cout << "Game State: " << gameState << endl;

	return 0;
}