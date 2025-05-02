#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
int heatMap[3][3] =
{
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
};
--
int enemyPositions[4][2] =
{
	{ 1, 2 },
	{ 3, 4 },
	{ 5, 6 },
	{ 7, 8 }
};
--
#include <vector>
#include <list>

int main()
{
vector<int> number;

list<int> scores;
}

*/
int main()
{
	int myArray[5] = { 11, 58, 4, 77, 9 };
	
	for (int i = 0; i < 5; i++)
	{
		myArray[i] = 0;
	}
	//
	vector<int> numbers;

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);

	cout << "The elements ";
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	numbers[1] = 50;

	//

	list<int> lNumbers;

	lNumbers.push_back(10);
	lNumbers.push_back(20);
	lNumbers.push_back(30);

	cout << "List elements ";
	for (list<int>::iterator it = lNumbers.begin(); it != lNumbers.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	lNumbers.push_front(5);
	return 0;
}

