#include "rectangle.h"

int length;
int width;

Rectangle::Rectangle(int l, int w)
{
	if (l < 0)
	{
		l = 0;
	}
	if (w < 0)
	{
		w = 0;
	}
	length = l;
	width = w;
}

int Rectangle::setLength(int l)
{
	if (l < 0)
	{
		l = 0;
	}
	length = l;
	return length;
}

int Rectangle::setWidth(int w)
{
	if (w < 0)
	{
		w = 0;
	}
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