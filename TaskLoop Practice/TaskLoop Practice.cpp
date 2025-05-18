#include <iostream>
using namespace std;


int main()
{
	int oneToTen = 0;
	int oneToTenTarget = 10;
	cout << "Use a while loop to print numbers from 1 to 10. " << endl;
	while (oneToTen < oneToTenTarget)
	{
		oneToTen++;
		cout << oneToTen << " " << endl;
	}
	//
	int inNum = 0;
	cout << "Use a do-while loop to prompt the user to input a number between 1 and 10. If the number is invalid, prompt them again." << endl;
	
	do // Check if the number is between 1 and 10
	{
		cin >> inNum; // Prompt the user to enter a number again
	} while (inNum < 1 || inNum > 10); // Continue until a valid number is entered
	cout << "You entered a valid number: " << inNum << endl;
	//
	cout << "Use a for loop to print the first 10 multiples of 3 (i.e., 3, 6, 9, ..., 30). " << endl;
	int multiplesOfThree = 0;
	for (int i = 0; i <= 9; i++)
	{
		multiplesOfThree += 3; // Increment by 3
		cout << multiplesOfThree << " " << endl;
	}
}

