#pragma once  
#include <iostream>  
#include <string>  
using namespace std;  

class person {  
public: 
	person(); // Default constructor
    person(string inName, int inAge); // Declaration only  
    ~person();  
    string getName();  
    int getAge(); 
    
private:  
    string name;
        int age;
};
