#include <iostream>  
using namespace std;

int incrementByone(int numIn)
{
	numIn++;
	int result = numIn++;
	return result; // Removed "firstNum" from return statement as it is invalid.  
}

int multplyByTwo(int results)
{
	results = results * 2;
	return results; // Removed "firstNum" from return statement as it is invalid.  
}

int incrementbyfour(int results)
{
	results = results + 4;
	return results; // Removed "firstNum" from return statement as it is invalid.  
}

int divideByTwo(int results)
{
	results = results / 2;
	return results; // Removed "firstNum" from return statement as it is invalid.  
}

int subtractOne(int results, int numIn)
{
	results = results - numIn;
	return results; // Removed "firstNum" from return statement as it is invalid.  
}


void chainedFunctionsBody()
{
	int numIn = 0; // Initialize variables to avoid uninitialized memory usage.  
	int result = 0; // Initialize variables to avoid uninitialized memory usage.
	int firstNum = 0; // Initialize variables to avoid uninitialized memory usage.
	cout << "Enter a number "; // Added prompt for user input.
	cin >> numIn;

	firstNum = numIn; // Capture numIn for firstNum.

	result = incrementByone(numIn); // Capture the returned value.    
	cout << numIn << " + 1 = " << result << endl; // Fixed syntax issues.  

	result = multplyByTwo(result); // Capture the returned value.
	cout << "  * 2 = " << result << endl; // Fixed syntax issues.

	result = incrementbyfour(result); // Capture the returned value.
	cout << "  + 4 = " << result << endl; // Fixed syntax issues.

	result = divideByTwo(result); // Capture the returned value.
	cout << "  / 2 = " << result << endl; // Fixed syntax issues.

	cout << "  - " << firstNum << endl; // Fixed syntax issues.

	result = subtractOne(result, firstNum); // Capture the returned value.
	cout << "      = " << result << endl; // Fixed syntax issues.
}


int main()
{
	chainedFunctionsBody();
}
