#include <iostream>
using namespace std;
struct Rectangle {
	int width;
	int height;
};
void modifyRectangleByValue(Rectangle rect) {
	rect.width += 10;
	rect.height += 5;
}
void modifyRectangleByReference(Rectangle& rect) {
	rect.width += 10;
	rect.height += 5;
}
void compareAreas(Rectangle rect1, Rectangle rect2) {
	int area1 = rect1.width * rect1.height;
	int area2 = rect2.width * rect2.height;
	if (area1 > area2) {
		cout << "Rectangle 1 is larger." << endl;
	}
	else if (area1 < area2) {
		cout << "Rectangle 2 is larger." << endl;
	}
	else {
		cout << "Both rectangles are equal in area." << endl;
	}
}
int main() {
	Rectangle rect1 = { 20, 30 };
	Rectangle rect2 = { 15, 25 };
	cout << "Before modification:" << endl;
	cout << "Rectangle 1: Width = " << rect1.width << ", Height = " << rect1.height << endl;
	cout << "Rectangle 2: Width = " << rect2.width << ", Height = " << rect2.height << endl;
	modifyRectangleByValue(rect1);
	modifyRectangleByReference(rect2);
	cout << "After modification:" << endl;
	cout << "Rectangle 1: Width = " << rect1.width << ", Height = " << rect1.height << endl;
	cout << "Rectangle 2: Width = " << rect2.width << ", Height = " << rect2.height << endl;
	compareAreas(rect1, rect2);
	return 0;
}



