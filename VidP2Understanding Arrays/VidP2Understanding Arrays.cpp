#include <iostream>
using namespace std;

/*
	int zeroArray(int inputArray[])
	{
	//do somthing
	}
*/

	//

void zeroArray(int inputArray[]);

int main()
{
	int myArray[5] = { 11, 58, 4, 77, 9 };

	zeroArray(myArray);

	return 0;
}

void zeroArray(int inputArray[])
{
	inputArray[0] = 0;
	inputArray[1] = 0;	
	inputArray[2] = 0;	
	inputArray[3] = 0;	
	inputArray[4] = 0;	
}




