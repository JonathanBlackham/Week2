// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int m()
{
 // dataType variableName;
	int age;
	float weight;
	double distance;
	bool isAlive;
	char initial;
	string name;

	unsigned short int betterAge;
	long double hugeDistance;

	age = 30;
	weight = 190.5f;
	distance = 1212.987;
	isAlive = true;
	initial = 'j';
	name = "jonathan";

	cout << "My name is " << name << " and I am " << age << " years old. " << endl;
	cout << "Am I alive? " << isAlive << endl;

	int newAge;
	newAge = age; // 30

	int newestAge = 25;


	int a = 10;
	int b = 3;

	int add = a + b; // 13
	int subtract = 10 - b; //7
	int multiply = a * 3; // 30
	int devision = a / b; // 3 or 3.3333
	int mod = a % b; // 1
	float div2 = 10 / 3.0f; // 3.3333

	cout << div2 << endl;

	int result = 1 + 2 * 3 + 4; // 13 or 11
	cout << result << endl;

	int x = 10; 
	x = x + 20; // same as x += 20;
	x += 20; // same as x = x + 20;
	x -= 10; // same as x = x - 10;
	x *= 10; // same as x = x * 10;
	x /= 10; // same as x = x / 10;
	x %= 10; // same as x = x % 10;
	x++; // same as x = x + 1;
	x--; // same as x = x - 1;
	++x; // same as x = x + 1;
	--x; // same as x = x - 1;
	float myFloat = 30.5f;
	int myInt = (int) myFloat;

	 a = 20;
	 b = (float) a;

	 result = (int) (2.4 + 1.6); 
	cout << result << endl;

	int numEntered1 = 0;
	int numEntered2 = 0;
	int numEntered3 = 0;
	int numEntered4 = 0;
	int numEntered5 = 0;

	std::cout << "Enter a whole number: ";
	std::cin >> numEntered1;
	std::cout << "Enter another whole number: ";
	std::cin >> numEntered2;
	std::cout << "Enter a third whole number: ";
	std::cin >> numEntered3;
	std::cout << "Enter a fourth whole number: ";
	std::cin >> numEntered4;
	std::cout << "Enter a fifth whole number: ";
	std::cin >> numEntered5;
	std::cout << "\n";
	int finalResult = numEntered1 + numEntered2 + numEntered3 + numEntered4 + numEntered5 / 5;
	std::cout << "The average of the five numbers is: " << finalResult << "\n";
	std::cout << "The sum of the five numbers is: " << numEntered1 + numEntered2 + numEntered3 + numEntered4 + numEntered5 << "\n";
	std::cout << "Calculate, display the sum and product of the numbers entered: " << numEntered1 << " + " << numEntered2 << " + " << numEntered3 << " + " << numEntered4 << " + " << numEntered5 << " /5 " << "\n";

	float inches;
	std::cout << "Enter the number of inches: ";
	std::cin >> inches;

	float feet = inches / 12;
	std::cout << "In feet: " << feet << std::endl;

	float centermeters = inches * 2.54;
	std::cout << "In centimeters: " << centermeters << std::endl;

	float meters = inches * 0.0254;
	std::cout << "In meters: " << meters << std::endl;


	int minerals;
	int addMinerals;
	int subMinerals;
	int energy;
	int addEnergy;
	int subEnergy;
	int alloys;
	int addAlloys;
	int subAlloys;
	int surplusAlloys;
	int monthsMinerals;



	std::cout << "Enter mouthly mineral production: ";
	std::cin >> addMinerals;
	std::cout << "Enter monthly mineral consumption: ";
	std::cin >> subMinerals;
	std::cout << "Enter mouthly energy production: ";
	std::cin >> addEnergy;
	std::cout << "Enter monthly energy consumption: ";
	std::cin >> subEnergy;
	std::cout << "Enter mouthly alloys production: ";
	std::cin >> addAlloys;
	std::cout << "Enter monthly alloys consumption: ";
	std::cin >> subAlloys;
	minerals = addMinerals - subMinerals;
	energy = addEnergy - subEnergy;
	alloys = addAlloys - subAlloys;
	monthsMinerals = minerals;
	std::cout << "Minerals: " << minerals << std::endl;
	std::cout << "Energy: " << energy << std::endl;
	std::cout << "Alloys: " << alloys << std::endl;
	std::cout << "Net resources per month: " << std::endl;
	std::cout << "Minerals " << minerals << std::endl;
	std::cout << "Energy " << energy << std::endl;
	std::cout << "Alloys " << alloys << std::endl;

	std::cout << "Net resources for 6 month: " << std::endl;
	std::cout << "Minerals " << minerals * 6 << std::endl;
	std::cout << "Energy " << energy * 6 << std::endl;
	std::cout << "Alloys " << alloys * 6 << std::endl;
	std::cout << "Net resources for 12 month: " << std::endl;
	std::cout << "Minerals " << minerals * 12 << std::endl;
	std::cout << "Energy " << energy * 12 << std::endl;
	std::cout << "Alloys " << alloys * 12 << std::endl;
	surplusAlloys = monthsMinerals * 0.2f;
	std::cout << "additional alloys produced from surplus minerals: " << "After 6 months: " << surplusAlloys * 6 << std::endl;
	std::cout << "after 12 months: " << surplusAlloys * 12 << std::endl;


	

	return 1;

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
