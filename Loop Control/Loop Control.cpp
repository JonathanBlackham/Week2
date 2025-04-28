// Loop Control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /* 
	* for(initialization; condition; increment/decrement)
    * {
	* loop body
    * }
    */

	//

	cout << "Incrementing a counter using a for loop. " << endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "i is " << i << std::endl;
	}

	// 

	int n, sum = 0;

	cout << "Enter a number of natural number to sum: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
		
	}
	cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

	//

	cout << "Incrementing a counter using a for loop. " << endl;
	int numEntered = 0;

	cout << "Enter a number: ";
	cin >> numEntered;

 	for (int i = 0; i <= numEntered; i++)
	{
		cout << i << " ";
	}

	cout << endl;

	//

	cout << "Decrementing a counter using a for loop. " << endl;
	
	for (int i = numEntered; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;

	//

	cout << "Nested loop";
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << i * j << " ";
		}
		cout << endl;
	}

	//

	cout << "Using a for loop with an if and brake loop when target is hit. " << endl;
	int target = 5;

	for (int i = 1; i <= 10; i++)
	{
		if (i == target)
		{
			cout << "Found the target number: " << target << endl;
			break; // Exit the loop when the target is found
		}
		cout << "Current number: " << i << endl;
	}

	//
	cout << "Skipping even numbers using a if/for loop. " << endl;
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			continue; // Skip even numbers
		}
		cout << i << " ";
    }
	cout << endl;

	//
	cout << "Break at target number. " << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			break; // Exit the loop when i is 4
		}
		cout << "i = " << i << endl;
	}

	//

	cout << "Continue at target number. " << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4)
		{
			continue; 
		}
		cout << "i = " << i << endl;
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
