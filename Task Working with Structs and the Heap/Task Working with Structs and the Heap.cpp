#include <iostream>
#include <string>
using namespace std;

struct Car {
	string make;
	string model;
	int year;
};
Car* createCar() {
	Car* newCar = new Car;
	cout << "Enter car make: ";
	cin >> newCar->make;
	cout << "Enter car model: ";
	cin >> newCar->model;
	cout << "Enter car year: ";
	cin >> newCar->year;
	return newCar;
}
void printCarInfo(Car* car) {
	cout << "Car Make: " << car->make << endl;
	cout << "Car Model: " << car->model << endl;
	cout << "Car Year: " << car->year << endl;
}
Car* compareCars(Car* car1, Car* car2) {
	if (car1->year > car2->year) {
		return car1;
	}
	else {
		return car2;
	}
}
void deleteCar(Car* car) {
	delete car;
	cout << "Car memory deallocated." << endl;
}

int main()
{
	cout << "Car 1 Information:" << endl;
	Car* car1 = createCar();
	cout << "Car 2 Information:" << endl;
	Car* car2 = createCar();
	cout << "Car 1 Information:" << endl;
	printCarInfo(car1);
	cout << "Car 2 Information:" << endl;
	printCarInfo(car2);
	Car* newerCar = compareCars(car1, car2);
	cout << "The newer car is: " << newerCar->make << " " << newerCar->model << " (" << newerCar->year << ")" << endl;
	deleteCar(car1);
	deleteCar(car2);
	return 0;
}

