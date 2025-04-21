// If Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 

using namespace std;

int main()
{
	
	int x = 3;

	if (x < 4)
	{
		x++; // increment x by 1

		std::cout << "x is less than 4, incremented x to " << x << std::endl;
	}

    int b = 5;

	if (b < 4)
	{
		b++; // increment b by 1 
	}
	else
	{
		b--; // decrement b by 1
		std::cout << "b is not less than 4, decremented b to " << b << std::endl;
	}

    int c = 4;

	if (c < 4)
	{
		c++; // increment c by 1
	}
	else if (c == 4)
	{
		c--; // decrement c by 1
	}

	cout << "c is " << c << endl;

	int d = 4;

	if (d < 4)
	{
		d++; // increment d by 1
	}
	else if (d > 4)
	{
		d--; // decrement d by 1
	}
	else
	{
		// d is equal to 4, do nothing
	}

	int e = 5;
	int f = 10;

	if (e > 0)
	{
		if (f > 0)
		{
			cout << "e and f are both positive" << endl;
		}
	}

	int g = 5;
	int h = 10;

	if (g > 0 && h > 0)
	{
		cout << "g and h are both positive" << endl;
	}

	int i = -2;
	int j = 10;

	if (i > 0 || j > 0)
	{
		cout << "i or j is positive" << endl;
	}

	int k = 5;
	int l = 10;

    if ((k > 0) ^ (l > 0))
	{
		cout << "only k or only l is positive, but not both" << endl;
	}

	int m = 5;
	int n = -3;
	int o = 0;

	if ((m > 0 && n > 0)          
        || (((o > 0) ^ (m > 0))
			&& (n > 0 && o > 0)))
	{
		cout << "complex condition met" << endl;
	}
	else
	{
		cout << "complex condition not met" << endl;
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
