#include <iostream>
using namespace std;


int main()
{
	int arr[5]; // Stack allocated array
	cout << "Enter 5 integers array for stacked allocation: " << endl;
	
	cin >> arr[0]; // Input for the first element
	cin >> arr[1]; // Input for the second element
	cin >> arr[2]; // Input for the third element
	cin >> arr[3]; // Input for the fourth element
	cin >> arr[4]; // Input for the fifth element
	// Prompts the user to enter values for both arrays and prints the values and their memory addresses.
	cout << "Stack allocated array value and memory addresses: " << endl;
	cout << "Value " << arr[0] << ", Address. " << &arr[0] << endl; // Print the first element and its address
	cout << "Value " << arr[1] << ", Address. " << &arr[1] << endl; // Print the second element and its address
	cout << "Value " << arr[2] << ", Address. " << &arr[2] << endl; // Print the third element and its address
	cout << "Value " << arr[3] << ", Address. " << &arr[3] << endl; // Print the fourth element and its address
	cout << "Value " << arr[4] << ", Address. " << &arr[4] << endl; // Print the fifth element and its address
	cout << "Value " << *(arr+4) << ", Address. " << (arr+4) << endl;
	int* pArr = new int[5]; // Heap allocated array
	cout << "Enter 5 integers array for heap allocation: " << endl;
	cin >> pArr[0]; // Input for the first element
	cin >> pArr[1]; // Input for the second element
	cin >> pArr[2]; // Input for the third element
	cin >> pArr[3]; // Input for the fourth element
	cin >> pArr[4]; // Input for the fifth element

	cout << "Heap allocated array value and memory addresses: " << endl;
	cout << "Value " << pArr[0] << ", Address. " << &pArr[0] << endl; // Print the first element and its address
	cout << "Value " << pArr[1] << ", Address. " << &pArr[1] << endl; // Print the second element and its address
	cout << "Value " << pArr[2] << ", Address. " << &pArr[2] << endl; // Print the third element and its address
	cout << "Value " << pArr[3] << ", Address. " << &pArr[3] << endl; // Print the fourth element and its address
	cout << "Value " << pArr[4] << ", Address. " << &pArr[4] << endl; // Print the fifth element and its address
	// Deallocate the heap memory
	delete[] pArr; // Free the memory allocated for the heap array
	cout << "Heap memory deallocated." << endl; // Confirmation message



}

