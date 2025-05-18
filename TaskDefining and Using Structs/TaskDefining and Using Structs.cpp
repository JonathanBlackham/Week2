#include <iostream>  
#include <string>  
using namespace std;  

struct person  
{  
string name;  
int age;  
float height; // in meters  
};  

/*static void iSizeOut(const person& in)
{  
cout << "Size of person struct is: " << sizeof(in) << endl;  
}*/ 

int main()  
{  
person person1;  
person1.name = "John";  
person1.age = 30;  
person1.height = 1.75;  
person person2;  
person2.name = "Jane";  
person2.age = 25;  
person2.height = 1.65;  
person* person3 = new person;
person3->name = "Doe";
person3->age = 28;
person3->height = 1.80;
cout << "Person 1: " << person1.name << ", Age: " << person1.age << ", Height: " << person1.height << "m" << endl;  
cout << "Person 2: " << person2.name << ", Age: " << person2.age << ", Height: " << person2.height << "m" << endl;  

cout << sizeof(person1) << endl;
cout << sizeof(person2) << endl;
cout << sizeof(person3) << endl;
return 0;  
}
