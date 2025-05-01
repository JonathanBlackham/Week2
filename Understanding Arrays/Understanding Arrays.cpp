#include <iostream>
using namespace std;

/*
int(type) MyArray(Name) [10](ArraySize);
int scores[5] = {10, 20, 30, 40, 50};
if (scores[2] == 30)
{
	//Do something
}
scores[3] = 25;

int firstArray[5] = {11, 58, 4, 77, 9 };

cout << " FirstArray[2] = " << first Array[2] << endl;
*/


int main()
{
	int firstArray[5] = { 11, 58, 4, 77, 9 };

	cout << "FirstArray[2] = " << firstArray[2] << endl;

	int secondArray[5];

	secondArray[0] = 84;
	secondArray[1] = 59;	
	secondArray[2] = 7;
	secondArray[3] = 11;
	secondArray[4] = 19;

	cout << "SecondArray[0] = " << secondArray[0] << endl;
    
	int result = firstArray[1] + secondArray[1];

	cout << "The result of firstArray[1] + secondArray[1] is " << result << endl;

	return 0;
}

