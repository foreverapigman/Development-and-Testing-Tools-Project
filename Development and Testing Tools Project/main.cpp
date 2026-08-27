#include <iostream>
#include "rectangle.h"
using namespace std;

int main()
{
	Rectangle box(10, 5);
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;

	// Try to set a negative length value
	box.setLength(-5);
	cout << "After setting length to -5: " << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;
	// Try to set a negative width value
	box.setLength(5);
	box.setWidth(-3);
	cout << "After setting width to -3: " << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Width: " << box.getWidth() << endl;
	cout << "Area: " << box.getArea() << endl;
}