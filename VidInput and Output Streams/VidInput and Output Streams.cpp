#include <iostream>
#include <fstream>
using namespace std;

/* 
int numEntered;
cin >> numEntered;
//
float pi = 3.14159;
cout << "Pi is " << pi << endl;
//
//Writing to a file using ofstream
std::ofstream outFile;("example.txt");
//Rerading from a file using ifstream
std::ifstream inFile;("example.txt");
*/

int main()
{
	ofstream outFile("integers.txt");
	if (outFile.is_open())
	{
		outFile << 10 << endl;
		outFile << 20 << endl;
		outFile << 30 << endl;
		outFile << 40 << endl;
		outFile << 50 << endl;

		outFile.close();

		cout << "File written successfully." << endl;
	}
	else
	{
		cout << "Error opening file." << endl;
	}
    
	//

	ifstream inFile("integers.txt");
	int number;

	if (inFile.is_open())
	{
		while (inFile >> number)
		{
			cout << number << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Error opening file." << endl;
	}
}

