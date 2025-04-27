#include <iostream>
using namespace std;
int main()
{
	cout << "Incrementing a counter using a while loop. " << endl;
	int counter = 1; 
	while (counter <= 10) 
	{
		cout << "Counter " << counter << endl; 
		counter++;
	}
	
	//
	
	cout << "Based on input, add #s to the screen in row and columns using a while loop. " << endl;
	int rows = 0;
	int columns = 0;
	
	cout << "Enter the number of rows: ";
	cin >> rows;
	
	cout << "Enter the number of columns: ";
	cin >> columns;
	
	int currentColumn = 0;
	while (currentColumn < columns)
	{
		int currentRow = 0;
		while (currentRow < rows)
		{
			cout << "#";
			currentRow++;
		}
		cout << endl;
		currentColumn++;
	}
	
	//
	
	cout << "Check a input number is inbetween 1-10 using a while loop. " << endl;
	int num;

	do
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
	} while (num < 1 || num > 10);
	cout << "You entered a valid number " << num << endl;

	//

	cout << "Check a input number is inbetween 10-20 using a do while loop and if else, repeat input if wrong.2 " << endl;
	bool isValid = false;
	int numEntered = 0;

	do
	{
		cout << "Enter a number between 10 and 20 ";
		cin >> numEntered;

		if (numEntered >= 10 && numEntered <= 20)
		{
			isValid = true;
		}
		else
		{
			isValid = false;
			cout << "That number is not between 10 and 20, please try again. " << endl;
		}
	} while (!isValid);
	cout << "Thanks for entering " << numEntered << ", that number is between 10 and 20." << endl;

	//

}


