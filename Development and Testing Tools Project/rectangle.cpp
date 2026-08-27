#include "rectangle.h"

int length;
int width;

Rectangle::Rectangle(int l, int w)
{
	length = l;
	width = w;
}

int Rectangle::setLength(int l)
{
	length = l;
	return length;
}

int Rectangle::setWidth(int w)
{
	width = w;
	return width;
}

int Rectangle::getLength()
{
	return length;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::getArea()
{
	return length * width;
}