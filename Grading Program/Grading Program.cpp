// Grading Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int grade;
	cout << "Enter a grade (0-100): ";
	cin >> grade;

	//if (grade < 0 || grade > 100)
	//{
	//	cout << "Invalid grade. Please enter a number between 0 and 100." << endl;
	//	cin >> grade;
	//}
	if (grade < 0 || grade > 100)
	{
		cout << "Invalid grade. Grade must be between 0 and 100." << endl;
		cin >> grade;
	}
	if (grade < 0 || grade > 100)
	{
		cout << "Invalid grade. Closing program" << endl;
		return 1; // Exit the program if the input is invalid
	}
	else if (grade > 79)
	{
		cout << "You received an A*." << endl;
	}
	else if (grade > 69)
	{
		cout << "You received a A." << endl;
	}
	else if (grade > 59)
	{
		cout << "You received a B." << endl;
	}
	else if (grade > 39)
	{
		cout << "You received a D." << endl;
	}
	else if (grade > 0)
	{
		cout << "You received an F." << endl;
	}
	else
	{
		cout << "You received an U." << endl;
	}
	return 0; // Exit the program successfully
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
