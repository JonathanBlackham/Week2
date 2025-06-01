#include <iostream>
#include <string>
#include "person.h"
using namespace std;

person::person(std::string inName, int inAge) :name(inName), age(inAge) {}
person::person() {
	name = "Unknown";
	age = 0;
}
person::~person() {}

string person::getName()
{  
    return name;  
}
int person::getAge()
{
	return age;
}

int main() {
	
	person p("John", 30);

	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	
	return 0;
}
