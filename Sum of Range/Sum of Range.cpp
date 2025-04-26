#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int randomNum(int min = 1, int max = 100)
{
	
	return rand() % 101;
}

int main()
{
	srand(time(0)); // Seed the random number generator with the current time
	int randomNum = rand() % 101; // Generate a random number between 1 and 100
	cout << "Random number: " << randomNum << endl;
}


