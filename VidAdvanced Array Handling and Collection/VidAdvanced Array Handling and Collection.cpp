#include <iostream>
using namespace std;

/*
int myArray[5] = {11, 58, 4, 77, 9};

for (int i = 0; i < 5; i++)
{
	myArray[i] = 0;
}
*/
/*
int myArray[5] = {11, 58, 4, 77, 9};

myArray[5] = 1;

*/

int sumArray(int inputArray[], int arraySize);

int main()
{
	int myArray[5] = { 11, 58, 4, 77, 9 };

	int sum = sumArray(myArray, 5);

	cout << "The sum is: " << sum << endl;
}

int sumArray(int inputArray[], int arraySize)
{
	int result = 0;

	for (int i = 0; i < arraySize; i++)
	{
		result += inputArray[i];
	}
	return result;
}

