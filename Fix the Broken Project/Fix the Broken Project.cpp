// Fix the Broken Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	// Variables
	int firstNumber = 0;
	int secondNumber = 0;
	int operationChoice = 0;
	int result = 0;

	// Ask the user to enter two numbers
	std::cout << "Enter a first whole number (1-10): ";
	std::cin >> firstNumber;

	std::cout << "Enter a second whole number (1-10): ";
	std::cin >> secondNumber;

	if (firstNumber >= 1 && firstNumber <= 10
		&& secondNumber >= 1 && secondNumber <= 10)
	{
		// Ask the user which operation they would like to perform
		std::cout << "Select an operation to perform on the two numbers:\n";
		std::cout << "1. Addition\n";
		std::cout << "2. Subtraction\n";
		std::cout << "3. Multiplcation\n";
		std::cout << "4. Division\n";

		std::cout << "User entered: ";
		cin >> operationChoice;



		// Perform the selected operation
		switch (operationChoice)
		{
		case 1: // Addition
		{
			result = firstNumber + secondNumber;
			break;
		}
		case 2: // Subtraction
		{
			result = firstNumber - secondNumber;
			break;
		}
		case 3: // Multiplication
		{
			result = firstNumber * secondNumber;
			break;
		}
		case 4: // Division
		{
			result = firstNumber / secondNumber;
			break;
		}
		}

		// Print out the result of the division
		std::cout << "The result is: " << result << "\n";
	}

	return 0;
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
