#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0)); // Seed the random number generator with the current time

	int randomNum = rand() % 101; // Generate a random number between 1 and 100

	cout << "Random number: " << randomNum << endl;

	if (randomNum % 2 == 0)
	{
		cout << "The number is even." << endl;
	}
	else
	{
		cout << "The number is odd." << endl;
	}
}
